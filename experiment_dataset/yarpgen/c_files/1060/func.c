/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1060
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((var_0) + (((/* implicit */int) (short)26204))))) - (((-8038195455020688508LL) + (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)5)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_5 [i_0] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [1LL])))))) ? (var_6) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3]))) : (619590606U)))))))));
                        var_13 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])))))));
                        var_14 = ((/* implicit */signed char) ((((((/* implicit */int) (short)8272)) >= (((/* implicit */int) (unsigned short)65535)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [6U]))) : ((~(3869657561843549416ULL)))));
                    }
                    /* LoopSeq 4 */
                    for (unsigned short i_4 = 1; i_4 < 14; i_4 += 4) /* same iter space */
                    {
                        arr_15 [i_4] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) max((arr_12 [i_4 + 1] [i_4] [i_4 + 3] [i_4 + 1]), (((/* implicit */unsigned int) var_0)))));
                        var_15 = ((/* implicit */long long int) arr_11 [i_0] [i_0] [i_4] [i_4 + 2] [i_4 + 3] [i_4]);
                    }
                    for (unsigned short i_5 = 1; i_5 < 14; i_5 += 4) /* same iter space */
                    {
                        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_14 [i_5 + 2] [i_5 + 3] [i_5 + 1] [i_5 + 1]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_5 + 3] [i_5 - 1] [i_5 + 2] [i_5 + 2])) ? (arr_18 [i_5 + 3]) : (arr_18 [i_5 - 1])))))))));
                        /* LoopSeq 4 */
                        for (signed char i_6 = 1; i_6 < 14; i_6 += 2) 
                        {
                            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) max((9916576120403773869ULL), (((/* implicit */unsigned long long int) (short)26204)))))));
                            var_18 = ((unsigned char) 4503599627370495ULL);
                            var_19 = ((/* implicit */unsigned int) -19);
                            arr_21 [i_0] [i_5 + 3] [(short)0] [i_5] [i_6] [i_0] [i_1] |= ((/* implicit */int) ((((/* implicit */_Bool) (+((~(((/* implicit */int) arr_8 [i_1] [i_5] [i_6]))))))) ? (arr_20 [i_1] [i_1] [12ULL] [i_5]) : (((/* implicit */unsigned long long int) min((((/* implicit */int) ((arr_1 [i_2] [i_6]) <= (((/* implicit */int) var_3))))), (((((/* implicit */int) (short)6)) + (((/* implicit */int) (signed char)-63)))))))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) ((((_Bool) max((arr_5 [i_1] [2LL]), (((/* implicit */unsigned long long int) var_6))))) ? (((((/* implicit */_Bool) 8038195455020688507LL)) ? (((/* implicit */int) (unsigned short)61699)) : (((/* implicit */int) (unsigned short)21760)))) : (((((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_2])) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_2])) : (((/* implicit */int) var_9)))) % (((((/* implicit */int) var_1)) % (((/* implicit */int) (unsigned char)162))))))));
                            arr_25 [i_5] [i_1] [i_2] [i_5] [i_7] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) / (arr_12 [14] [i_2] [i_1] [i_0]))) * (((/* implicit */unsigned int) ((((((/* implicit */int) arr_11 [i_0] [i_1] [(signed char)10] [i_5] [i_5 - 1] [12U])) - (((/* implicit */int) arr_24 [i_0] [i_1] [i_2] [i_2] [i_5] [i_1])))) * (((/* implicit */int) var_10)))))));
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) min((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 2147483647)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -918147289)))))), ((~(((/* implicit */int) (_Bool)1)))))))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 17; i_8 += 2) /* same iter space */
                        {
                            var_22 &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 7243930778970637428LL)) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) (unsigned char)45)) : (((/* implicit */int) (short)26185))))) ? (arr_18 [i_5 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [(unsigned char)5] [i_5 + 3])))))));
                            var_23 += ((/* implicit */long long int) ((var_2) == ((-(((/* implicit */int) arr_23 [i_0] [i_8] [i_5 + 2] [9] [(unsigned char)16] [i_1]))))));
                        }
                        for (unsigned int i_9 = 0; i_9 < 17; i_9 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)181)) <= (((/* implicit */int) (unsigned short)47418)))))))) ? (((((/* implicit */unsigned int) 1200708481)) / (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31))) - (2405199021U))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)66)) != (((/* implicit */int) (signed char)0)))))))))))));
                            var_25 |= ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0] [i_1] [13] [i_2] [i_5 + 1] [i_9]))) >= ((+(max((((/* implicit */unsigned long long int) (unsigned char)155)), (arr_9 [i_5 + 3] [i_2] [i_0]))))));
                            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */int) arr_23 [i_0] [i_1] [i_2] [i_5] [i_5] [i_1])) % (((/* implicit */int) ((((/* implicit */int) arr_17 [16U] [i_1] [i_2] [(short)12])) != (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [(_Bool)1] [i_2])) != (((/* implicit */int) var_9)))))))))))));
                            var_27 = ((/* implicit */signed char) max((((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_13 [i_5] [i_1])))) * (((((/* implicit */_Bool) -2124365042)) ? (4294967292U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48203))))))), (((/* implicit */unsigned int) arr_14 [i_5 + 2] [i_1] [i_9] [i_9]))));
                        }
                    }
                    for (unsigned short i_10 = 1; i_10 < 14; i_10 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 17; i_11 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (14577086511866002200ULL))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_0] [i_2])) & (var_0))))))));
                            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((((arr_1 [i_0] [i_0]) << (((((/* implicit */int) (unsigned char)28)) - (28))))) + (((var_0) - (var_0))))))));
                        }
                        var_30 = ((/* implicit */long long int) (+(((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [12LL] [i_0] [i_0]))));
                        var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((((((/* implicit */int) (unsigned char)138)) % (((/* implicit */int) (short)4675)))) << (((4714203250268041847ULL) - (4714203250268041840ULL))))))));
                    }
                    for (unsigned short i_12 = 1; i_12 < 14; i_12 += 4) /* same iter space */
                    {
                        arr_39 [i_0] [i_12] = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) ((arr_14 [i_12] [i_2] [i_1] [(unsigned short)8]) < (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_12] [(_Bool)1] [i_2]))))), (min((((/* implicit */unsigned long long int) var_0)), (arr_18 [i_1]))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                        var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) max((((/* implicit */long long int) 85501470)), (max((-8818769086557811127LL), (558551906910208LL))))))));
                        var_33 = ((/* implicit */unsigned int) min((var_33), (((min((2826017918U), (2322697777U))) % (((/* implicit */unsigned int) ((/* implicit */int) ((((var_0) + (114319403))) >= (((/* implicit */int) (_Bool)0))))))))));
                        var_34 -= ((/* implicit */short) max(((-(((/* implicit */int) arr_31 [i_1] [i_2])))), ((-(6)))));
                    }
                }
                /* vectorizable */
                for (unsigned short i_13 = 0; i_13 < 17; i_13 += 3) 
                {
                    var_35 *= ((/* implicit */_Bool) ((unsigned char) arr_18 [i_0]));
                    /* LoopNest 2 */
                    for (long long int i_14 = 0; i_14 < 17; i_14 += 4) 
                    {
                        for (unsigned short i_15 = 2; i_15 < 15; i_15 += 2) 
                        {
                            {
                                var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((1073740800) ^ (((/* implicit */int) arr_31 [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (17597057715422355982ULL)));
                                var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) (((-(((/* implicit */int) var_9)))) | (((/* implicit */int) ((short) arr_8 [i_0] [i_13] [i_15]))))))));
                            }
                        } 
                    } 
                }
                var_38 += ((/* implicit */signed char) ((int) (+(1823659894))));
                var_39 = ((/* implicit */signed char) 1099136051U);
                /* LoopNest 3 */
                for (short i_16 = 0; i_16 < 17; i_16 += 3) 
                {
                    for (unsigned short i_17 = 0; i_17 < 17; i_17 += 2) 
                    {
                        for (unsigned short i_18 = 0; i_18 < 17; i_18 += 4) 
                        {
                            {
                                var_40 = ((/* implicit */unsigned int) (_Bool)1);
                                var_41 = ((/* implicit */unsigned short) min((((var_3) && (max((var_3), (var_3))))), (var_3)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
