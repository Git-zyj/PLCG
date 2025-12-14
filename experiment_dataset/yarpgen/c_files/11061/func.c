/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11061
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) /* same iter space */
    {
        var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10988910179343986663ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)108))) : ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (2036864280U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64884)))))) ? (((/* implicit */int) var_9)) : (min((arr_1 [i_0]), (arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_6)))) ? ((+(var_2))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1])))));
        var_11 = ((/* implicit */signed char) ((unsigned int) (unsigned short)65535));
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            var_12 = ((/* implicit */unsigned char) ((((_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) var_9))));
            arr_9 [i_2] = ((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)65515));
            arr_10 [i_2] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_1]))));
            arr_11 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((arr_8 [i_1]) > (arr_5 [i_1]))))));
        }
        for (signed char i_3 = 1; i_3 < 9; i_3 += 2) 
        {
            arr_14 [i_3] = ((/* implicit */unsigned short) ((((var_6) - (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_3])) && (((/* implicit */_Bool) (unsigned short)9254))))))));
            /* LoopSeq 4 */
            for (long long int i_4 = 0; i_4 < 13; i_4 += 2) /* same iter space */
            {
                arr_19 [i_3] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_3] [i_3 + 1] [i_3 - 1]))) / (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_16 [i_3 + 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_1] [i_3] [i_3 + 2] [i_4])))))));
                arr_20 [i_3] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (var_2) : (var_2))));
                /* LoopSeq 1 */
                for (long long int i_5 = 2; i_5 < 12; i_5 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_6 = 1; i_6 < 12; i_6 += 2) 
                    {
                        arr_25 [i_3] [i_3] [i_5] [i_3] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7)))));
                        arr_26 [i_1] [i_1] [i_3] [i_3] [i_5] [i_1] [(short)12] = ((/* implicit */short) (+(var_2)));
                    }
                    for (short i_7 = 0; i_7 < 13; i_7 += 2) 
                    {
                        arr_30 [i_7] [i_3] [i_5] [i_4] [i_3] [i_3] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) ((short) arr_7 [i_3]))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) arr_12 [i_3] [(unsigned char)4])))))));
                        var_13 = ((/* implicit */unsigned short) (-(arr_27 [i_1] [i_3] [i_3] [i_5] [i_7])));
                        arr_31 [6LL] [i_3] [i_4] [(unsigned char)12] [i_7] [6LL] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) arr_13 [i_4] [i_4] [(unsigned short)12]))) ^ (arr_27 [i_4] [(_Bool)1] [i_3] [i_5] [i_5])));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_34 [i_1] [i_3] [i_4] [i_3] [i_1] = arr_24 [i_5] [i_3];
                        var_14 = ((/* implicit */unsigned short) arr_1 [i_3 - 1]);
                    }
                    arr_35 [i_1] [i_3] [i_4] [i_3] = ((/* implicit */unsigned short) (-(arr_22 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 - 1])));
                    /* LoopSeq 1 */
                    for (int i_9 = 0; i_9 < 13; i_9 += 2) 
                    {
                        arr_38 [i_3] = ((/* implicit */unsigned char) 10988910179343986663ULL);
                        arr_39 [i_3] [i_3] [i_5] [i_9] = ((/* implicit */unsigned short) var_2);
                        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_1 [i_3 + 4]) : (arr_1 [i_9]))))));
                        var_16 = ((/* implicit */unsigned long long int) (~(((long long int) arr_24 [7ULL] [i_3]))));
                        arr_40 [i_4] [i_5 - 1] [i_9] [i_9] [i_5] [i_5] [i_3] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_24 [i_1] [i_3])) >> (((/* implicit */int) arr_24 [i_3] [i_3]))))) - (((arr_16 [i_9]) ^ (((/* implicit */unsigned long long int) arr_8 [i_1]))))));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned short) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)143))) ^ (18446744073709551615ULL))));
                        var_18 ^= (-(arr_27 [i_5] [i_4] [i_4] [i_5] [i_5]));
                    }
                    for (signed char i_11 = 1; i_11 < 12; i_11 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((arr_16 [i_3 + 2]) == (((/* implicit */unsigned long long int) (~(arr_5 [i_11 + 1])))))))));
                        var_20 += ((/* implicit */unsigned int) ((_Bool) var_8));
                        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) var_5))));
                    }
                    arr_47 [i_3] [i_4] = ((/* implicit */_Bool) ((var_2) / (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)61)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)31)))))));
                }
            }
            for (long long int i_12 = 0; i_12 < 13; i_12 += 2) /* same iter space */
            {
                arr_50 [(unsigned char)2] [(unsigned char)2] [i_12] [i_3] = ((/* implicit */short) var_3);
                arr_51 [i_12] [i_3] [i_3] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_12 [i_3] [i_3]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_36 [i_1] [i_1] [i_1] [i_1] [i_12]))))) ? (((/* implicit */int) ((arr_43 [i_1] [i_1] [i_1] [2] [i_3 - 1] [i_3]) >= (((/* implicit */int) var_9))))) : ((((_Bool)1) ? (var_4) : (((/* implicit */int) arr_42 [i_1] [i_1] [i_3 + 3] [i_3] [(unsigned char)10]))))));
                arr_52 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) arr_44 [i_12] [i_12] [i_3 - 1] [i_1] [i_1]))) == (((int) (_Bool)1))));
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                arr_56 [i_3] = ((/* implicit */unsigned char) arr_27 [i_1] [i_1] [i_3] [i_3] [i_13]);
                /* LoopNest 2 */
                for (long long int i_14 = 0; i_14 < 13; i_14 += 2) 
                {
                    for (unsigned char i_15 = 1; i_15 < 11; i_15 += 2) 
                    {
                        {
                            arr_63 [i_1] [i_3] [i_13] [i_3] [i_15] = ((/* implicit */_Bool) (~(((/* implicit */int) var_8))));
                            arr_64 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_9) ? (-9223372036854775804LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9257)))))) ? (((var_6) | (((/* implicit */unsigned int) ((/* implicit */int) (short)10648))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))));
                            arr_65 [i_3] [i_13] [i_13] [9ULL] [i_3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [i_14] [i_14] [i_3 + 1] [i_1])))))));
                        }
                    } 
                } 
            }
            for (unsigned char i_16 = 0; i_16 < 13; i_16 += 4) 
            {
                var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_4 [8LL])))) ? (((/* implicit */int) arr_29 [i_1] [i_3 + 2] [i_16] [i_16] [(unsigned short)5])) : (((/* implicit */int) arr_59 [i_16] [i_1] [i_1]))));
                var_23 = ((long long int) 10988910179343986647ULL);
                arr_69 [i_3] [i_3 + 4] [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)42)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned char)103))));
                arr_70 [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) arr_67 [i_1] [i_1] [i_1]))) / (((int) var_1))));
            }
            var_24 = ((/* implicit */unsigned short) ((var_6) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_3] [i_3 + 2] [i_3 + 1] [i_3] [i_3])))));
        }
    }
    for (long long int i_17 = 0; i_17 < 20; i_17 += 2) 
    {
        arr_75 [i_17] = ((/* implicit */unsigned long long int) max((((short) arr_74 [i_17])), (((/* implicit */short) var_9))));
        arr_76 [i_17] = ((((/* implicit */_Bool) var_4)) ? (min((((((/* implicit */int) (unsigned char)68)) * (((/* implicit */int) (unsigned char)194)))), (max((((/* implicit */int) (unsigned char)255)), (2147483646))))) : ((((+(var_4))) - (((/* implicit */int) var_5)))));
    }
    for (unsigned int i_18 = 0; i_18 < 16; i_18 += 4) 
    {
        arr_81 [i_18] = ((/* implicit */short) min((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)48))) + (arr_78 [i_18]))))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)3)) * (((/* implicit */int) (unsigned short)9255)))))));
        arr_82 [i_18] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((signed char) (unsigned char)132))))) ^ (((((/* implicit */_Bool) min((var_1), (arr_72 [i_18] [i_18])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_73 [i_18])) : (((/* implicit */int) (unsigned short)4157))))) : (var_2)))));
        /* LoopNest 3 */
        for (unsigned long long int i_19 = 0; i_19 < 16; i_19 += 4) 
        {
            for (unsigned short i_20 = 2; i_20 < 14; i_20 += 4) 
            {
                for (short i_21 = 4; i_21 < 13; i_21 += 1) 
                {
                    {
                        arr_91 [i_21 - 2] [i_20] [i_19] [i_18] &= ((/* implicit */unsigned long long int) ((((133658785) >> (((((/* implicit */int) (unsigned char)139)) - (129))))) == (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_73 [i_20])), (arr_72 [i_18] [i_18])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1))))) : (((/* implicit */int) ((_Bool) arr_71 [i_20])))))));
                        var_25 = ((/* implicit */unsigned char) (-(123145302310912LL)));
                    }
                } 
            } 
        } 
    }
    var_26 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) min((var_6), (((/* implicit */unsigned int) var_8)))))) ^ (((/* implicit */int) ((unsigned short) min(((unsigned char)61), (((/* implicit */unsigned char) var_9))))))));
}
