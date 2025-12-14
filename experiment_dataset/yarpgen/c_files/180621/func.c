/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180621
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */short) ((arr_3 [i_0]) ^ (((((/* implicit */_Bool) min((3013032970U), (3130531659U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) 1281934326U)))) : ((~(arr_3 [i_0])))))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 4; i_3 < 19; i_3 += 4) 
                    {
                        for (short i_4 = 1; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) var_7);
                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) 1281934333U)))) != (((((/* implicit */_Bool) 3013032969U)) ? (3013032969U) : (4208314724U)))));
                                arr_14 [9LL] [i_1] [i_2] [i_3] [i_4 + 1] [1U] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_3 - 2] [i_1])) ? ((~(((/* implicit */int) arr_10 [i_0] [i_1 - 1] [i_1])))) : (((/* implicit */int) arr_5 [i_0] [i_4 + 1] [i_1]))))) ^ (min((((/* implicit */unsigned int) var_1)), (arr_11 [i_1])))));
                                var_16 &= ((/* implicit */short) ((unsigned char) arr_2 [i_3 + 3] [i_4 + 1]));
                                var_17 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_3)) + (2147483647))) << (((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)253)), (3225229186U)))) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_1] [i_4] [i_3 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (4208314724U))) : (min((var_11), (((/* implicit */unsigned int) arr_4 [i_0] [i_0])))))) - (57U)))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((4294967285U), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)63)))))))) ? ((+(((/* implicit */int) (unsigned char)193)))) : (((/* implicit */int) (short)-4559))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        arr_17 [i_1] = ((/* implicit */short) ((arr_8 [i_0] [i_1] [i_2] [i_5]) - (((/* implicit */unsigned int) (+(((/* implicit */int) var_4)))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            arr_20 [i_1] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_5))));
                            arr_21 [(unsigned char)10] [i_1] [i_2] [i_1] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1 - 2] [i_1 - 2] [i_1 - 1] [i_5] [i_6] [i_6]))) : (var_6)));
                            var_19 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) % (arr_16 [i_0] [i_1] [i_1] [i_0]))));
                            var_20 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_1 - 1] [i_6]))) : (((((/* implicit */_Bool) arr_10 [18U] [i_6] [i_2])) ? (arr_3 [(short)6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0])))))));
                        }
                        arr_22 [i_2] [i_1] [i_2] [i_5] [i_1] = ((/* implicit */unsigned int) ((short) 3013032969U));
                    }
                    for (unsigned int i_7 = 3; i_7 < 21; i_7 += 4) 
                    {
                        arr_26 [i_1] = ((/* implicit */long long int) arr_8 [i_0] [i_1 + 1] [i_0] [i_7]);
                        var_21 = ((/* implicit */unsigned int) max((min((arr_18 [i_1 - 2] [i_7 + 1] [i_7 - 3] [i_7 - 1] [i_7]), (arr_18 [i_1 - 1] [i_7 - 2] [i_7 - 2] [i_7] [i_1 - 1]))), (((short) (short)-8))));
                    }
                    for (short i_8 = 2; i_8 < 20; i_8 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-6582)) <= (((/* implicit */int) (short)-27809))));
                        var_23 = ((/* implicit */long long int) max((var_23), ((~(arr_24 [i_0] [i_0] [i_2] [(short)15])))));
                        arr_29 [i_0] [i_1] [i_1] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((2366713313U) + (4294967295U)))))) && (((/* implicit */_Bool) max((((/* implicit */int) max(((unsigned char)9), ((unsigned char)0)))), (((((/* implicit */_Bool) 3791128307U)) ? (((/* implicit */int) (short)3378)) : (((/* implicit */int) (short)0)))))))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 22; i_9 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned int) max((var_24), ((+(min((((/* implicit */unsigned int) var_12)), (arr_2 [i_2] [i_1])))))));
                        /* LoopSeq 4 */
                        for (short i_10 = 1; i_10 < 21; i_10 += 4) 
                        {
                            var_25 = max((max((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1 - 3] [i_2] [i_9] [i_9] [i_0]))) : (var_11))), (((((/* implicit */_Bool) arr_10 [i_10] [i_10] [i_1])) ? (1928253971U) : (arr_12 [i_0] [i_0] [i_0] [i_0] [(short)3] [11U] [i_0]))))), (min((((/* implicit */unsigned int) (short)0)), (35502177U))));
                            var_26 = ((/* implicit */short) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1 - 3] [i_1]))) % (arr_11 [i_1]))), (((/* implicit */unsigned int) max(((short)4553), (((/* implicit */short) ((unsigned char) var_12))))))));
                        }
                        for (unsigned int i_11 = 4; i_11 < 21; i_11 += 4) 
                        {
                            arr_36 [i_0] [i_1] [i_2] [i_2] [i_9] [i_1] [i_11 - 1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_12)))), ((!(((/* implicit */_Bool) 124U))))));
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) max((4132477186U), (1069738096U))))) ? (((((/* implicit */_Bool) -2859652637490301647LL)) ? (((/* implicit */int) (short)18483)) : (((/* implicit */int) (short)31519)))) : (((/* implicit */int) min((((/* implicit */short) arr_4 [i_0] [i_1 - 2])), (arr_0 [i_1 - 2]))))));
                            var_28 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_30 [i_1] [i_2])) && (((/* implicit */_Bool) var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) ((((/* implicit */_Bool) (short)-4569)) || (((/* implicit */_Bool) var_10))))), ((short)20688))))) : (arr_2 [i_0] [i_9])));
                        }
                        for (short i_12 = 1; i_12 < 19; i_12 += 4) 
                        {
                            var_29 = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_18 [i_0] [i_1 + 1] [0U] [i_12 - 1] [i_12 + 1])) % (((/* implicit */int) var_12))))));
                            var_30 = ((/* implicit */unsigned char) ((short) (~(((/* implicit */int) max((((/* implicit */short) (unsigned char)147)), ((short)3029)))))));
                            var_31 = ((arr_33 [(short)0] [i_9] [9U] [(short)14]) >> (((arr_23 [i_0]) - (2417175517U))));
                            arr_39 [i_0] [i_2] [i_9] |= var_1;
                            arr_40 [i_0] [i_1] [i_12] = ((((/* implicit */_Bool) (short)-31533)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)18483))) : (255U));
                        }
                        for (unsigned int i_13 = 2; i_13 < 21; i_13 += 4) 
                        {
                            var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) arr_16 [i_0] [i_13] [i_2] [i_9]))));
                            var_33 = ((/* implicit */short) min((min((max((((/* implicit */unsigned int) arr_37 [21U] [6U] [i_2] [i_1] [i_0])), (4294967289U))), (((unsigned int) (short)-1164)))), (((/* implicit */unsigned int) arr_34 [i_0] [i_0] [i_0] [2U] [i_0] [2U]))));
                        }
                        /* LoopSeq 4 */
                        for (short i_14 = 1; i_14 < 21; i_14 += 4) /* same iter space */
                        {
                            var_34 ^= ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_1 - 3] [i_2] [12U] [i_14] [i_14])) ? (max((max((2839711503U), (((/* implicit */unsigned int) (short)-31508)))), (((/* implicit */unsigned int) arr_18 [i_1 - 2] [i_1 - 2] [i_14 - 1] [i_14 + 1] [i_14 - 1])))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */int) (short)-22917)) != (((/* implicit */int) arr_27 [i_0] [i_1 - 2] [i_0] [i_0] [i_0] [i_14])))))))));
                            var_35 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_18 [(short)20] [i_1] [i_1] [i_1 - 3] [i_1]))))) ? (((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_9] [i_9])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) >> ((((~(7818063999740105238LL))) + (7818063999740105244LL)))));
                        }
                        for (short i_15 = 1; i_15 < 21; i_15 += 4) /* same iter space */
                        {
                            var_36 = ((/* implicit */unsigned int) ((short) ((short) arr_27 [i_1 - 2] [i_1 - 2] [19U] [i_1] [i_1 - 3] [i_1])));
                            var_37 = ((/* implicit */unsigned int) ((short) max((arr_32 [i_0] [i_15 - 1] [17U] [i_15 - 1] [i_9] [i_1 - 1]), (arr_32 [i_0] [i_15 + 1] [(unsigned char)15] [i_9] [(short)20] [i_1 - 1]))));
                            var_38 = ((/* implicit */long long int) (unsigned char)183);
                        }
                        /* vectorizable */
                        for (unsigned int i_16 = 2; i_16 < 21; i_16 += 4) 
                        {
                            var_39 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((((/* implicit */int) (short)-17863)) + (2147483647))) << (((((/* implicit */int) arr_7 [i_0] [21U] [21U])) - (198)))))) ^ (((var_10) & (arr_25 [i_0] [i_0] [i_16])))));
                            arr_53 [(unsigned char)5] [i_1 + 1] [i_1] [i_1] [(short)2] [i_1] = ((/* implicit */unsigned char) arr_32 [i_0] [(short)8] [i_0] [i_0] [i_0] [i_0]);
                            var_40 = ((/* implicit */unsigned char) ((unsigned int) (short)-18484));
                            var_41 = ((/* implicit */unsigned char) (((+(((/* implicit */int) (short)31533)))) | (((/* implicit */int) arr_37 [i_0] [(short)17] [i_0] [i_0] [i_0]))));
                        }
                        for (unsigned int i_17 = 1; i_17 < 20; i_17 += 4) 
                        {
                            arr_56 [i_1] = ((/* implicit */short) (+(((/* implicit */int) var_2))));
                            arr_57 [i_1] [i_2] = ((/* implicit */unsigned int) ((2456609552U) > (922491708U)));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_18 = 0; i_18 < 22; i_18 += 4) 
                    {
                        for (unsigned int i_19 = 3; i_19 < 20; i_19 += 4) 
                        {
                            {
                                var_42 = ((/* implicit */unsigned char) min((var_42), ((unsigned char)202)));
                                var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_41 [i_18] [i_18] [i_18] [i_18] [i_18])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned int i_20 = 3; i_20 < 20; i_20 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_21 = 2; i_21 < 21; i_21 += 4) 
                    {
                        for (unsigned int i_22 = 1; i_22 < 19; i_22 += 4) 
                        {
                            {
                                arr_73 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (var_6) : (arr_63 [i_20 + 1] [i_21 - 2] [i_20 + 1] [i_20 + 1])));
                                var_44 *= arr_49 [i_0] [i_1 - 2] [i_0] [(unsigned char)4] [i_22] [i_22];
                            }
                        } 
                    } 
                    arr_74 [i_20 - 3] [i_20] [i_20] [i_1] = ((/* implicit */short) (~(arr_13 [i_20 - 3] [i_20 - 3] [i_20 + 1] [i_20 + 2] [i_20 - 1] [i_20] [i_20])));
                }
            }
        } 
    } 
    var_45 = ((/* implicit */unsigned int) min((var_45), (var_6)));
    /* LoopNest 2 */
    for (unsigned char i_23 = 2; i_23 < 9; i_23 += 4) 
    {
        for (long long int i_24 = 4; i_24 < 7; i_24 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (short i_25 = 1; i_25 < 9; i_25 += 4) 
                {
                    var_46 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((short)-1614), (((/* implicit */short) (unsigned char)10)))))) : (min((((/* implicit */unsigned int) (unsigned char)201)), (32256U)))))));
                    var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-5002)) | (((/* implicit */int) arr_18 [i_25] [i_25 + 1] [i_25] [i_25 - 1] [i_25]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_18 [i_25 - 1] [i_25] [i_25] [i_25 + 1] [i_25])) > (((/* implicit */int) arr_18 [i_25] [i_25] [(short)0] [i_25 + 1] [i_25]))))) : (((((/* implicit */_Bool) arr_18 [i_25] [i_25] [i_25 + 1] [i_25 - 1] [i_25])) ? (((/* implicit */int) arr_18 [i_25] [i_25] [3U] [i_25 + 1] [i_25 + 1])) : (((/* implicit */int) arr_18 [i_25] [i_25] [i_25 - 1] [i_25 - 1] [i_25]))))));
                    arr_86 [i_25 - 1] [i_25] [i_25] [i_23] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) max(((-(((/* implicit */int) (short)-5007)))), ((+(((/* implicit */int) arr_15 [i_24] [i_24] [i_25 - 1] [(unsigned char)8]))))))), (((var_6) * (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_24 - 2] [i_24 - 1] [i_25] [i_25] [i_25 + 1] [i_25])))))));
                }
                /* LoopSeq 1 */
                for (long long int i_26 = 2; i_26 < 9; i_26 += 4) 
                {
                    var_48 = ((/* implicit */short) max((var_48), (((/* implicit */short) (~((+(((/* implicit */int) arr_27 [i_23] [i_23] [i_23] [i_26] [i_23 - 2] [i_23])))))))));
                    var_49 = var_7;
                }
            }
        } 
    } 
    var_50 = ((((/* implicit */_Bool) (+(((/* implicit */int) (short)6604))))) ? (var_6) : (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1)))), (((((/* implicit */_Bool) (short)-24335)) ? (((/* implicit */int) (short)8192)) : (((/* implicit */int) (short)32754))))))));
}
