/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122044
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
    var_12 = ((/* implicit */unsigned int) var_8);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_4)) : (var_1)))) : (((((/* implicit */_Bool) var_9)) ? (var_2) : (-5558634683622718561LL)))));
        arr_3 [i_0] = ((((/* implicit */long long int) var_7)) / (min((((((/* implicit */_Bool) var_0)) ? (var_2) : (arr_1 [i_0]))), (((/* implicit */long long int) var_4)))));
        arr_4 [i_0] = ((((/* implicit */_Bool) arr_1 [i_0])) ? ((-9223372036854775807LL - 1LL)) : (max((9223372036854775807LL), (((/* implicit */long long int) 0U)))));
    }
    /* vectorizable */
    for (long long int i_1 = 4; i_1 < 15; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 1; i_2 < 15; i_2 += 2) 
        {
            arr_11 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_1])) - (((/* implicit */int) arr_9 [i_1]))));
            arr_12 [(unsigned char)0] [(unsigned char)0] [(unsigned char)2] = ((/* implicit */signed char) ((((((/* implicit */int) arr_8 [i_1])) != (((/* implicit */int) var_6)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_1))))) : (((/* implicit */int) arr_5 [(signed char)12] [(unsigned short)2]))));
            arr_13 [i_1] = ((/* implicit */unsigned char) arr_7 [i_1 - 4] [i_1 - 4]);
            arr_14 [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) (~(2147483647)));
        }
        arr_15 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 2147483647)) ? (arr_6 [i_1]) : (((/* implicit */long long int) 1967219780)))) - (((9223372036854775807LL) + (((/* implicit */long long int) -1323722682))))));
        arr_16 [(unsigned char)12] = ((/* implicit */unsigned char) var_4);
    }
    for (unsigned char i_3 = 2; i_3 < 12; i_3 += 4) 
    {
        /* LoopSeq 4 */
        for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            arr_21 [i_3] = arr_1 [i_3];
            arr_22 [i_3 - 2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775807LL)) ? (9223372036854775807LL) : (5218108409069577283LL)))) ? (var_9) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)110)) : (((/* implicit */int) arr_5 [i_3] [14]))))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_5)))))))));
        }
        /* vectorizable */
        for (unsigned char i_5 = 0; i_5 < 14; i_5 += 4) /* same iter space */
        {
            arr_27 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_3] [i_5])) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_8 [i_3])))) : ((-(arr_20 [i_3] [i_3])))));
            /* LoopSeq 4 */
            for (unsigned int i_6 = 1; i_6 < 12; i_6 += 2) 
            {
                arr_31 [i_6] = ((((/* implicit */_Bool) arr_19 [i_3 + 1] [i_3 + 2] [i_6 + 2])) ? (var_9) : (((/* implicit */long long int) 2147483647)));
                arr_32 [i_3] [i_3] [i_3] = ((var_5) + (arr_25 [i_6 - 1] [i_6] [i_6]));
            }
            for (long long int i_7 = 0; i_7 < 14; i_7 += 2) 
            {
                arr_36 [i_3] [i_5] [i_7] [10LL] = ((var_5) << (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))));
                arr_37 [i_3 - 1] [i_3 - 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11))));
                arr_38 [i_5] [i_5] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) arr_20 [i_5] [i_7])) : (var_3))) >> (((arr_10 [i_3 - 1] [4U]) - (7430457633754160974LL)))));
            }
            for (unsigned char i_8 = 0; i_8 < 14; i_8 += 2) 
            {
                arr_41 [i_3] [i_3] [i_8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)42346))));
                arr_42 [i_3] [i_5] [i_8] [i_3] = ((((((/* implicit */_Bool) (-2147483647 - 1))) || (((/* implicit */_Bool) 3805016116U)))) ? (((((/* implicit */_Bool) var_10)) ? (6754950059167378402LL) : (var_9))) : (-8476120061249036362LL));
            }
            for (unsigned int i_9 = 2; i_9 < 13; i_9 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 14; i_10 += 1) 
                {
                    for (signed char i_11 = 3; i_11 < 12; i_11 += 2) 
                    {
                        {
                            arr_51 [i_3] [i_5] [i_9] [i_10] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (var_1) : (var_8)));
                            arr_52 [i_3] [i_5] [i_5] [i_10] [i_11] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_3])) << (((var_10) - (157244925400764242LL))))))));
                        }
                    } 
                } 
                arr_53 [i_9 + 1] = ((/* implicit */unsigned char) arr_18 [i_3]);
                /* LoopSeq 3 */
                for (long long int i_12 = 0; i_12 < 14; i_12 += 2) 
                {
                    arr_56 [i_3] [7] [i_9] = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)-99))));
                    arr_57 [i_3 + 1] [i_5] [i_5] [i_12] [i_12] = ((/* implicit */unsigned short) ((signed char) 25LL));
                    arr_58 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((var_1) / (var_5)));
                }
                for (signed char i_13 = 0; i_13 < 14; i_13 += 4) 
                {
                    arr_63 [i_3] [i_3] [i_3] [i_9] [i_3] [i_13] = ((/* implicit */unsigned char) var_11);
                    arr_64 [i_3] [i_3] [i_9] [i_13] [i_5] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_9]))) : (var_10)))) ? (((((/* implicit */long long int) ((/* implicit */int) var_6))) / (var_8))) : (((/* implicit */long long int) (-(var_7))))));
                    arr_65 [i_3] [i_5] [i_9] [i_13] = ((/* implicit */unsigned int) var_3);
                    arr_66 [5LL] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((var_5) == (var_1))))) % (var_1)));
                }
                for (long long int i_14 = 0; i_14 < 14; i_14 += 4) 
                {
                    arr_69 [i_3] [i_14] [i_14] [i_3] = ((/* implicit */signed char) ((long long int) var_3));
                    arr_70 [i_5] [i_5] = ((/* implicit */unsigned char) ((((-3050060467861353785LL) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned short)17)) - (17)))));
                }
            }
            arr_71 [i_3] = ((/* implicit */signed char) ((unsigned short) (signed char)-123));
        }
        /* vectorizable */
        for (unsigned char i_15 = 0; i_15 < 14; i_15 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_16 = 0; i_16 < 14; i_16 += 2) 
            {
                arr_78 [i_16] [i_15] [i_3] &= var_2;
                /* LoopNest 2 */
                for (unsigned short i_17 = 0; i_17 < 14; i_17 += 4) 
                {
                    for (unsigned char i_18 = 0; i_18 < 14; i_18 += 4) 
                    {
                        {
                            arr_85 [i_3] [7U] [i_16] [i_16] [i_3] [i_17] [i_18] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */long long int) var_7)))))));
                            arr_86 [i_3] [i_15] [i_3] [i_16] [i_17] [i_16] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)16384)) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)127)) * (((/* implicit */int) (signed char)-110))))) : (((((/* implicit */_Bool) -9223372036854775802LL)) ? (9223372036854775807LL) : (var_9)))));
                        }
                    } 
                } 
                arr_87 [i_16] = ((/* implicit */long long int) (-(((/* implicit */int) arr_82 [i_3 + 2] [i_3 - 1] [i_3] [i_3 + 2] [i_3]))));
                arr_88 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) (-(((((/* implicit */long long int) ((/* implicit */int) var_0))) % (arr_68 [i_3] [i_15] [i_16] [i_16] [i_15] [i_15])))));
                arr_89 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-111))) : (4232634797U)));
            }
            arr_90 [i_3] [i_3] = arr_81 [i_15] [i_15] [i_3 + 1] [i_15] [9LL] [i_3 + 1];
            /* LoopSeq 3 */
            for (signed char i_19 = 0; i_19 < 14; i_19 += 2) 
            {
                arr_94 [i_3] [i_3] [i_19] = ((/* implicit */unsigned char) ((arr_73 [i_19]) & (((/* implicit */long long int) ((/* implicit */int) var_11)))));
                arr_95 [i_3] [i_15] [i_19] = ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) arr_67 [i_3] [i_15] [i_19])) : (var_8));
            }
            for (signed char i_20 = 0; i_20 < 14; i_20 += 1) 
            {
                arr_98 [i_20] [i_20] = ((/* implicit */long long int) ((int) var_5));
                arr_99 [i_3] [i_20] [i_20] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)122))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (var_2)));
            }
            for (long long int i_21 = 2; i_21 < 13; i_21 += 3) 
            {
                arr_103 [i_21] [i_3] [i_21] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((long long int) (-2147483647 - 1))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 8796059467776LL))))));
                arr_104 [(unsigned char)0] [i_15] [i_21] = ((/* implicit */long long int) (!(((var_10) == (var_2)))));
                arr_105 [i_3] [i_21] [i_21] = ((/* implicit */long long int) var_11);
            }
        }
        for (unsigned char i_22 = 0; i_22 < 14; i_22 += 4) /* same iter space */
        {
            arr_109 [i_22] [i_3] [i_3] &= ((((/* implicit */_Bool) (~(arr_106 [i_3 - 2])))) ? (((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */long long int) arr_30 [i_3] [i_22] [i_22])))) : (((/* implicit */long long int) ((/* implicit */int) var_6))));
            arr_110 [i_3 - 2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_10) : (var_3)))) ? (min((((/* implicit */long long int) arr_79 [i_22] [i_22] [i_22] [11LL] [i_3])), (var_2))) : (min((((/* implicit */long long int) -1993435210)), (-8290216546316525008LL)))))));
            arr_111 [i_3] [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) ((min((72057594037862400LL), (((/* implicit */long long int) var_4)))) == (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_9)))))))));
        }
        arr_112 [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) min((((/* implicit */long long int) var_0)), (var_1)))))));
    }
}
