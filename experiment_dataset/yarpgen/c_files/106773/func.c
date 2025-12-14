/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106773
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
    var_10 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)16333))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_7)))) || (((/* implicit */_Bool) ((int) arr_1 [i_1 - 1] [i_1 - 1])))));
                    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) var_3))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((var_9) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
    var_14 *= ((/* implicit */unsigned int) var_3);
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    for (long long int i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                            {
                                arr_20 [i_4] [i_6] [i_4] = ((/* implicit */_Bool) var_1);
                                var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) min(((unsigned short)16333), ((unsigned short)49833)))))) < (((((/* implicit */_Bool) arr_16 [i_7] [i_4] [i_4] [i_3])) ? (arr_16 [i_3] [i_4] [i_6] [i_7]) : (arr_0 [i_4])))));
                                var_16 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)49833))) < (arr_9 [(unsigned short)6])));
                                arr_21 [i_3] [2] [2] [i_3] [(signed char)4] |= ((/* implicit */unsigned int) min(((unsigned short)15708), (((/* implicit */unsigned short) (_Bool)1))));
                                arr_22 [i_3] [(_Bool)1] [i_3] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_16 [i_3] [i_4] [i_6] [i_6]), (arr_16 [i_3] [i_4] [i_6] [(short)0]))))));
                            }
                            var_17 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-29))) : (1646784809U)))) ? (var_7) : (8874883875222374942LL)));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_8 = 0; i_8 < 10; i_8 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_9 = 1; i_9 < 9; i_9 += 3) 
                    {
                        for (signed char i_10 = 2; i_10 < 6; i_10 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) max((((((/* implicit */_Bool) 241520719)) ? (arr_29 [i_8] [i_10 + 1] [i_10 + 2] [i_10] [i_10] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49201))))), (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)15708)), (arr_19 [i_10] [4LL] [i_10 + 2] [(signed char)6] [i_10])))))))));
                                var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)66)) : (((/* implicit */int) arr_7 [i_9] [i_10 + 1])))) < ((-(((/* implicit */int) arr_2 [i_9 - 1]))))));
                                var_20 &= ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_28 [i_3] [(short)8] [i_8] [i_9] [i_10])) : (((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) (signed char)-29))))))) || (((/* implicit */_Bool) max((((/* implicit */long long int) max((1187416342), (((/* implicit */int) (_Bool)1))))), (arr_23 [8ULL] [8ULL] [i_3] [i_10 - 2]))))));
                                arr_31 [i_3] [i_3] [i_3] [i_3] [i_3] [i_4] = ((/* implicit */unsigned int) (!((!((_Bool)1)))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_11 = 3; i_11 < 7; i_11 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 3) /* same iter space */
                        {
                            arr_39 [i_11 + 1] [i_4] [i_11] [i_11 - 2] [(unsigned char)7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_32 [i_12] [i_11] [i_8] [i_4] [i_4] [i_3]))));
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)15708)))))))))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 3) /* same iter space */
                        {
                            var_22 ^= ((/* implicit */unsigned int) (signed char)28);
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_11 - 2] [i_13])) ? (((/* implicit */unsigned int) arr_19 [i_4] [i_4] [i_11 - 3] [i_11] [i_13])) : (arr_37 [i_4] [i_11 + 3])));
                        }
                        for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 3) /* same iter space */
                        {
                            arr_45 [i_3] [i_4] [i_8] [i_11] [i_4] [i_14] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(1187416342)))))))) % (min((507904U), (arr_0 [i_4])))));
                            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)43684)), (var_0)))))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_15 = 0; i_15 < 10; i_15 += 3) 
                        {
                            arr_50 [i_4] [i_11] [i_11] [i_4] [i_4] [i_4] = ((/* implicit */short) arr_46 [9LL] [i_4] [i_8] [i_4] [i_4]);
                            arr_51 [i_3] [5LL] [i_3] [i_3] [i_4] = ((/* implicit */signed char) (+((-(4294967295U)))));
                        }
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (long long int i_16 = 0; i_16 < 10; i_16 += 3) /* same iter space */
                        {
                            var_25 = ((/* implicit */_Bool) ((((2066868804U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_3] [i_11]))))) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49824)))));
                            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4171341745U)) ? (((0U) - (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39037)))));
                        }
                        for (long long int i_17 = 0; i_17 < 10; i_17 += 3) /* same iter space */
                        {
                            arr_57 [i_4] [i_11 + 1] [i_4] [i_11 + 1] [i_11 + 1] [i_11] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_15 [i_4] [i_4] [i_8]))));
                            var_27 |= ((/* implicit */signed char) (+((~(((arr_12 [i_3] [i_3] [i_8]) ? (var_9) : (((/* implicit */int) (signed char)48))))))));
                        }
                        for (long long int i_18 = 0; i_18 < 10; i_18 += 3) /* same iter space */
                        {
                            var_28 = arr_55 [i_3] [i_3] [i_3] [i_8] [i_8] [i_11] [i_18];
                            var_29 += ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)37594))));
                        }
                        for (long long int i_19 = 0; i_19 < 10; i_19 += 3) /* same iter space */
                        {
                            var_30 = ((((/* implicit */_Bool) (+(max((177168440U), (((/* implicit */unsigned int) (unsigned short)43660))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_19]))) : (arr_17 [i_8] [i_8] [i_8] [i_8] [i_8]));
                            arr_64 [i_3] [i_4] [i_4] [i_11] [1LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((unsigned short) ((unsigned long long int) (unsigned short)15702))))));
                            var_31 += ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (signed char)-30)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)15702))))));
                        }
                        var_32 += ((/* implicit */unsigned short) min((arr_38 [i_3]), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3] [(signed char)6] [(_Bool)1])))))) <= ((-(3ULL))))))));
                    }
                    var_33 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (754856679U)))) ? (((long long int) arr_10 [i_3])) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_8]))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */short) arr_12 [i_4] [i_4] [i_4])), (var_5)))) ? (((/* implicit */int) arr_47 [i_3] [i_3] [i_3] [(unsigned char)0] [i_4] [4ULL] [i_8])) : (((/* implicit */int) var_3)))))));
                    var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) max((((/* implicit */unsigned int) (((-(((/* implicit */int) (signed char)-54)))) % (((/* implicit */int) arr_34 [(unsigned short)6] [i_4] [i_4] [i_8]))))), (var_6))))));
                }
                /* LoopNest 2 */
                for (long long int i_20 = 0; i_20 < 10; i_20 += 2) 
                {
                    for (signed char i_21 = 1; i_21 < 8; i_21 += 3) 
                    {
                        {
                            var_35 += ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_40 [i_20])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-24))))))))) : (min((((/* implicit */unsigned int) (signed char)99)), (min((arr_6 [i_20]), (((/* implicit */unsigned int) arr_53 [i_21] [i_4] [i_4] [(unsigned char)7]))))))));
                            arr_70 [i_3] [i_4] [i_20] [i_20] [i_20] = ((/* implicit */short) (-(((/* implicit */int) ((short) arr_4 [i_21 - 1])))));
                            var_36 *= ((/* implicit */_Bool) (-(min((-2048LL), (((/* implicit */long long int) (_Bool)1))))));
                            var_37 = ((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) ((((/* implicit */int) arr_43 [i_4] [i_4])) - (((/* implicit */int) (signed char)-84))))))), (((-2048LL) == (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_0))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
