/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129468
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */_Bool) ((long long int) arr_1 [i_0]));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            var_13 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_4 [i_0]))))) ^ (var_5)));
            var_14 = ((((/* implicit */int) ((signed char) var_5))) / (((-597605069) % (((/* implicit */int) arr_4 [i_0])))));
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) var_3)) ? (arr_1 [i_1 + 1]) : (72057594037927935LL)))));
        }
        for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            arr_11 [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) var_0);
            var_15 = ((signed char) arr_9 [i_0] [i_2]);
        }
        for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            arr_15 [i_3] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-21871)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) -2402078430268338986LL))))) : (((/* implicit */int) (_Bool)1))));
            arr_16 [i_3] = ((long long int) ((((/* implicit */int) var_10)) % (((/* implicit */int) var_10))));
        }
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_0)) - (arr_1 [i_0])));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) ((((-2402078430268338982LL) + (9223372036854775807LL))) >> (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) -2402078430268338986LL)) ? (arr_0 [i_4] [5LL]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_4] [(short)4])))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) 
        {
            var_18 = ((/* implicit */short) ((unsigned int) var_1));
            var_19 -= ((2402078430268338982LL) == (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_4] [i_4]))));
            arr_22 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((/* implicit */int) var_7)) : ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)10944))))));
        }
        /* LoopSeq 4 */
        for (signed char i_6 = 4; i_6 < 14; i_6 += 3) 
        {
            arr_27 [i_6 - 3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) min((var_7), (((/* implicit */short) var_2))))) : (((((/* implicit */_Bool) arr_2 [i_4])) ? (((/* implicit */int) arr_4 [i_4])) : (((/* implicit */int) arr_5 [i_4] [i_6] [i_4]))))))) != ((-9223372036854775807LL - 1LL))));
            var_20 = ((/* implicit */signed char) ((_Bool) min((((/* implicit */signed char) (_Bool)1)), (arr_10 [i_6 - 1] [i_6] [i_6]))));
            arr_28 [i_4] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) max(((unsigned short)10944), (((/* implicit */unsigned short) (signed char)-59))))) : (min((var_9), ((+(var_3)))))));
            arr_29 [i_6] [i_6 - 2] = ((/* implicit */unsigned long long int) arr_12 [i_4] [i_6] [i_6]);
        }
        for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 3) 
        {
            arr_33 [i_4] [i_4] [i_7] = ((/* implicit */unsigned long long int) max((((arr_21 [i_4]) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) var_1))));
            arr_34 [i_4] [i_4] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_1 [i_7])) ? (arr_3 [i_4]) : (arr_3 [i_4]))));
        }
        for (long long int i_8 = 0; i_8 < 15; i_8 += 2) 
        {
            var_21 -= ((/* implicit */signed char) (_Bool)1);
            var_22 = ((var_5) + (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_35 [i_4] [i_4]))))), ((unsigned short)50702))))));
            arr_37 [i_4] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_10)), (((((/* implicit */_Bool) arr_26 [i_4])) ? (arr_26 [i_4]) : (arr_26 [i_4])))));
            var_23 = ((((/* implicit */_Bool) min((min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)23))), (((/* implicit */unsigned char) var_6))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_11)), (max((((/* implicit */unsigned short) arr_7 [i_4] [i_8])), (arr_20 [i_4] [i_4])))))) : (((/* implicit */int) ((unsigned short) arr_35 [i_4] [(unsigned char)14]))));
        }
        for (unsigned short i_9 = 0; i_9 < 15; i_9 += 3) 
        {
            /* LoopSeq 3 */
            for (int i_10 = 0; i_10 < 15; i_10 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_11 = 0; i_11 < 15; i_11 += 3) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_12 = 2; i_12 < 13; i_12 += 2) 
                    {
                        arr_48 [i_12 - 1] [i_11] [i_9] [i_9] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (2249970172U))))));
                        var_24 += ((/* implicit */signed char) arr_14 [i_4]);
                        arr_49 [i_4] [i_9] [i_10] [i_9] [i_9] = ((/* implicit */_Bool) max((((/* implicit */int) var_7)), ((~(((/* implicit */int) arr_4 [i_4]))))));
                    }
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_4] [i_4])) ? (min((((/* implicit */unsigned long long int) arr_32 [i_4] [i_4])), (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_42 [i_4] [i_9] [i_10] [i_11]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -5093314178758561270LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-102)))))));
                    arr_50 [i_9] [0] [0] [i_11] = ((/* implicit */long long int) var_7);
                    /* LoopSeq 3 */
                    for (int i_13 = 0; i_13 < 15; i_13 += 3) 
                    {
                        var_26 = arr_44 [i_4] [i_10] [i_11] [i_13];
                        arr_53 [i_9] [2] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -5863049781982967371LL)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_4] [i_4])) ? (((/* implicit */int) var_11)) : (var_9)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_43 [i_4] [i_10] [i_4])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                        arr_54 [i_4] [i_9] [i_10] [i_9] [(unsigned char)2] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) arr_35 [i_4] [i_9])) / (var_4))) << (((max((((int) (_Bool)0)), (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_7 [i_11] [i_13])))))) - (6195)))));
                    }
                    for (int i_14 = 1; i_14 < 12; i_14 += 3) 
                    {
                        arr_57 [i_4] [i_9] [i_10] [i_9] [i_11] [i_14 - 1] = ((/* implicit */unsigned short) var_4);
                        arr_58 [i_9] [5ULL] [i_9] [(unsigned short)1] [(unsigned short)1] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_4] [i_9] [i_10] [i_4] [i_14])) ? (min((var_0), (((/* implicit */int) (short)-26750)))) : (((/* implicit */int) ((_Bool) arr_14 [i_9])))))) ? (((/* implicit */int) (unsigned char)175)) : (((/* implicit */int) (unsigned char)0))));
                        var_27 = ((/* implicit */unsigned char) (unsigned short)0);
                        arr_59 [i_4] [i_9] [i_4] [i_4] [(signed char)3] [(signed char)3] = ((/* implicit */int) ((((/* implicit */_Bool) min((min((arr_35 [i_14] [i_11]), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) var_6))))) ? (((/* implicit */unsigned long long int) var_9)) : (min((max((14601203655749581433ULL), (((/* implicit */unsigned long long int) -2402078430268339013LL)))), (((/* implicit */unsigned long long int) max((arr_17 [i_14]), (var_6))))))));
                    }
                    for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 3) 
                    {
                        var_28 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)0))));
                        var_29 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_6)) ? (arr_35 [i_4] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) arr_61 [i_9] [i_10] [i_15]))))) : (((/* implicit */long long int) (+(((/* implicit */int) var_2))))))), (((/* implicit */long long int) var_10))));
                        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) (unsigned char)0)))))) ? (min((max((arr_18 [i_4]), (((/* implicit */int) var_10)))), (((var_0) + (((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) arr_52 [i_9] [i_9] [i_15] [i_15] [i_15] [i_10]))));
                    }
                }
                var_31 = ((/* implicit */_Bool) (+(((int) var_8))));
            }
            for (signed char i_16 = 1; i_16 < 12; i_16 += 3) 
            {
                var_32 = ((/* implicit */long long int) (!(((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_6)), (var_7))))) != (max((9223372036854775807LL), (-2402078430268338980LL)))))));
                arr_66 [i_9] [i_9] [i_16 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_36 [i_4] [i_9])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_63 [i_4] [i_4] [i_4] [8ULL] [i_4]))) : (18446744073709551615ULL)))) ? (((/* implicit */int) ((7ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_4] [i_4])))))) : (((((/* implicit */_Bool) (short)-6063)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)100))))))) : (max((((/* implicit */long long int) ((_Bool) var_11))), (max((2402078430268338952LL), (((/* implicit */long long int) (signed char)36))))))));
            }
            /* vectorizable */
            for (int i_17 = 0; i_17 < 15; i_17 += 3) 
            {
                var_33 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6))));
                arr_71 [i_17] [i_9] [i_9] = ((/* implicit */int) arr_60 [i_17] [i_17] [i_9] [i_9] [i_4] [(_Bool)1]);
                /* LoopNest 2 */
                for (unsigned int i_18 = 0; i_18 < 15; i_18 += 3) 
                {
                    for (unsigned long long int i_19 = 0; i_19 < 15; i_19 += 3) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (arr_47 [i_4] [i_9] [i_17] [i_19] [i_19]) : (((/* implicit */long long int) ((((/* implicit */_Bool) 5863049781982967352LL)) ? (((/* implicit */int) arr_60 [i_4] [i_4] [i_9] [i_9] [i_18] [i_18])) : (((/* implicit */int) arr_61 [i_4] [i_4] [i_4])))))));
                            arr_78 [i_9] [i_9] [i_17] [i_17] [i_19] [(signed char)14] [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) << (((((unsigned int) (unsigned short)17306)) - (17289U)))));
                            var_35 = ((/* implicit */unsigned short) (!(var_2)));
                            arr_79 [i_9] = ((/* implicit */short) ((unsigned long long int) arr_7 [i_4] [i_19]));
                            arr_80 [i_4] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_56 [i_4] [i_9] [i_19] [i_18] [i_4] [i_19])))) ? (((/* implicit */int) var_6)) : (var_0)));
                        }
                    } 
                } 
                arr_81 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_9] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-2402078430268338980LL)));
            }
            var_36 = ((/* implicit */unsigned int) 9891227927893440173ULL);
            var_37 = ((/* implicit */_Bool) ((unsigned short) max((min((var_4), (((/* implicit */unsigned long long int) arr_8 [i_4] [i_4])))), (((/* implicit */unsigned long long int) var_3)))));
        }
        arr_82 [i_4] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_0)) : (973592789U)))), (((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_4]))) & (arr_12 [i_4] [i_4] [i_4])))));
        var_38 = ((/* implicit */unsigned int) max((var_38), (max((((/* implicit */unsigned int) var_3)), (min((arr_75 [2LL] [2LL]), (((/* implicit */unsigned int) min((var_2), ((_Bool)0))))))))));
    }
    /* LoopNest 2 */
    for (int i_20 = 0; i_20 < 18; i_20 += 3) 
    {
        for (int i_21 = 0; i_21 < 18; i_21 += 3) 
        {
            {
                arr_88 [i_20] [i_20] [i_20] = ((/* implicit */int) ((unsigned int) (_Bool)1));
                var_39 = ((/* implicit */_Bool) var_5);
                arr_89 [i_20] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_5))) ? (max((1ULL), (((/* implicit */unsigned long long int) 973592781U)))) : (((/* implicit */unsigned long long int) ((long long int) arr_85 [i_20] [i_21] [i_21])))));
            }
        } 
    } 
    var_40 = ((/* implicit */signed char) var_10);
    var_41 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (min((var_9), (-707666620))) : (((/* implicit */int) ((short) (_Bool)1))))))));
}
