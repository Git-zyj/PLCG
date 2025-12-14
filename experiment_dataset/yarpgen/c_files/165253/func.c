/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165253
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(var_10)))) < (((unsigned int) 4258694412U))));
    var_13 *= ((/* implicit */unsigned long long int) var_2);
    var_14 += ((/* implicit */signed char) var_10);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 13; i_2 += 3) 
                {
                    for (signed char i_3 = 2; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */int) (((~(var_11))) > (((/* implicit */long long int) (~(((/* implicit */int) var_1)))))));
                            var_16 ^= ((/* implicit */signed char) 1810645642U);
                            var_17 = ((/* implicit */_Bool) var_5);
                            arr_8 [i_0 - 2] [i_3] = ((/* implicit */unsigned char) ((short) var_1));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) != (max((((/* implicit */long long int) max((1810645642U), (((/* implicit */unsigned int) var_9))))), (var_8)))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_4] [i_4] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((((/* implicit */int) var_4)) + (2147483647))) >> (((/* implicit */int) var_9))))) & (((var_8) & (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
                                var_18 = ((/* implicit */_Bool) ((((var_0) / (((/* implicit */int) (signed char)45)))) ^ (((((/* implicit */int) var_5)) + (var_2)))));
                                var_19 = max(((!(((/* implicit */_Bool) 2484321653U)))), (((_Bool) var_3)));
                                var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_2)) | (((((/* implicit */unsigned long long int) var_11)) & (15892448746692298832ULL)))));
                            }
                        } 
                    } 
                    var_21 = ((_Bool) (+(((/* implicit */int) var_7))));
                    var_22 *= ((/* implicit */short) var_7);
                }
                /* LoopSeq 3 */
                for (int i_7 = 0; i_7 < 17; i_7 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_8 = 1; i_8 < 16; i_8 += 2) 
                    {
                        for (unsigned int i_9 = 1; i_9 < 15; i_9 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (-(((/* implicit */int) var_4))))) & (min((var_11), (((/* implicit */long long int) var_7))))));
                                arr_25 [i_0] [i_0 + 1] [i_0] [i_8] = ((/* implicit */signed char) (~((~(var_11)))));
                                var_24 = ((/* implicit */unsigned short) (-(((((var_0) + (2147483647))) >> (((((/* implicit */int) var_5)) - (191)))))));
                                var_25 = ((/* implicit */unsigned short) var_2);
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) 15892448746692298833ULL))))), ((-(((/* implicit */int) ((unsigned char) (signed char)119))))))))));
                    var_27 = ((/* implicit */unsigned char) ((2554295327017252777ULL) | (((2554295327017252782ULL) & (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_4)) + (2147483647))) >> (((var_8) - (1616321843686558085LL))))))))));
                    var_28 *= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) var_2)) || (((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (unsigned char)25)))))));
                    arr_26 [i_7] [i_1] [i_7] = ((/* implicit */unsigned int) min((((var_6) & (((/* implicit */int) var_5)))), (max((((/* implicit */int) (_Bool)0)), (var_0)))));
                }
                /* vectorizable */
                for (long long int i_10 = 0; i_10 < 17; i_10 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 17; i_11 += 1) 
                    {
                        for (short i_12 = 0; i_12 < 17; i_12 += 3) 
                        {
                            {
                                arr_33 [i_10] = ((/* implicit */unsigned int) var_7);
                                arr_34 [(signed char)1] [5LL] [i_1] [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) var_7))) % ((-(((/* implicit */int) var_4))))));
                                var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) var_1))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_13 = 0; i_13 < 17; i_13 += 3) 
                    {
                        for (unsigned long long int i_14 = 2; i_14 < 15; i_14 += 3) 
                        {
                            {
                                var_30 = ((/* implicit */signed char) (!(var_3)));
                                var_31 = ((/* implicit */int) var_7);
                                var_32 = ((/* implicit */signed char) (~(((/* implicit */int) var_5))));
                                arr_42 [i_10] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) 1952855829))));
                                arr_43 [(unsigned char)4] [i_10] [i_10] [(unsigned short)6] [i_14] = ((/* implicit */signed char) ((int) var_11));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned char) (!(var_3)));
                        var_34 = ((/* implicit */int) var_7);
                        /* LoopSeq 4 */
                        for (signed char i_16 = 0; i_16 < 17; i_16 += 3) 
                        {
                            var_35 += ((/* implicit */unsigned int) ((var_8) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            var_36 = ((/* implicit */unsigned long long int) (~(7)));
                            var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) var_3))) - (var_6))))));
                            var_38 = ((/* implicit */signed char) (-(((/* implicit */int) var_1))));
                            var_39 = ((/* implicit */_Bool) (+(15892448746692298810ULL)));
                        }
                        for (signed char i_17 = 0; i_17 < 17; i_17 += 3) /* same iter space */
                        {
                            arr_54 [i_1] [i_1] [(signed char)11] [i_1] [i_10] = (~(var_10));
                            var_40 = ((/* implicit */_Bool) (-(((/* implicit */int) var_9))));
                        }
                        for (signed char i_18 = 0; i_18 < 17; i_18 += 3) /* same iter space */
                        {
                            arr_59 [6ULL] [6ULL] [6ULL] [i_0] [6ULL] &= ((/* implicit */unsigned char) ((7293308289747154422ULL) & (7293308289747154422ULL)));
                            arr_60 [(unsigned char)5] [(short)2] [(short)2] [i_1] [3] [i_1] [i_10] = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)0))));
                            var_41 = ((/* implicit */unsigned long long int) max((var_41), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 15892448746692298832ULL)))))));
                        }
                        for (long long int i_19 = 2; i_19 < 14; i_19 += 1) 
                        {
                            var_42 = ((/* implicit */unsigned short) ((unsigned long long int) (signed char)8));
                            var_43 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 11153435783962397205ULL))));
                            var_44 = ((/* implicit */unsigned char) max((var_44), (((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)94)))))));
                            arr_64 [i_10] [i_19] [i_10] [i_19 + 2] [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) < ((-(268435392U)))));
                        }
                        var_45 *= ((/* implicit */signed char) (-(var_8)));
                    }
                    for (short i_20 = 4; i_20 < 15; i_20 += 4) 
                    {
                        var_46 = ((/* implicit */unsigned char) max((var_46), (((/* implicit */unsigned char) ((-2002687403) <= (var_2))))));
                        arr_67 [i_0] [i_10] = (!(((/* implicit */_Bool) var_9)));
                        var_47 ^= ((/* implicit */short) ((((/* implicit */int) var_1)) & (var_2)));
                        var_48 = ((/* implicit */unsigned short) ((unsigned int) var_8));
                    }
                    for (unsigned char i_21 = 3; i_21 < 16; i_21 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_22 = 2; i_22 < 16; i_22 += 2) 
                        {
                            var_49 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) ((var_0) ^ (1952855837))))));
                            arr_73 [(unsigned short)4] [i_10] [(unsigned short)4] [(unsigned char)1] [7U] [(unsigned short)4] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(var_2))))));
                        }
                        for (unsigned int i_23 = 0; i_23 < 17; i_23 += 4) 
                        {
                            var_50 ^= ((/* implicit */_Bool) (~(576460752303423487LL)));
                            var_51 = ((/* implicit */unsigned int) var_3);
                            var_52 += (+(((/* implicit */int) var_4)));
                            var_53 = ((/* implicit */_Bool) ((((/* implicit */int) var_9)) - (-1952855830)));
                            var_54 += ((15892448746692298839ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))));
                        }
                        var_55 = ((/* implicit */unsigned int) max((var_55), (((/* implicit */unsigned int) var_0))));
                        /* LoopSeq 1 */
                        for (unsigned char i_24 = 0; i_24 < 17; i_24 += 4) 
                        {
                            var_56 = ((/* implicit */unsigned long long int) max((var_56), (((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) 15892448746692298833ULL)))))))));
                            arr_78 [i_10] [i_1] = ((/* implicit */unsigned int) (+((-(((/* implicit */int) var_3))))));
                        }
                    }
                }
                for (unsigned char i_25 = 1; i_25 < 16; i_25 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_26 = 4; i_26 < 15; i_26 += 1) 
                    {
                        for (signed char i_27 = 0; i_27 < 17; i_27 += 4) 
                        {
                            {
                                var_57 = ((/* implicit */signed char) var_8);
                                var_58 |= ((/* implicit */unsigned short) max((((/* implicit */int) var_5)), (var_6)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_28 = 1; i_28 < 15; i_28 += 4) 
                    {
                        for (short i_29 = 0; i_29 < 17; i_29 += 1) 
                        {
                            {
                                var_59 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_10)))) || (((/* implicit */_Bool) (~(((/* implicit */int) var_4)))))));
                                var_60 = 11354630867206786122ULL;
                            }
                        } 
                    } 
                    var_61 = ((/* implicit */unsigned int) (~(((/* implicit */int) min((((/* implicit */unsigned char) var_1)), (var_5))))));
                    var_62 = (short)-30046;
                }
            }
        } 
    } 
}
