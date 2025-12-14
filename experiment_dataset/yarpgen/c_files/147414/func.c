/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147414
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
    var_11 *= ((/* implicit */short) min((5605229100765750398LL), (5605229100765750412LL)));
    var_12 &= ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        var_13 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (var_3))));
                        var_14 = ((/* implicit */signed char) (((_Bool)1) ? (((((/* implicit */_Bool) -5605229100765750395LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)116)))) : ((~(((/* implicit */int) var_10))))));
                    }
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((int) arr_6 [i_2] [i_1] [9ULL] [(short)1])))));
                    var_16 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_0 [i_2])), (arr_1 [(short)1])))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) ((var_1) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)78))) ^ (-7053412779646295834LL))))))) : (((/* implicit */int) max((((/* implicit */short) (signed char)32)), ((short)16384))))));
}
