/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182710
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
    var_20 *= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_9)))) : (var_5))), (((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) var_16)), (14723951513795697023ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))));
    var_21 |= ((/* implicit */unsigned char) var_9);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 1; i_2 < 13; i_2 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 2; i_3 < 14; i_3 += 2) 
                    {
                        arr_9 [i_0] [i_0 + 1] [i_3] [6] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) 8728387259793113982LL)) ? (((/* implicit */int) (short)7)) : (((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) /* same iter space */
                        {
                            arr_12 [i_1 + 4] [i_1] [i_1 - 1] [i_1 + 2] [i_1 + 4] [i_1 + 2] [i_0] = ((((/* implicit */_Bool) max((((unsigned long long int) var_17)), (((/* implicit */unsigned long long int) var_13))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_1] [i_1 + 3])) + (((((/* implicit */int) arr_6 [i_0] [i_1] [i_3 - 1] [i_3 + 1] [i_4])) & (((/* implicit */int) var_1))))))) : (max((((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2255894896234581804ULL)) && (var_17)))))));
                            arr_13 [i_0] [i_0] [i_2 - 1] [i_3] [1ULL] = ((/* implicit */signed char) min((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) arr_1 [i_0]))))));
                            arr_14 [i_0] [i_2] [i_2] = ((/* implicit */int) (-(((((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) + (var_18)))) + ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(signed char)5] [i_3 - 2]))) : (349444871U)))))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_2] [i_3 + 1] [(short)7] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) 2130706432U)) : (var_14)))) ? (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (var_4))) : (((/* implicit */unsigned long long int) var_9))));
                            arr_18 [i_0] [(short)13] [i_2] [12LL] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [5] [i_1 - 1] [(short)4])))))) ? (((((/* implicit */int) var_10)) << (((var_15) - (1716654408U))))) : (((((/* implicit */_Bool) var_3)) ? (arr_5 [i_0]) : (((/* implicit */int) arr_1 [i_0]))))));
                            var_22 = ((/* implicit */short) arr_7 [i_5] [i_0] [i_0]);
                            var_23 -= ((/* implicit */int) ((((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_15 [14] [i_2] [i_5])) : (((/* implicit */int) var_11)))) > (((/* implicit */int) arr_8 [i_0] [i_1] [i_0 + 2] [1LL])))) ? (max((((/* implicit */long long int) (unsigned char)172)), (((var_5) >> (((((/* implicit */int) var_6)) - (2753))))))) : (((((/* implicit */long long int) ((/* implicit */int) min((arr_8 [i_0 - 3] [i_1] [2ULL] [i_5]), (((/* implicit */unsigned short) arr_3 [i_3])))))) / (((var_19) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                            arr_19 [i_3] [i_1 + 2] [2LL] [i_3] [(_Bool)0] |= ((/* implicit */unsigned char) ((((((/* implicit */int) max((max((((/* implicit */short) var_16)), (arr_16 [i_0] [i_1 + 1] [i_2 + 2] [i_3 + 1] [i_5] [i_5]))), (arr_16 [i_0] [i_0 + 2] [i_0] [i_0] [i_0 - 3] [i_0 - 2])))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_2 [i_3 - 1] [i_1 + 4])) ? (((/* implicit */int) arr_11 [i_0 - 2] [i_3] [i_0 - 2] [i_0 - 1] [i_0 + 2] [i_0 - 3] [i_0 + 2])) : (((/* implicit */int) arr_1 [i_3])))) + (17638)))));
                        }
                        arr_20 [(_Bool)1] [i_0] [12ULL] [i_1] = ((/* implicit */long long int) min((min((((/* implicit */unsigned short) arr_6 [i_0] [i_0 - 2] [i_1 + 2] [i_2 + 1] [i_3 - 1])), (min((((/* implicit */unsigned short) arr_1 [i_0])), ((unsigned short)65535))))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_0] [i_0] [(short)8]))))))))));
                        arr_21 [i_0] [i_1 + 3] [i_3] = ((/* implicit */int) var_2);
                    }
                    arr_22 [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_3 [i_0])))) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_1])) : (((int) arr_8 [i_0 - 3] [i_0] [i_1] [11U]))))), (((((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) var_16))))) ? (((/* implicit */unsigned int) (+(arr_5 [i_0])))) : (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (349444871U)))))));
                    /* LoopSeq 4 */
                    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_7 = 2; i_7 < 13; i_7 += 3) 
                        {
                            arr_29 [i_0] [i_6] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) ((var_13) == (((/* implicit */int) (unsigned char)175))))) <= (((/* implicit */int) max((arr_24 [i_2] [i_7]), (((/* implicit */short) var_16)))))))) - (((/* implicit */int) ((_Bool) arr_8 [i_7 + 2] [i_2 - 1] [i_1 + 1] [i_0 + 2])))));
                            var_24 *= ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_28 [i_0] [i_6] [i_2] [i_7 + 1] [i_6] [i_0 - 2])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2 - 1] [i_1 + 1] [i_2] [i_6] [i_7 + 1] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) arr_10 [i_2 - 1] [i_2 + 1] [i_2] [i_6] [i_7 + 2] [i_2 + 2] [i_1 + 1])) : (((/* implicit */int) arr_10 [i_2 - 1] [i_1 + 3] [i_2] [i_6] [i_6] [i_2] [i_1 + 1])))))));
                        }
                        var_25 += ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_7 [i_6] [i_6] [i_0])))), (((((/* implicit */int) var_17)) * (((/* implicit */int) var_10))))))), (((((/* implicit */_Bool) ((unsigned char) arr_23 [i_0 + 1] [i_0 + 2] [i_1 + 4] [i_6] [i_2] [(short)12]))) ? (max((((/* implicit */unsigned long long int) arr_7 [i_6] [i_6] [(short)0])), (arr_0 [i_6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)168)))))));
                    }
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (short)-32767)))))));
                        var_27 *= ((/* implicit */short) (+(((/* implicit */int) arr_1 [2U]))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_9 = 2; i_9 < 13; i_9 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (short i_10 = 0; i_10 < 15; i_10 += 1) 
                        {
                            var_28 &= ((/* implicit */short) ((((/* implicit */int) arr_2 [i_1 + 1] [i_1])) % (arr_23 [i_10] [i_9] [i_9] [i_9] [i_1 - 1] [i_1])));
                            arr_38 [i_1 - 1] [i_2 + 1] [i_9] [i_10] &= arr_6 [i_9] [i_9] [i_2 + 2] [i_1 + 1] [i_9];
                        }
                        arr_39 [i_0] [i_1] [i_1 + 1] [i_1] [i_1 + 4] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_15)) < (arr_25 [i_0 + 2] [11] [i_0])))) >> (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_5)))));
                    }
                    for (short i_11 = 0; i_11 < 15; i_11 += 1) 
                    {
                        var_29 = ((/* implicit */short) (+(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_36 [i_0 - 3] [i_1 + 1] [i_0 + 1]))))));
                        var_30 ^= ((/* implicit */unsigned char) (~(max((((/* implicit */unsigned long long int) (unsigned short)8814)), (min((arr_28 [i_0 - 3] [(short)2] [i_2] [i_2 - 1] [8LL] [(unsigned char)0]), (((/* implicit */unsigned long long int) (short)32256))))))));
                        var_31 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 349444882U)) ? (((/* implicit */int) (signed char)95)) : ((+(((int) var_19))))));
                    }
                }
                for (short i_12 = 1; i_12 < 13; i_12 += 4) /* same iter space */
                {
                    arr_44 [i_0] [i_1] [i_0] [i_12] = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56738))) : (var_14)))) ? (((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) arr_6 [i_0] [i_1 + 4] [i_1] [i_1 + 2] [i_12 - 1]))))) : (((/* implicit */int) ((var_14) < (((/* implicit */unsigned long long int) var_8)))))))));
                    arr_45 [i_0] [10] [i_12 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_26 [i_0 - 2] [i_1 - 1] [i_12 + 1] [i_0] [i_12 - 1]))) ? (max((arr_26 [i_0 + 1] [i_1] [i_12 + 1] [i_0] [i_12 + 1]), (arr_26 [i_0 + 1] [i_12] [i_12 - 1] [i_0] [i_12 - 1]))) : (((var_11) ? (((/* implicit */int) (unsigned char)0)) : (arr_26 [i_0 - 3] [i_12 - 1] [i_12] [i_0] [i_12 - 1])))));
                }
                for (unsigned int i_13 = 0; i_13 < 15; i_13 += 4) 
                {
                    arr_50 [i_0] = ((/* implicit */_Bool) max((((/* implicit */short) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_35 [i_0 - 2] [i_13] [i_13])) || (((/* implicit */_Bool) arr_37 [i_0 - 3] [i_1 + 3] [i_0 + 1] [i_13] [(_Bool)1]))))), (var_1)))), (((short) (~(((/* implicit */int) var_16)))))));
                    arr_51 [i_13] [i_1] [i_1 + 1] |= ((/* implicit */_Bool) max((((/* implicit */unsigned int) max((min((var_8), (((/* implicit */int) arr_15 [i_0] [i_1] [i_0 + 2])))), (((/* implicit */int) max(((_Bool)1), (var_11))))))), (max((((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))), (((unsigned int) (_Bool)1))))));
                    arr_52 [i_0] [i_0 + 1] [i_0] = var_1;
                    var_32 -= ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_37 [i_0 - 1] [i_0] [i_0 - 2] [i_1 + 4] [i_1 + 4])) ? (((((/* implicit */_Bool) arr_11 [(short)12] [i_13] [(unsigned char)12] [i_13] [i_1 + 1] [i_13] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2016))) : (arr_25 [i_13] [i_1] [i_13]))) : (((/* implicit */unsigned long long int) (~(349444882U)))))));
                }
                arr_53 [i_0] = (+(arr_0 [i_0]));
                /* LoopNest 3 */
                for (long long int i_14 = 0; i_14 < 15; i_14 += 4) 
                {
                    for (unsigned char i_15 = 1; i_15 < 14; i_15 += 1) 
                    {
                        for (unsigned int i_16 = 2; i_16 < 12; i_16 += 3) 
                        {
                            {
                                var_33 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((((/* implicit */int) ((short) arr_15 [(signed char)3] [i_14] [i_16 + 2]))) + (2147483647))) >> (((((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_9))) - (2780LL)))))), (max((4179527788U), (((/* implicit */unsigned int) (_Bool)1))))));
                                var_34 -= ((/* implicit */signed char) max((var_13), (((/* implicit */int) ((((((/* implicit */_Bool) 9877779499934206411ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1)))) != (((/* implicit */int) max((arr_61 [i_0 - 2] [i_16 + 3] [i_14] [i_16 + 3] [i_16] [i_16] [i_15]), (var_12)))))))));
                                var_35 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_33 [i_0 - 3] [i_1] [(short)1] [i_0]))) ? (((arr_27 [8] [i_1] [i_14] [i_15] [i_0]) >> (((((/* implicit */int) arr_3 [i_0])) - (13))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_19))))))) ? (((/* implicit */unsigned long long int) ((int) ((_Bool) var_1)))) : ((((!(((/* implicit */_Bool) var_16)))) ? (((((/* implicit */_Bool) var_13)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2040))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)56)), (-3502134191814232156LL)))))));
                                var_36 -= ((/* implicit */short) max((((((unsigned long long int) arr_37 [(short)3] [i_15] [i_14] [i_1 + 2] [i_0])) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [i_14] [i_14])) ? (((/* implicit */int) (unsigned short)63519)) : (((/* implicit */int) arr_6 [i_14] [(signed char)6] [i_14] [i_14] [i_14]))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_12)), (arr_25 [12ULL] [i_15] [i_14])))))))));
                            }
                        } 
                    } 
                } 
                arr_62 [i_0 + 1] [i_0] [(unsigned char)12] = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_17)), (((var_11) ? (((long long int) (short)-11092)) : (((/* implicit */long long int) (+(((/* implicit */int) (short)32767)))))))));
            }
        } 
    } 
}
