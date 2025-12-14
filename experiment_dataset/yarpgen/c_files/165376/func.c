/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165376
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_10 = ((/* implicit */_Bool) var_8);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_2] [i_1 + 1] [i_0] = ((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */int) (unsigned char)31)));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */int) (short)(-32767 - 1));
                    var_11 = (short)-32749;
                    arr_10 [i_0] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned char)80)) : (((/* implicit */int) (short)(-32767 - 1))))) : (((((/* implicit */_Bool) (unsigned char)80)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
        var_12 = var_1;
    }
    var_13 = ((/* implicit */unsigned char) (unsigned short)5377);
}
