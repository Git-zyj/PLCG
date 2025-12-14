/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12224
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */int) ((short) min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_1])), (14021494789703813685ULL))))) < (max((var_13), (((((/* implicit */int) arr_3 [i_0])) * (((/* implicit */int) arr_0 [(unsigned short)3] [0LL])))))))))));
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) (unsigned short)27483))) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned long long int) ((unsigned char) max((((/* implicit */long long int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3] [i_0])), (arr_13 [i_0] [i_1] [i_3] [i_3] [i_1]))));
                            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) -4950737900642047358LL))));
                        }
                        for (int i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            var_20 = ((/* implicit */long long int) max((var_20), (min((min((arr_13 [i_5] [i_3] [i_0] [i_1] [i_0]), (arr_13 [i_0] [i_1] [i_5] [i_3] [i_1]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_2)), (var_13)))))))))));
                            arr_16 [i_0] [i_0] [i_3] [i_2] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((((/* implicit */int) min((arr_15 [i_1] [i_0] [i_1]), (((/* implicit */short) (signed char)87))))) << (((((min((4950737900642047357LL), (((/* implicit */long long int) arr_6 [i_0] [i_3] [i_3])))) + (24744LL))) - (18LL)))))));
                        }
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (((~(((/* implicit */int) var_0)))) >= (-2010387940))))));
                    }
                    for (short i_6 = 3; i_6 < 8; i_6 += 4) 
                    {
                        var_22 += ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_6] [i_0] [i_6 + 1] [i_0] [i_6 + 3]))))), (((((/* implicit */_Bool) ((((-4950737900642047345LL) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_15 [i_0] [i_0] [i_0])) - (9064)))))) ? ((+(var_1))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)-88)), (arr_10 [i_0] [i_1] [i_1] [i_0])))))))));
                        arr_19 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_10 [i_6 - 2] [i_6] [i_6] [i_6]), (((/* implicit */short) arr_11 [i_6 + 2] [i_6] [i_2] [i_6 + 2] [i_6]))))) ? (((((/* implicit */_Bool) arr_8 [i_6 - 1] [i_6] [i_6 - 3] [i_2] [i_6])) ? (arr_13 [i_6 + 1] [i_6] [i_0] [i_6] [i_6 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_6 - 2] [i_6 - 2] [i_6] [i_6]))))) : (((((/* implicit */_Bool) arr_11 [i_6 + 1] [i_6] [i_0] [i_6] [i_6 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-113))) : (arr_13 [i_6 + 1] [i_6] [i_0] [(short)2] [i_6 - 1])))));
                        arr_20 [i_1] [i_6] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((min((((/* implicit */long long int) arr_5 [i_0] [i_1] [i_6])), (arr_13 [i_1] [i_0] [i_2] [i_6] [0U]))), (((((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2] [i_6 + 1]))) : (4950737900642047357LL))))))));
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) min((arr_3 [i_1]), ((unsigned short)511))))))) & (min((min((((/* implicit */unsigned int) arr_11 [i_0] [i_1] [i_2] [i_6 - 1] [i_6 + 1])), (arr_7 [i_6 - 3] [i_0] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_0] [i_1] [7ULL] [i_1] [i_1] [i_0] [i_0])) % (var_10)))))))))));
                    }
                }
                for (unsigned long long int i_7 = 2; i_7 < 8; i_7 += 2) 
                {
                    arr_25 [i_7] [i_0] = ((/* implicit */long long int) arr_10 [i_7] [i_7 - 2] [i_7] [i_7 + 2]);
                    /* LoopSeq 3 */
                    for (unsigned short i_8 = 2; i_8 < 10; i_8 += 4) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_31 [i_0] [i_0] [i_0] [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0] [i_7]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_7 + 3] [i_7 + 3])) | (var_13)))) : (((unsigned long long int) var_1))));
                            var_24 = (!(((/* implicit */_Bool) var_7)));
                            var_25 = ((/* implicit */unsigned int) ((_Bool) arr_1 [i_7 - 1] [i_8 + 1]));
                        }
                        for (unsigned char i_10 = 3; i_10 < 10; i_10 += 2) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) max((var_0), (((/* implicit */short) arr_18 [i_1]))))) / (((((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_1] [i_8] [i_10])) : (((/* implicit */int) (unsigned char)181)))))));
                            arr_35 [i_10 - 2] [i_1] [i_10] [(short)7] [i_10] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(((/* implicit */int) min((((/* implicit */unsigned char) arr_12 [i_0] [i_1] [6ULL] [i_7] [i_8] [i_7] [i_10 - 3])), (arr_11 [i_0] [i_1] [i_10] [i_8] [i_0]))))))) & (min((arr_17 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) arr_21 [i_7] [i_7] [i_10 - 1] [i_10]))))));
                        }
                        for (unsigned char i_11 = 3; i_11 < 10; i_11 += 2) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2875937766U)) ? (((((/* implicit */_Bool) (signed char)87)) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_7])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (arr_28 [i_0] [i_1] [i_1] [i_7] [i_8] [i_11]))))))) ? (((((/* implicit */int) arr_12 [i_7 + 2] [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_8] [i_8] [i_11 + 1])) % (((/* implicit */int) arr_23 [i_7 + 2] [i_8 - 2] [i_7 + 2] [i_7 + 2])))) : (((/* implicit */int) (signed char)-121))));
                            var_28 = ((/* implicit */unsigned long long int) var_8);
                            arr_38 [i_8] [i_11] [i_11] [i_8] [i_11] = (i_11 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */_Bool) ((((max((arr_30 [i_11] [i_1] [i_7 + 2] [i_11] [3LL]), (arr_36 [i_0] [i_11] [i_11] [i_8 - 1] [i_0]))) + (9223372036854775807LL))) >> ((((~(((/* implicit */int) arr_18 [i_8])))) + (137)))))) ? (((((((/* implicit */_Bool) arr_5 [i_7 + 3] [i_1] [i_0])) ? (((/* implicit */int) var_8)) : (-699402991))) / (((var_10) / (((/* implicit */int) arr_28 [i_0] [i_1] [i_0] [i_8] [i_11] [i_7])))))) : (((/* implicit */int) arr_18 [i_7]))))) : (((/* implicit */signed char) ((((/* implicit */_Bool) ((((((max((arr_30 [i_11] [i_1] [i_7 + 2] [i_11] [3LL]), (arr_36 [i_0] [i_11] [i_11] [i_8 - 1] [i_0]))) - (9223372036854775807LL))) + (9223372036854775807LL))) >> ((((~(((/* implicit */int) arr_18 [i_8])))) + (137)))))) ? (((((((/* implicit */_Bool) arr_5 [i_7 + 3] [i_1] [i_0])) ? (((/* implicit */int) var_8)) : (-699402991))) / (((var_10) / (((/* implicit */int) arr_28 [i_0] [i_1] [i_0] [i_8] [i_11] [i_7])))))) : (((/* implicit */int) arr_18 [i_7])))));
                            arr_39 [i_11] = ((unsigned short) arr_22 [i_0] [i_7] [i_11 - 2]);
                        }
                        var_29 |= ((/* implicit */unsigned long long int) arr_18 [i_1]);
                    }
                    for (short i_12 = 1; i_12 < 9; i_12 += 4) 
                    {
                        arr_43 [i_0] [i_1] [i_12] [i_12] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_13 [i_7 - 1] [i_12] [i_12] [i_12] [i_12 + 1])) ? (arr_13 [i_7 + 3] [i_7] [i_12] [i_7] [i_12 + 2]) : (arr_13 [i_7 + 2] [i_7] [i_12] [i_7] [i_12 + 1]))));
                        arr_44 [i_12] = ((/* implicit */short) max(((~(((/* implicit */int) min((var_9), (arr_33 [i_12] [i_0] [i_1] [i_0] [i_0])))))), (((/* implicit */int) ((short) arr_41 [i_0] [i_7] [i_1] [i_0] [i_0])))));
                        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) min((((/* implicit */long long int) ((((((/* implicit */_Bool) arr_24 [i_12] [i_1] [i_0])) && (((/* implicit */_Bool) 10473482270680731144ULL)))) ? (max((arr_42 [i_0] [i_1] [i_7] [i_7]), (((/* implicit */unsigned int) arr_15 [i_7 + 1] [i_7] [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)-76), (arr_5 [i_1] [i_7 + 3] [i_1])))))))), ((~(arr_30 [i_0] [i_0] [i_1] [i_7] [(unsigned char)2]))))))));
                    }
                    for (unsigned int i_13 = 0; i_13 < 11; i_13 += 4) 
                    {
                        arr_48 [i_0] [i_0] [i_1] [i_1] [i_7] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((-4950737900642047358LL), (((/* implicit */long long int) max((((/* implicit */unsigned char) (signed char)-123)), (arr_45 [i_13]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_0])) ? (-4950737900642047347LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_7] [i_7 + 3] [i_7])))))) ? (max((7973261803028820472ULL), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_7] [i_13])))) : (((/* implicit */unsigned long long int) arr_14 [i_0] [i_7 + 2] [i_7 + 2] [i_0] [i_7] [i_0] [i_1])))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_46 [i_0] [i_0] [i_7] [i_13] [i_13] [i_7])))))))));
                        arr_49 [i_0] [i_7 + 2] [i_7] [i_13] [i_13] = ((/* implicit */_Bool) ((unsigned long long int) (-(min((((/* implicit */unsigned int) arr_12 [i_0] [6ULL] [i_0] [6ULL] [i_1] [i_7] [i_13])), (arr_42 [10] [i_7] [i_1] [i_0]))))));
                        var_31 = ((((/* implicit */unsigned long long int) ((((/* implicit */int) min(((unsigned short)21979), (((/* implicit */unsigned short) arr_46 [i_0] [i_1] [i_0] [i_0] [i_7] [i_0]))))) * (((/* implicit */int) arr_10 [i_0] [i_1] [i_7] [i_13]))))) / (min((((unsigned long long int) arr_22 [i_0] [i_0] [i_13])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_13])) ? (arr_13 [i_13] [i_7 - 1] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
                        arr_50 [9U] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) ((arr_37 [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23278))))))))) : (((/* implicit */int) arr_4 [i_1] [i_1] [i_1]))));
                    }
                    var_32 = ((/* implicit */long long int) 2449124326U);
                }
                for (long long int i_14 = 0; i_14 < 11; i_14 += 2) 
                {
                    arr_54 [i_0] [i_1] [i_14] = ((/* implicit */int) max((min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (unsigned char)86)), ((unsigned short)42894)))), (((var_14) % (((/* implicit */unsigned int) var_6)))))), (((unsigned int) max(((unsigned char)175), (((/* implicit */unsigned char) (signed char)-90)))))));
                    arr_55 [i_0] [i_0] = ((/* implicit */unsigned short) ((int) arr_18 [i_14]));
                    arr_56 [i_1] [i_1] = ((/* implicit */unsigned short) arr_46 [i_0] [i_0] [i_1] [i_1] [i_14] [i_14]);
                    /* LoopNest 2 */
                    for (unsigned short i_15 = 0; i_15 < 11; i_15 += 2) 
                    {
                        for (long long int i_16 = 0; i_16 < 11; i_16 += 4) 
                        {
                            {
                                var_33 ^= ((/* implicit */long long int) min((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)67))))) ? (((((/* implicit */_Bool) arr_45 [i_14])) ? (((/* implicit */unsigned long long int) arr_40 [i_0] [i_1] [i_14] [i_16] [i_16] [i_16])) : (12654225137963846892ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)189))) == (5162983590780293187LL))))))), (((/* implicit */unsigned long long int) ((min((var_11), (((/* implicit */unsigned long long int) var_12)))) > (max((((/* implicit */unsigned long long int) 416363642U)), (var_7))))))));
                                arr_63 [i_0] [i_1] [i_14] [i_16] = max((min((var_4), (((/* implicit */long long int) arr_53 [i_14] [i_1])))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_22 [i_0] [i_14] [i_15]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))) ? (1753721366) : (min((arr_41 [i_0] [i_0] [i_14] [i_15] [i_16]), (((/* implicit */int) arr_15 [i_1] [i_15] [i_1]))))))));
                            }
                        } 
                    } 
                }
                var_34 ^= ((/* implicit */_Bool) arr_52 [i_0] [i_0] [i_0] [i_0]);
            }
        } 
    } 
    var_35 = ((/* implicit */long long int) (~(var_6)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_17 = 1; i_17 < 13; i_17 += 2) 
    {
        arr_68 [i_17] = ((/* implicit */signed char) ((((/* implicit */int) arr_65 [i_17])) < (((/* implicit */int) arr_64 [i_17]))));
        arr_69 [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_64 [i_17]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30805))) : (1125899906842623ULL)));
        var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_66 [i_17] [i_17]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) arr_67 [i_17 + 2])) : (((/* implicit */int) arr_65 [i_17 + 1]))));
    }
}
