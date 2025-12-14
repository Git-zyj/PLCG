/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111233
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
    var_18 ^= ((/* implicit */signed char) ((var_6) ? (((((/* implicit */_Bool) ((((((/* implicit */int) var_3)) + (2147483647))) << (((((((/* implicit */int) var_3)) + (32738))) - (12)))))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_3), (var_9))))) : (((((/* implicit */_Bool) var_2)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (short)9816))))))) : (((((/* implicit */_Bool) (~(var_8)))) ? (var_8) : ((~(var_4)))))));
    var_19 ^= ((/* implicit */short) ((var_17) | (var_0)));
    var_20 = ((/* implicit */int) min((var_20), (((((/* implicit */int) var_7)) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_10))))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))));
                var_22 = min((max((max((((/* implicit */long long int) arr_1 [i_0] [i_0])), (arr_0 [i_0] [i_1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (arr_1 [i_0] [17LL]) : (arr_1 [(_Bool)1] [i_1])))))), (var_2));
                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((arr_0 [i_1] [i_1]) & (arr_0 [i_1] [i_1]))) > (((/* implicit */long long int) min((4038213496U), (((/* implicit */unsigned int) 2147483647))))))))));
                var_24 = ((/* implicit */long long int) var_14);
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_25 &= ((/* implicit */long long int) (((!(arr_3 [i_0 - 1] [i_1] [i_0]))) ? (((/* implicit */int) max((var_3), (((/* implicit */short) arr_3 [i_0 + 1] [i_1] [8]))))) : ((+(((/* implicit */int) arr_3 [i_0 - 1] [i_2] [i_0]))))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (long long int i_4 = 0; i_4 < 20; i_4 += 1) /* same iter space */
                            {
                                var_26 = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_2] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((arr_4 [i_1] [i_3] [i_4]) | (-1LL)))));
                                arr_12 [i_0 + 1] [i_1] [i_0] [i_1] [i_0] = (+((+(((/* implicit */int) var_7)))));
                                arr_13 [i_0] [i_2] [i_0] [i_4] &= ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_4))));
                                arr_14 [i_0 + 1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0 - 1])) ? (arr_1 [i_0] [i_0 + 1]) : (arr_1 [i_0] [i_0 - 1])));
                            }
                            for (long long int i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
                            {
                                var_27 += ((((/* implicit */_Bool) (-(var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_2] [i_2] [i_5] [i_0])))))) : (((arr_6 [i_2] [i_3]) ? (max((arr_0 [i_2] [i_1]), (arr_11 [i_0 + 1] [i_2] [i_2] [i_3] [i_5]))) : (var_12))));
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_3] [i_0] [i_5] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0]))))));
                                var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) min((((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_7)) ? (arr_11 [i_0] [i_2] [i_2] [i_3] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3] [i_3] [i_5]))))), (((((/* implicit */_Bool) ((var_14) ? (arr_5 [i_2] [i_2] [i_2]) : (arr_5 [i_0] [i_3] [i_2])))) ? (arr_4 [i_0 + 1] [i_0] [i_0 - 1]) : (var_8))))))));
                                arr_18 [i_0] = arr_10 [i_3] [i_3] [i_0] [i_3] [i_5];
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
