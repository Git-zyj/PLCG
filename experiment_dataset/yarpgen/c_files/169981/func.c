/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169981
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_4 [(_Bool)1] [(_Bool)0] = ((/* implicit */unsigned int) ((var_4) >= (((/* implicit */int) (_Bool)1))));
        arr_5 [i_0] [i_0] |= ((/* implicit */unsigned char) arr_3 [i_0] [i_0]);
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((int) arr_0 [i_1 + 1] [i_1 - 1])))));
                    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)149))));
                    var_18 = ((/* implicit */long long int) (((_Bool)1) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0)))))));
                }
            } 
        } 
    }
    var_19 = (!(((/* implicit */_Bool) var_4)));
}
