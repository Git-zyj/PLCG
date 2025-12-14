/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179069
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_0 [i_4])) : (((/* implicit */int) arr_0 [i_0]))))));
                                var_20 = ((_Bool) max((((/* implicit */int) max((((/* implicit */short) arr_3 [i_0])), (var_4)))), ((~(((/* implicit */int) arr_2 [i_4]))))));
                                arr_15 [i_2] [i_1] [i_2 + 3] [i_3] [i_4] = ((/* implicit */_Bool) max((((arr_13 [i_0] [i_1] [i_2 + 2] [i_3] [i_4] [i_2]) ? (((/* implicit */int) arr_13 [i_0] [i_1] [i_2 - 1] [i_3] [i_4] [i_2])) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_2 + 2] [i_3] [i_2])))), (max((((/* implicit */int) (_Bool)1)), ((((_Bool)1) ? (-448023005) : (((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_21 = ((/* implicit */unsigned int) min((((arr_5 [i_5] [i_1] [i_0]) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_5])))), (((/* implicit */int) arr_0 [i_0]))));
                    /* LoopSeq 3 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_23 [i_7] [i_6] [i_5] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned short) arr_18 [i_0] [i_1] [i_5]))))) ? ((~(var_12))) : (((/* implicit */unsigned long long int) arr_19 [i_0] [i_0] [i_0] [i_0]))))));
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_17))) ? (((((/* implicit */_Bool) ((var_17) ? (((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_5] [i_5] [i_6] [i_7])) : (var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_6] [i_6]))) : (max((var_14), (((/* implicit */long long int) arr_4 [i_1] [i_5] [i_7])))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_17)), (arr_12 [i_7] [i_6] [i_0]))))))))));
                            var_23 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_8 [i_0] [i_1] [i_5]))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_15))))) : (arr_21 [i_0] [i_1] [i_5] [i_6])));
                        }
                        arr_24 [i_6] [i_1] [i_5] [i_6] = ((/* implicit */int) ((((_Bool) ((((/* implicit */int) var_11)) + (((/* implicit */int) var_10))))) ? (var_7) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) ((_Bool) var_14))) : (((/* implicit */int) max((var_15), (((/* implicit */unsigned short) arr_5 [i_1] [i_5] [i_6]))))))))));
                        arr_25 [i_0] [i_1] [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) max((max((var_14), (((/* implicit */long long int) arr_7 [i_0] [i_6] [i_5])))), (((/* implicit */long long int) arr_8 [i_6] [i_5] [i_6]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_10)), (arr_19 [i_6] [i_5] [i_1] [i_0]))))))) : (((/* implicit */int) max((arr_13 [i_0] [i_1] [i_5] [i_6] [i_0] [i_6]), (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_6]))))));
                        var_24 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_4 [i_0] [i_0] [i_0]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_5]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (_Bool)1)))) : (max((((/* implicit */unsigned int) (short)7852)), (3317940911U)))))), (max((((/* implicit */unsigned long long int) arr_20 [i_6] [i_5] [i_1] [i_0])), (((unsigned long long int) arr_18 [i_6] [i_1] [i_0]))))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 2) 
                    {
                        arr_30 [i_0] = ((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_8]);
                        var_25 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_29 [i_1]))));
                        var_26 *= ((/* implicit */short) (+(((unsigned long long int) arr_7 [i_0] [i_8] [i_8]))));
                    }
                    for (short i_9 = 1; i_9 < 11; i_9 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (short i_10 = 0; i_10 < 13; i_10 += 2) 
                        {
                            arr_36 [i_0] [i_1] [i_5] [i_9] [i_10] = ((/* implicit */unsigned char) ((short) (~((+(arr_31 [i_10] [i_9] [i_5] [i_1]))))));
                            arr_37 [i_0] [i_1] [i_5] [i_9] [i_10] = ((/* implicit */short) ((((((_Bool) arr_29 [i_0])) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_16)), (arr_27 [i_10] [i_9 - 1] [i_1] [i_0])))) : (((/* implicit */int) var_6)))) + (((/* implicit */int) var_8))));
                            arr_38 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_33 [i_0] [i_1] [i_9 - 1] [i_10]), (((/* implicit */long long int) arr_22 [i_10] [i_0] [i_0] [i_0]))))) ? (min((((/* implicit */unsigned long long int) arr_3 [i_0])), (var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_22 [i_0] [i_1] [i_10] [i_9 - 1])), (var_13)))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_11 = 0; i_11 < 13; i_11 += 4) 
                        {
                            arr_41 [i_0] [i_1] [i_5] [i_9 + 1] [i_11] = ((/* implicit */unsigned short) ((long long int) arr_31 [i_9 + 1] [i_9 + 1] [i_9 - 1] [i_9 + 1]));
                            arr_42 [i_0] [i_1] [i_5] [i_5] [i_9 - 1] [i_11] = ((/* implicit */unsigned int) ((arr_34 [i_9] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 + 2] [i_9 - 1] [i_9 + 2]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_34 [i_9 + 1] [i_9 + 2] [i_9 - 1] [i_9] [i_9 - 1] [i_9 + 2] [i_9]))));
                            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_19))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_3 [i_9 - 1])))))));
                            arr_43 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((arr_31 [i_9] [i_9 - 1] [i_9 - 1] [i_9 + 1]) / (arr_31 [i_9 + 1] [i_9 - 1] [i_9 - 1] [i_9 + 1])));
                        }
                        arr_44 [i_9 + 1] [i_5] [i_1] &= ((/* implicit */_Bool) ((short) min((arr_19 [i_0] [i_1] [i_5] [i_9 + 2]), (arr_19 [i_0] [i_1] [i_5] [i_9 - 1]))));
                        var_28 += ((/* implicit */short) (+((+(arr_33 [i_0] [i_1] [i_5] [i_9 + 2])))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 2; i_12 < 12; i_12 += 2) 
                    {
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            {
                                arr_50 [i_0] [i_1] [i_5] [i_12 - 1] [i_13] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (short)12608))));
                                var_29 = ((short) max((((/* implicit */short) arr_48 [i_13 - 1])), (var_1)));
                                var_30 &= ((/* implicit */short) max((((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((var_19) ? (((/* implicit */int) var_19)) : (((/* implicit */int) arr_8 [i_12] [i_1] [i_5])))) : (((/* implicit */int) (!(arr_48 [i_0])))))), (((/* implicit */int) (!((!(((/* implicit */_Bool) var_14)))))))));
                                arr_51 [i_0] [i_1] [i_5] = ((/* implicit */short) ((var_19) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_13 - 1]))) : (max((max((((/* implicit */unsigned int) var_17)), (var_9))), (((/* implicit */unsigned int) min((((/* implicit */short) arr_13 [i_0] [i_1] [i_5] [i_12 - 2] [i_13 - 1] [i_12])), (arr_32 [i_0]))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_31 = ((/* implicit */long long int) ((var_19) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
}
