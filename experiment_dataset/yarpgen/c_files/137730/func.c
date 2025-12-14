/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137730
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
    var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) (((+(var_4))) <= (((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) & (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))))))));
    var_11 = ((/* implicit */unsigned int) var_6);
    var_12 |= ((/* implicit */long long int) ((var_4) | (((((/* implicit */unsigned long long int) var_5)) / (var_0)))));
    var_13 = max((((((((/* implicit */_Bool) var_7)) ? (var_1) : (var_0))) | (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_3)) : (var_4))))), (((/* implicit */unsigned long long int) (_Bool)1)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_3 [(_Bool)1] [i_1]) / (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)1)))) : (var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((var_1) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (var_6))))))));
                arr_4 [i_1] = ((/* implicit */short) ((((((/* implicit */int) (_Bool)1)) / (arr_2 [i_0] [i_1]))) / ((+(((/* implicit */int) ((unsigned short) (_Bool)1)))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 1; i_2 < 14; i_2 += 3) 
                {
                    arr_7 [3LL] [i_1] = ((/* implicit */int) (_Bool)1);
                    var_15 = ((/* implicit */int) max((var_15), (((int) (-(((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))))));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */int) max((max((((/* implicit */unsigned int) (_Bool)1)), ((((_Bool)1) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))), (((unsigned int) max(((_Bool)1), ((_Bool)1))))));
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_3 = 1; i_3 < 11; i_3 += 3) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_15 [i_1] [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) (!((_Bool)1)))) * (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))));
                        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
                        arr_16 [i_0] [i_1] = ((/* implicit */unsigned long long int) (_Bool)1);
                    }
                    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        var_17 *= ((/* implicit */unsigned long long int) (_Bool)1);
                        var_18 = ((/* implicit */short) var_0);
                        arr_20 [i_0] [i_1] [i_1] [i_1] [i_0] [i_1] = ((/* implicit */int) arr_5 [i_5] [9] [i_3 + 2] [i_5]);
                    }
                    for (unsigned long long int i_6 = 1; i_6 < 12; i_6 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_21 [2LL] [2LL] [2LL])) : (((/* implicit */int) (_Bool)1))))))))));
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6)))))));
                        arr_24 [i_0] [i_1] [i_0] [i_1] [i_1] [i_6 + 1] = ((/* implicit */unsigned short) (_Bool)1);
                        /* LoopSeq 2 */
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            var_21 = ((/* implicit */short) ((((/* implicit */long long int) arr_3 [i_1] [i_6 + 1])) % (arr_12 [i_0] [i_1] [(_Bool)1] [11])));
                            var_22 = ((/* implicit */unsigned char) (-(((long long int) (_Bool)1))));
                        }
                        for (unsigned char i_8 = 3; i_8 < 14; i_8 += 3) 
                        {
                            arr_31 [i_0] [i_1] [i_0] [i_6] [i_6] [i_6] = (!((((_Bool)1) && ((_Bool)1))));
                            var_23 *= ((/* implicit */short) var_6);
                            arr_32 [i_1] [i_1] = ((/* implicit */_Bool) var_7);
                            arr_33 [i_1] [(unsigned short)14] [i_3] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) var_5))));
                        }
                    }
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 15; i_9 += 3) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 15; i_10 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) >> (((long long int) (_Bool)1))));
                                arr_41 [i_0] [i_0] [i_0] [i_0] [i_1] [(unsigned short)1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_1] [i_1] [i_3 + 3] [i_3 + 2])) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_0])) : (var_2)));
                                arr_42 [i_10] [i_1] [13LL] [4LL] [i_1] [i_0] = (!(((/* implicit */_Bool) (~(((/* implicit */int) var_7))))));
                                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((_Bool) var_6))) : (((/* implicit */int) (!((_Bool)1))))));
                                arr_43 [i_0] [i_1] [9] [i_0] [i_1] = ((/* implicit */long long int) arr_38 [(unsigned short)3] [i_9] [i_3] [i_10] [i_9]);
                            }
                        } 
                    } 
                    var_26 += ((/* implicit */unsigned short) ((long long int) ((var_5) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
                }
                /* vectorizable */
                for (int i_11 = 1; i_11 < 11; i_11 += 3) /* same iter space */
                {
                    arr_46 [i_0] [(unsigned short)3] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((var_0) - (17837901966692854616ULL)))));
                    var_27 = ((/* implicit */unsigned short) arr_3 [i_1] [i_11]);
                }
                arr_47 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (_Bool)1);
            }
        } 
    } 
}
