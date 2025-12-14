/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148125
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-65)) == (16777215)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (signed char i_2 = 1; i_2 < 12; i_2 += 4) 
                {
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (signed char)-40))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 4; i_3 < 13; i_3 += 4) 
                    {
                        arr_13 [i_2 - 1] [i_1] [i_2] [(unsigned char)10] [i_2] [i_2] = ((/* implicit */short) ((long long int) min((((((/* implicit */_Bool) 16777215)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_7 [i_0 - 2] [i_1] [i_3 - 1]))), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) arr_3 [i_0])), (arr_9 [11] [i_1] [i_1] [i_3])))))));
                        var_19 = ((/* implicit */unsigned int) var_0);
                    }
                    for (long long int i_4 = 1; i_4 < 13; i_4 += 4) 
                    {
                        var_20 = ((/* implicit */int) ((min((((319201759U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1] [(unsigned short)11] [i_2] [i_2]))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)34917))))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((4LL) < (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [3] [i_4 + 1] [i_2 + 2])))))))));
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_21 += ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_7 [i_0 + 1] [i_2 + 2] [i_4 + 1])) ^ (arr_4 [i_2] [i_2 + 2])));
                            arr_19 [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) ((max((arr_7 [(short)1] [(unsigned short)11] [i_2 - 1]), (((/* implicit */unsigned int) (unsigned short)48974)))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_2 - 1] [i_2] [i_2])))))) - ((-(((((/* implicit */int) (_Bool)1)) << (((-16777215) + (16777243)))))))));
                        }
                        for (int i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_16))))) ? (((/* implicit */int) ((signed char) arr_21 [1] [(_Bool)1]))) : (arr_18 [i_0 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((min((var_5), (((/* implicit */unsigned int) -2041684801)))) != (((/* implicit */unsigned int) (-(((/* implicit */int) var_10))))))))) : (min(((~(594017221U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_0] [i_6] [i_2 - 1] [i_6])) != (((/* implicit */int) arr_1 [i_4]))))))))))));
                            var_23 *= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 8411160030536783167LL)) ? (arr_14 [i_0] [i_0 + 1] [i_2 - 1] [i_4 + 1] [i_4]) : (arr_14 [i_0] [i_0 - 1] [i_2 + 1] [i_4 - 1] [i_4])))) ^ ((+(var_2)))));
                            var_24 = ((/* implicit */unsigned short) min((-8411160030536783168LL), (((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_2] [i_2] [i_2] [i_2 - 1])))))));
                            arr_22 [i_2] [i_4 - 1] [(unsigned short)10] [i_1] [i_2] = ((/* implicit */unsigned short) (signed char)-112);
                            arr_23 [i_0 - 2] [i_2] [i_2] [i_4 - 1] [i_6] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)11710))) != (min((3700950074U), (((/* implicit */unsigned int) (_Bool)1))))));
                        }
                        arr_24 [i_2] [i_2] [i_2] [i_4] = ((/* implicit */unsigned char) ((16777241) + ((-(((/* implicit */int) (_Bool)0))))));
                        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) arr_17 [i_0] [i_1] [i_2] [i_1] [i_2 - 1] [i_1] [i_0 - 1]))));
                    }
                }
                for (unsigned short i_7 = 1; i_7 < 11; i_7 += 4) 
                {
                    var_26 = ((/* implicit */signed char) var_6);
                    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) arr_5 [i_0] [i_0]))));
                }
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                {
                    arr_31 [i_8] [i_8] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_8] [i_0 - 2] [i_0 - 2] [i_8 + 1]))))), (min((18U), (2156108333U)))));
                    /* LoopSeq 2 */
                    for (int i_9 = 1; i_9 < 11; i_9 += 4) 
                    {
                        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) max((((/* implicit */unsigned short) (_Bool)1)), (min((((/* implicit */unsigned short) (short)14089)), (arr_29 [0] [i_1] [i_8 + 1] [i_9]))))))));
                        var_29 -= ((/* implicit */unsigned char) max((((2332633553994167167LL) / (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((((/* implicit */_Bool) (~(arr_18 [i_0])))) ? (min((var_2), (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_1])))))));
                        var_30 = ((/* implicit */short) ((max((((/* implicit */long long int) var_7)), (((((/* implicit */_Bool) var_14)) ? (2332633553994167167LL) : (((/* implicit */long long int) ((/* implicit */int) var_16))))))) << (((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_27 [i_0 - 1] [i_0])) : (((/* implicit */int) (signed char)127))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) var_13)) : (0U))))) - (1378003655U)))));
                    }
                    /* vectorizable */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_38 [i_0] [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 2] [i_8] = ((((/* implicit */_Bool) (((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) << (((/* implicit */int) (short)0))))) ? (8411160030536783167LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)17))));
                        arr_39 [i_0 - 1] [i_0 - 1] [i_8] [i_0 - 1] = ((int) 2502245480U);
                        arr_40 [i_8] [i_1] [(signed char)13] [i_8] = ((/* implicit */signed char) ((((/* implicit */int) (short)-2)) / (((/* implicit */int) ((signed char) var_5)))));
                        /* LoopSeq 4 */
                        for (int i_11 = 4; i_11 < 12; i_11 += 4) /* same iter space */
                        {
                            var_31 = ((/* implicit */signed char) (~((+(8411160030536783160LL)))));
                            var_32 -= ((/* implicit */unsigned char) arr_4 [i_11 - 1] [i_0 - 2]);
                            var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-32764))) / (arr_41 [i_11 + 1] [i_11 - 4] [i_11] [i_0 + 1] [i_0]))))));
                            arr_44 [i_10] [i_10] [i_8] [i_10] [i_11] [3] = ((/* implicit */long long int) var_14);
                            arr_45 [i_0] [i_0] [i_1] [i_0 + 1] [i_0] |= ((/* implicit */signed char) (short)-1);
                        }
                        for (int i_12 = 4; i_12 < 12; i_12 += 4) /* same iter space */
                        {
                            var_34 &= ((/* implicit */long long int) ((((/* implicit */int) arr_26 [i_12 - 2] [i_12] [i_12 - 2] [i_12 - 2])) ^ (var_11)));
                            var_35 -= ((/* implicit */unsigned int) 12);
                            var_36 -= ((/* implicit */short) (+(((/* implicit */int) arr_6 [i_0] [(unsigned short)10]))));
                            var_37 -= ((/* implicit */_Bool) ((int) arr_21 [(short)10] [i_0]));
                        }
                        for (int i_13 = 4; i_13 < 12; i_13 += 4) /* same iter space */
                        {
                            var_38 = ((int) arr_27 [i_8] [(unsigned char)1]);
                            arr_52 [i_0] [i_8] [i_1] [i_1] [9U] [9U] [i_1] = ((/* implicit */_Bool) arr_46 [i_13 - 3] [i_13 - 3] [i_8 + 1] [i_0 - 1] [i_8 + 1]);
                            arr_53 [i_0] [i_8] [i_0] [i_0] [i_0] [9LL] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)6238)) == (((/* implicit */int) var_1))));
                        }
                        for (signed char i_14 = 3; i_14 < 13; i_14 += 4) 
                        {
                            arr_58 [i_8 + 1] [(unsigned char)4] [i_8 + 1] [(unsigned char)12] [i_8 + 1] [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) 8))) ? (((((/* implicit */_Bool) 1628721414U)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) (unsigned char)244)))) : (((((/* implicit */_Bool) var_3)) ? (-16777207) : (-1628125690)))));
                            arr_59 [i_14 - 1] [i_0] [i_1] [i_1] [(unsigned char)4] [i_0] &= ((/* implicit */signed char) 1814009976U);
                            var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) var_14))));
                        }
                    }
                    arr_60 [i_8] [i_8] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 131071U)) ? (2414629158U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)11710)))))) ? (((min((((/* implicit */int) (short)11710)), (2041684800))) & (1961292848))) : (var_6));
                    arr_61 [i_1] [i_1] [i_8] [4] = (i_8 % 2 == zero) ? (((/* implicit */long long int) (~(((((/* implicit */int) var_14)) << (((((/* implicit */int) arr_35 [i_8] [7LL] [5LL] [i_8])) - (35)))))))) : (((/* implicit */long long int) (~(((((/* implicit */int) var_14)) << (((((((/* implicit */int) arr_35 [i_8] [7LL] [5LL] [i_8])) - (35))) - (29))))))));
                }
                for (unsigned int i_15 = 0; i_15 < 14; i_15 += 4) 
                {
                    arr_66 [i_1] = ((/* implicit */long long int) min((((/* implicit */short) (!((!(((/* implicit */_Bool) var_13))))))), (min(((short)-14589), (((/* implicit */short) (signed char)-110))))));
                    /* LoopSeq 2 */
                    for (signed char i_16 = 2; i_16 < 10; i_16 += 4) /* same iter space */
                    {
                        arr_69 [i_0] [i_1] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)103)) ? (((((/* implicit */int) (signed char)-113)) & (((/* implicit */int) (unsigned short)24364)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))))) ? (max((((((/* implicit */_Bool) var_16)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (max((((/* implicit */unsigned int) var_11)), (arr_63 [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)44523)) ^ (63321834))))));
                        arr_70 [i_0 + 1] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_46 [i_0 + 1] [i_0] [i_1] [i_15] [i_0]))));
                        /* LoopSeq 2 */
                        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                        {
                            var_40 += ((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) var_8)))));
                            arr_73 [i_17] [i_17] [i_16] [11] [i_17] [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */int) (signed char)-103)) : (arr_14 [i_16] [i_17 - 1] [i_17 - 1] [i_17] [(unsigned short)13]))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [(signed char)12] [i_17 - 1] [i_17] [i_17] [i_17 - 1])))))));
                            var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) (-(min((var_5), (((/* implicit */unsigned int) arr_5 [i_16 - 2] [i_0 - 2])))))))));
                            var_42 ^= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_47 [i_16 + 2])))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned char)170)) == (((/* implicit */int) var_14)))))))));
                        }
                        for (unsigned int i_18 = 0; i_18 < 14; i_18 += 4) 
                        {
                            arr_77 [i_0] &= ((/* implicit */long long int) (-(((/* implicit */int) max(((unsigned char)152), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48974))) > (var_4)))))))));
                            arr_78 [(_Bool)1] [i_1] [i_15] [(_Bool)1] [7] = var_0;
                            var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)19521))))))))));
                            var_44 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_67 [i_18] [i_18] [i_18] [i_16 + 3])))) ? (((/* implicit */int) (unsigned char)173)) : (((/* implicit */int) ((arr_20 [i_18]) || (((/* implicit */_Bool) arr_55 [i_16] [i_18] [i_16] [i_16 - 1] [i_16 - 1])))))));
                        }
                    }
                    for (signed char i_19 = 2; i_19 < 10; i_19 += 4) /* same iter space */
                    {
                        arr_81 [(unsigned short)9] [(unsigned short)13] |= ((/* implicit */signed char) min((((min((arr_32 [i_0] [i_0] [(unsigned short)7] [i_15] [i_19 + 4]), (((/* implicit */int) (signed char)-127)))) | (((/* implicit */int) arr_2 [i_0 - 2])))), (((/* implicit */int) (unsigned short)0))));
                        var_45 |= ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned char) arr_41 [i_19 + 4] [i_19 + 3] [i_19 + 2] [i_19 + 4] [i_19 + 4])))));
                        arr_82 [i_0] [i_0] [i_15] [i_19 - 2] [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)5))));
                    }
                    var_46 = ((/* implicit */int) (unsigned short)16562);
                }
                arr_83 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned short) ((arr_41 [i_0] [13U] [i_1] [4LL] [i_1]) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-94)))))), (((unsigned short) arr_9 [i_1] [i_0 + 1] [i_0] [i_0])))), (((/* implicit */unsigned short) (((~(-1730821288))) >= (((/* implicit */int) arr_21 [i_0 - 1] [i_0 + 1])))))));
            }
        } 
    } 
    var_47 = ((/* implicit */int) (-(var_4)));
    var_48 = ((/* implicit */signed char) min((var_48), (var_10)));
    var_49 = ((/* implicit */_Bool) min((var_49), (((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - ((-(var_8))))) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (-1670438801) : (((/* implicit */int) var_7)))))))))))));
}
