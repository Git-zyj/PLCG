/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126023
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
    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((unsigned short) (-(max((var_15), (((/* implicit */unsigned int) var_11))))))))));
    var_17 = ((/* implicit */long long int) ((var_3) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 1; i_4 < 8; i_4 += 4) 
                        {
                            var_18 = ((/* implicit */short) ((unsigned int) (unsigned char)11));
                            var_19 = ((/* implicit */_Bool) (-(((arr_12 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 + 3] [i_4 + 2] [i_4 + 2]) + (((/* implicit */int) arr_11 [i_1 - 1] [i_4 + 3] [i_1 - 1] [i_4]))))));
                            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_1 [i_4 + 3]), (((/* implicit */unsigned int) (unsigned short)1792))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned short)63740)))) : (((arr_1 [i_4 + 2]) & (arr_1 [i_4 + 3]))))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 0; i_5 < 11; i_5 += 1) 
                        {
                            var_21 *= ((/* implicit */_Bool) max((((unsigned int) (_Bool)1)), (max((((/* implicit */unsigned int) arr_15 [i_1] [i_0] [i_1] [6LL] [i_1 - 1])), (var_10)))));
                            var_22 *= ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)1), (var_4))))) == (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2]))))))))));
                        }
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_12 [i_1 - 1] [i_1 - 1] [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_1 + 1]), (arr_12 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 2] [i_1 + 2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_9)) : (arr_7 [i_0])))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1])))))))) : (((((/* implicit */_Bool) arr_0 [i_3])) ? (((((/* implicit */_Bool) var_2)) ? (arr_10 [(short)3] [i_2] [i_1]) : (((/* implicit */unsigned long long int) 10U)))) : (((/* implicit */unsigned long long int) var_14))))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((arr_1 [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) / (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0])) ? (arr_9 [i_0] [i_0] [i_0]) : (min((((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_0] [i_0])), (4294967288U))))))))));
        var_25 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((unsigned int) arr_4 [i_0]))), (var_14)));
        var_26 = ((/* implicit */short) ((((/* implicit */long long int) min((((/* implicit */unsigned int) max((((/* implicit */signed char) var_4)), (var_1)))), (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) - (var_15)))))) / ((+((-9223372036854775807LL - 1LL))))));
    }
}
