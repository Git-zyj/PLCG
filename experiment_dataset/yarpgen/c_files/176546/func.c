/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176546
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((max((var_2), (((/* implicit */unsigned long long int) var_4)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) ((unsigned char) var_4))) : (((/* implicit */int) var_8))));
    var_12 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_7))));
                /* LoopSeq 1 */
                for (short i_2 = 1; i_2 < 10; i_2 += 2) 
                {
                    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_1] [i_0])))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) /* same iter space */
                    {
                        var_15 &= min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_0 [i_0] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)46)))))) ? (arr_5 [(signed char)6] [i_2] [i_2 + 2]) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)92))))))), (((/* implicit */int) ((((/* implicit */int) (signed char)117)) == (((/* implicit */int) (short)6861))))));
                        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (short)6861))) ? (min((((var_6) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)127)))), (((/* implicit */int) min((arr_6 [i_1] [i_1] [i_3]), ((short)6857)))))) : (((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) ((_Bool) var_9))) : (((/* implicit */int) ((((/* implicit */int) (short)6878)) >= (((/* implicit */int) (signed char)36))))))))))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) /* same iter space */
                    {
                        var_17 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) - (max((-662223243), (((/* implicit */int) (_Bool)1))))));
                        arr_12 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */long long int) var_10);
                    }
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) /* same iter space */
                    {
                        arr_16 [i_0] [i_2] [i_5] = ((/* implicit */unsigned long long int) arr_10 [i_0] [(short)5] [i_2 - 1] [i_5] [i_5]);
                        arr_17 [5] [5] [i_2] [(_Bool)1] = ((unsigned int) var_9);
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((6864614U) | (((/* implicit */unsigned int) arr_18 [i_0] [i_1] [i_6])))))));
                            var_19 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_1] [i_0] [i_5] [i_6])) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) (signed char)120))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-6886))) : (536805376U)));
                            var_20 = (+((-(67108863))));
                        }
                        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_0] [(short)5] [i_2] [(unsigned char)4]))) * (((unsigned int) (_Bool)0)))))));
                        var_22 = var_1;
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned int) (signed char)-115);
                        arr_22 [i_0] [i_1] [i_2] = ((/* implicit */short) 13856812791000104459ULL);
                        arr_23 [i_0] [i_0] [i_2 + 1] [i_1] = ((/* implicit */int) ((((var_2) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) == (4294967295U))))))) * (((/* implicit */unsigned long long int) var_0))));
                    }
                    var_24 = ((/* implicit */_Bool) min((((long long int) arr_7 [i_0] [i_0])), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_2] [(unsigned char)8] [i_2])) : (((/* implicit */int) var_6))))))));
                }
            }
        } 
    } 
    var_25 = var_10;
}
