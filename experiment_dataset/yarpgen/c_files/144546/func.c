/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144546
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
    var_10 = ((/* implicit */int) (~((-(var_4)))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    {
                        var_11 = ((((/* implicit */int) (unsigned short)9935)) >> (((((/* implicit */int) (unsigned char)172)) - (169))));
                        var_12 |= ((/* implicit */unsigned short) ((arr_2 [i_1 - 1]) >> (((var_4) - (4070205604U)))));
                    }
                } 
            } 
            var_13 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) -1085144450)) : (arr_4 [i_1] [i_1 - 3] [i_0])));
            /* LoopSeq 1 */
            for (unsigned int i_4 = 2; i_4 < 7; i_4 += 4) 
            {
                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1425123930U)) ^ (17680863468999846317ULL)))) ? (((((/* implicit */int) (unsigned short)55603)) ^ (-1372461875))) : (((((/* implicit */int) var_5)) << (((268369920) - (268369920)))))));
                var_15 -= ((/* implicit */unsigned char) ((arr_2 [i_1 - 3]) << (((arr_2 [i_1 - 2]) - (3740799577U)))));
            }
            arr_15 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 63050394783186944ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)1920))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((765880604709705308ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5816)))))));
            arr_16 [0U] [0U] [i_0] = ((/* implicit */int) arr_13 [6] [6] [i_1] [(unsigned char)6]);
        }
        for (unsigned short i_5 = 2; i_5 < 8; i_5 += 2) 
        {
            /* LoopSeq 2 */
            for (int i_6 = 1; i_6 < 6; i_6 += 4) 
            {
                var_16 &= ((/* implicit */short) min((arr_21 [i_0] [8] [(short)2] [(short)2]), (((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_11 [i_0] [i_0])) << (((arr_20 [i_0]) - (723106166))))), (((/* implicit */int) min((((/* implicit */unsigned short) (short)21174)), ((unsigned short)55473)))))))));
                var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)79)), (var_1)))) ? ((+(var_4))) : (max((((/* implicit */unsigned int) (unsigned char)255)), (237311034U))))) << ((((~(((((-2092626945) + (2147483647))) << (((148977208U) - (148977208U))))))) + (54856728)))));
                /* LoopSeq 1 */
                for (signed char i_7 = 0; i_7 < 10; i_7 += 1) 
                {
                    arr_26 [i_0] [i_5] [i_6] [i_6] [i_6] [i_7] = ((/* implicit */int) var_4);
                    arr_27 [3] [(unsigned char)0] [(unsigned char)0] [i_7] = ((/* implicit */unsigned char) ((((((((/* implicit */int) (unsigned short)39896)) >> (((((/* implicit */int) arr_0 [i_0])) - (22396))))) >> (((((/* implicit */int) min((arr_19 [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) (short)2048))))) - (2030))))) ^ (((/* implicit */int) (short)-3696))));
                    arr_28 [i_7] [i_6] [i_5 - 2] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_13 [i_0] [i_5 + 2] [i_6 + 1] [i_0])) ? (((/* implicit */int) (unsigned short)49870)) : (((/* implicit */int) var_2)))), (((/* implicit */int) var_3))));
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 10; i_8 += 2) 
                {
                    for (unsigned short i_9 = 0; i_9 < 10; i_9 += 4) 
                    {
                        {
                            arr_35 [i_0] [i_0] [i_5 - 1] [i_6] [i_6] [i_0] [i_6] = ((/* implicit */int) (~(max((((/* implicit */unsigned int) arr_29 [i_0] [i_0] [i_5 + 2] [i_6 + 2])), (((((/* implicit */_Bool) arr_7 [i_6] [i_6] [i_6])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_6] [i_8] [i_9])))))))));
                            var_18 += ((/* implicit */signed char) (short)0);
                            arr_36 [i_8] [6LL] [i_8] [i_8] [6LL] [(short)9] = arr_5 [i_0] [i_8] [i_0];
                            arr_37 [i_0] [i_0] [(signed char)4] = (+(((((/* implicit */_Bool) ((7273214519571699544LL) << (((7560410560011073381ULL) - (7560410560011073381ULL)))))) ? (((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_6])) ? (arr_25 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_6] [i_0] [i_0]))) : (var_4))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (short i_10 = 0; i_10 < 10; i_10 += 1) 
            {
                arr_40 [i_0] [i_0] [i_0] [i_0] = (-(arr_32 [(short)5] [(short)5] [(short)5] [i_5 + 1]));
                var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 0LL)) ? (arr_38 [(short)1] [(short)1] [i_10]) : (((/* implicit */unsigned long long int) -8756569140747011633LL)))) ^ (((/* implicit */unsigned long long int) (-(-19))))));
            }
            /* LoopNest 3 */
            for (short i_11 = 0; i_11 < 10; i_11 += 1) 
            {
                for (short i_12 = 0; i_12 < 10; i_12 += 3) 
                {
                    for (unsigned int i_13 = 0; i_13 < 10; i_13 += 3) 
                    {
                        {
                            arr_49 [i_13] [i_12] [(unsigned short)3] [(unsigned short)3] [i_13] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)47034)) ? (((/* implicit */int) arr_41 [i_5 + 2] [i_5 + 2] [i_5 - 1])) : (300554927)))) ? (524160) : (((((/* implicit */_Bool) (short)-7096)) ? (((/* implicit */int) arr_41 [i_5 - 2] [i_5 + 2] [i_5 + 1])) : (((/* implicit */int) var_1))))));
                            arr_50 [i_13] [i_12] = ((/* implicit */unsigned long long int) (-(((arr_45 [i_0] [(short)1] [i_5 - 2] [(short)1] [(short)1]) >> (((arr_45 [(short)4] [i_0] [i_5 + 1] [5U] [i_5 + 2]) - (1800787809)))))));
                            arr_51 [i_0] [i_0] [i_0] [i_13] [0LL] = ((/* implicit */unsigned short) (+(max((((/* implicit */int) var_0)), (arr_31 [i_5 + 1] [i_5 - 1] [i_5 + 1] [i_5 + 2] [7ULL])))));
                        }
                    } 
                } 
            } 
        }
        /* LoopNest 2 */
        for (long long int i_14 = 1; i_14 < 9; i_14 += 4) 
        {
            for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_16 = 3; i_16 < 9; i_16 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) << (((/* implicit */int) arr_10 [5LL] [5LL] [i_14 + 1] [i_15]))));
                        arr_61 [i_14] [4] [i_15] [i_16] = ((/* implicit */unsigned char) ((((((var_8) - (((/* implicit */int) (unsigned short)39896)))) + (2147483647))) << (((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50385))) : (877943407U))) - (50385U)))));
                    }
                    for (unsigned short i_17 = 0; i_17 < 10; i_17 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_18 = 0; i_18 < 10; i_18 += 3) 
                        {
                            var_21 -= ((/* implicit */unsigned char) var_9);
                            var_22 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_14 - 1]))))));
                        }
                        arr_69 [i_14] [i_0] [i_0] [i_0] [i_0] [7ULL] = ((/* implicit */int) min((11453023378123000094ULL), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)-29556)), (min((((/* implicit */unsigned int) arr_54 [(unsigned short)7] [(unsigned short)7] [i_15])), (6U))))))));
                        arr_70 [i_0] [0LL] [i_15] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_6 [i_0] [i_14 + 1] [i_17]), (arr_6 [i_0] [i_0] [i_15])))) ? (-5388989236709772368LL) : (((/* implicit */long long int) ((((min((-1396872603), (((/* implicit */int) var_0)))) + (2147483647))) >> (((10603699159487940574ULL) - (10603699159487940571ULL))))))));
                        arr_71 [i_0] [(unsigned short)6] [i_14] [(unsigned short)2] = ((/* implicit */short) max((min((((/* implicit */int) arr_3 [i_14 - 1] [i_14 + 1])), (min((((/* implicit */int) arr_23 [i_0] [(short)7] [6U] [i_14 - 1] [i_0] [i_17])), (arr_45 [i_0] [i_0] [i_15] [i_17] [i_17]))))), (((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (402653184) : (-1))) ^ (((/* implicit */int) arr_60 [i_0] [i_0] [i_15] [i_14 - 1] [i_0] [i_14]))))));
                        arr_72 [i_14] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (max((((unsigned long long int) arr_19 [i_0] [i_0] [i_0])), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_41 [i_0] [i_0] [i_17])), (var_8)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_59 [i_14])) ? (252) : (((/* implicit */int) arr_59 [i_14])))))));
                    }
                    for (int i_19 = 0; i_19 < 10; i_19 += 1) 
                    {
                        arr_76 [2U] [i_14] [(short)4] = ((/* implicit */unsigned int) ((((((/* implicit */int) (short)-32762)) + (2147483647))) >> (((((/* implicit */int) arr_7 [8U] [i_14 + 1] [i_14 + 1])) - (56477)))));
                        arr_77 [i_15] [i_14] [i_14] [i_19] = ((/* implicit */unsigned int) (~(((((var_8) + (2147483647))) >> (((((/* implicit */int) arr_23 [i_0] [(short)2] [i_0] [i_0] [(short)2] [i_0])) + (91)))))));
                        var_23 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_14 + 1] [i_0])), (arr_4 [i_14 + 1] [5] [i_15])))) ? (min((((/* implicit */int) (short)-2048)), ((~(((/* implicit */int) var_3)))))) : (((/* implicit */int) (short)27932))));
                    }
                    /* LoopNest 2 */
                    for (short i_20 = 3; i_20 < 8; i_20 += 3) 
                    {
                        for (unsigned char i_21 = 0; i_21 < 10; i_21 += 2) 
                        {
                            {
                                arr_85 [i_14] [(short)0] [i_15] [i_20] = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_5 [i_14 - 1] [i_14 - 1] [i_14 - 1])) ^ (((/* implicit */int) arr_24 [i_14 - 1] [i_20 + 1])))), (((((/* implicit */_Bool) arr_65 [i_14 - 1] [i_14] [(unsigned short)4] [i_20] [(short)6] [(short)6] [i_20])) ? (max((((/* implicit */int) var_1)), (var_8))) : (((/* implicit */int) var_9))))));
                                var_24 += ((/* implicit */unsigned char) max(((-(((/* implicit */int) arr_58 [i_14 - 1] [i_14] [i_0] [i_0] [i_0])))), (((/* implicit */int) var_9))));
                                arr_86 [i_21] [i_14 - 1] [i_21] [i_21] [6U] [i_21] |= ((/* implicit */short) ((((/* implicit */int) arr_22 [i_14 - 1] [i_20 - 1])) << (((((/* implicit */int) arr_22 [i_14 - 1] [i_20 - 1])) - (((/* implicit */int) arr_22 [i_14 - 1] [i_20 - 1]))))));
                            }
                        } 
                    } 
                    var_25 = min(((-(((((/* implicit */_Bool) arr_53 [i_0])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_2)))))), ((~(((/* implicit */int) (short)11992)))));
                }
            } 
        } 
        arr_87 [i_0] = ((/* implicit */unsigned int) ((int) arr_30 [i_0] [6LL] [i_0] [6LL] [7]));
    }
    /* LoopNest 2 */
    for (unsigned short i_22 = 0; i_22 < 14; i_22 += 2) 
    {
        for (unsigned short i_23 = 0; i_23 < 14; i_23 += 3) 
        {
            {
                arr_95 [i_22] [i_23] |= ((/* implicit */short) arr_93 [i_22] [(unsigned short)0]);
                var_26 *= ((/* implicit */short) ((((/* implicit */int) ((short) ((((/* implicit */int) (unsigned short)32767)) << (((4294967292U) - (4294967282U))))))) ^ (((((/* implicit */int) max((((/* implicit */unsigned short) (short)-19)), ((unsigned short)24631)))) << (((((/* implicit */int) arr_91 [i_22] [i_23])) - (162)))))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_5)))) ^ (((/* implicit */int) var_0))))) ? (((((/* implicit */int) var_2)) << (((-10) + (14))))) : ((~(((/* implicit */int) max((var_1), (var_0))))))));
}
