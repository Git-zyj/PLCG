/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146735
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
    var_18 = ((/* implicit */unsigned short) ((_Bool) var_3));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 19; i_2 += 1) 
            {
                {
                    var_19 &= ((((/* implicit */_Bool) (~(((unsigned int) arr_6 [i_0] [i_0] [i_2 - 3]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : ((~(((long long int) 1577876968)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        arr_10 [i_1] [i_2] [i_3] = ((/* implicit */short) arr_6 [i_2 - 2] [11LL] [i_2 - 3]);
                        arr_11 [i_3] [(short)6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_8))));
                    }
                }
            } 
        } 
    } 
}
