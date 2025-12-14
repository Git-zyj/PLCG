/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127573
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
    var_20 = ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (_Bool)1))));
                    var_22 *= ((/* implicit */unsigned int) var_10);
                    var_23 -= ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 17263224497962224160ULL)))))) + (((((/* implicit */_Bool) arr_0 [i_2])) ? (4165352395U) : (var_0))))));
                    var_24 &= ((/* implicit */_Bool) ((signed char) ((1183519575747327446ULL) << (((((arr_7 [(_Bool)1] [i_1] [i_1] [i_2]) ? (((/* implicit */unsigned long long int) var_13)) : (18446744073709551615ULL))) - (3525134226ULL))))));
                }
            } 
        } 
    } 
    var_25 |= ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 3 */
    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
    {
        for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            for (unsigned char i_5 = 1; i_5 < 12; i_5 += 2) 
            {
                {
                    arr_18 [i_3] [i_3] [i_5] = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) -6048293498951266872LL)), (4664593592410236607ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)60)) >> (((((var_13) - (((/* implicit */unsigned int) arr_13 [i_4] [i_3])))) - (2241970738U))))))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 3; i_6 < 12; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 3; i_7 < 12; i_7 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned long long int) (-(min((arr_24 [(short)7] [i_7] [i_7 - 2] [i_5] [i_7] [i_7 + 1] [i_7 + 1]), (arr_24 [i_7] [i_7] [(signed char)0] [i_5] [i_7] [i_7 - 1] [3])))));
                                var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3])) ? (arr_25 [i_3] [i_3] [i_3] [(signed char)8] [i_3]) : (arr_25 [i_3] [i_5] [i_5] [i_6 - 3] [(_Bool)1])))) ? (((/* implicit */long long int) arr_13 [i_3] [i_6 - 3])) : (max((((/* implicit */long long int) var_13)), (arr_25 [i_3] [i_3] [i_3] [i_5 - 1] [i_5 - 1])))));
                                var_28 = ((/* implicit */unsigned char) ((_Bool) arr_0 [i_7 + 1]));
                                var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) 162498182U))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_8 = 0; i_8 < 13; i_8 += 2) 
                    {
                        var_30 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)))));
                        var_31 &= ((/* implicit */unsigned char) arr_24 [i_8] [(_Bool)1] [i_5] [i_4] [0] [i_4] [i_3]);
                    }
                    for (short i_9 = 0; i_9 < 13; i_9 += 3) 
                    {
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */unsigned long long int) var_19)) : (min((1183519575747327465ULL), (17263224497962224150ULL)))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_10 = 1; i_10 < 11; i_10 += 2) 
                        {
                            var_33 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) max((17263224497962224178ULL), (((/* implicit */unsigned long long int) -6578724851047015421LL)))))) ? (((/* implicit */long long int) (-(((((/* implicit */_Bool) 5980603318179329734ULL)) ? (var_18) : (((/* implicit */int) var_7))))))) : (max((((/* implicit */long long int) (+(((/* implicit */int) (short)-26040))))), (((((/* implicit */_Bool) 13508864353168588897ULL)) ? (arr_10 [11ULL]) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))));
                            var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) var_3))));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 3) 
                        {
                            var_35 = ((/* implicit */unsigned int) 1183519575747327437ULL);
                            var_36 -= ((/* implicit */signed char) arr_11 [i_11]);
                        }
                        var_37 = ((/* implicit */signed char) ((max((((/* implicit */long long int) arr_28 [i_5 + 1] [i_5] [i_5] [(unsigned char)4])), (arr_14 [i_5 + 1]))) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-101)))));
                        var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) ((1425679673) << (((1ULL) - (1ULL))))))));
                    }
                    for (unsigned int i_12 = 0; i_12 < 13; i_12 += 3) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            arr_40 [i_13] [i_5] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)14540))) + (arr_0 [i_5 + 1])));
                            arr_41 [i_3] [i_5] [(_Bool)1] [(short)7] [i_5] [i_3] = ((/* implicit */unsigned long long int) ((_Bool) (_Bool)1));
                        }
                        /* vectorizable */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                        {
                            var_39 = var_7;
                            var_40 = (-(((/* implicit */int) (!(((/* implicit */_Bool) 1183519575747327438ULL))))));
                        }
                        /* vectorizable */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                        {
                            var_41 = ((/* implicit */unsigned long long int) arr_26 [7ULL] [i_4] [(short)2] [i_5 + 1] [(unsigned char)6] [i_4]);
                            arr_47 [i_5] = ((/* implicit */short) (~(18183436317604593899ULL)));
                        }
                        var_42 = ((/* implicit */_Bool) max((max((min((1183519575747327455ULL), (((/* implicit */unsigned long long int) arr_36 [i_3] [i_3] [i_5] [i_12] [i_5])))), (((/* implicit */unsigned long long int) (+(var_9)))))), (((var_16) - (((/* implicit */unsigned long long int) ((unsigned int) var_10)))))));
                    }
                    /* LoopNest 2 */
                    for (short i_16 = 0; i_16 < 13; i_16 += 3) 
                    {
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            {
                                arr_52 [i_17] [i_5] [i_5 + 1] [i_4] [3U] [i_5] [i_3] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-2147483647 - 1))), (1183519575747327465ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_8 [i_3] [i_4] [i_4] [i_16])))))) : (max((var_16), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                                var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) (signed char)15))));
                                var_44 = ((/* implicit */_Bool) max((var_44), (((/* implicit */_Bool) min((((/* implicit */long long int) (short)511)), (4685904831315918911LL))))));
                                var_45 = ((/* implicit */unsigned char) max((var_45), (var_1)));
                                arr_53 [(_Bool)1] [i_5] [(unsigned char)5] [i_5] [i_16] [8LL] [(_Bool)1] = ((/* implicit */short) (signed char)124);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_18 = 1; i_18 < 12; i_18 += 3) 
                    {
                        for (long long int i_19 = 0; i_19 < 13; i_19 += 2) 
                        {
                            {
                                arr_61 [i_18] [i_5] [i_5 + 1] [i_18] [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)1260))));
                                var_46 = ((/* implicit */long long int) var_11);
                                var_47 = ((/* implicit */unsigned long long int) max((var_47), (((/* implicit */unsigned long long int) (short)10176))));
                                var_48 = var_15;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
