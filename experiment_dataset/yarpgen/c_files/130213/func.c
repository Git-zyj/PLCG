/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130213
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
    var_15 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)0)) && (((/* implicit */_Bool) (short)-28783)))))) | (max((((var_11) << (((((/* implicit */int) var_2)) - (44585))))), (((/* implicit */long long int) ((short) (short)-31536)))))));
    var_16 = ((/* implicit */int) ((unsigned short) var_7));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 2; i_2 < 10; i_2 += 4) 
                {
                    /* LoopSeq 4 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned int) arr_2 [6U]);
                        arr_9 [i_3] [i_3] [i_3] [i_0] = ((/* implicit */signed char) ((_Bool) ((int) ((unsigned short) var_8))));
                        /* LoopSeq 1 */
                        for (int i_4 = 1; i_4 < 12; i_4 += 4) 
                        {
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((unsigned int) arr_2 [i_0])) < (((/* implicit */unsigned int) (-(arr_0 [(signed char)4] [(short)2])))))))));
                            var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) max((((/* implicit */short) arr_3 [i_1] [(unsigned short)7] [8U])), (arr_10 [i_0] [i_0] [(short)12] [i_2 + 2]))))));
                            arr_12 [i_3] [i_3] [i_2] [i_3] [(unsigned short)10] [i_4] = ((/* implicit */short) (_Bool)0);
                            var_20 = ((/* implicit */long long int) ((_Bool) (signed char)25));
                        }
                    }
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 3) 
                        {
                            arr_19 [i_1] [8ULL] [i_2] [i_5] [8] [(short)12] &= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_2 + 2])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) -1254644570))))))))));
                            arr_20 [i_6] [i_1] [i_6] [1U] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_18 [i_5 - 1] [7] [i_2 + 3] [7] [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_2 + 2])) : (((/* implicit */int) arr_5 [i_2 + 2])))) >> (((((/* implicit */int) (short)25880)) - (25851)))));
                        }
                        arr_21 [(short)9] [i_0] [i_2] [(short)9] = ((/* implicit */long long int) arr_2 [i_0]);
                    }
                    for (unsigned int i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        var_21 = ((/* implicit */short) arr_18 [i_0] [12ULL] [i_2] [3] [i_7] [i_7]);
                        arr_24 [i_7] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned int) (((-(((/* implicit */int) arr_16 [1] [i_1] [i_2])))) + (((int) 1338667628))))) - (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)81))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_2])) - (-1004088832)))) : (var_13)))));
                    }
                    for (long long int i_8 = 0; i_8 < 13; i_8 += 2) 
                    {
                        var_22 = ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_8]))))) < (arr_0 [i_2 + 2] [i_2 + 2]))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_15 [i_1] [i_1] [i_2 - 1] [i_2 + 1] [i_2] [i_8] [i_8]))))) : (((((-7158696722587763496LL) | (((/* implicit */long long int) ((/* implicit */int) (short)-3989))))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 66977792)) || (((/* implicit */_Bool) arr_17 [(signed char)0] [0] [i_1] [0] [(_Bool)1])))))))));
                        var_23 *= ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_0] [i_1])) && (((/* implicit */_Bool) (signed char)0))))), (((short) (signed char)-109))))) - ((-(((/* implicit */int) (signed char)-90))))));
                        arr_28 [i_0] [i_1] [(signed char)11] [(unsigned short)0] = ((/* implicit */short) min((((((((/* implicit */long long int) ((/* implicit */int) var_5))) | (var_11))) ^ (((/* implicit */long long int) max((((/* implicit */unsigned int) var_4)), (var_9)))))), (((/* implicit */long long int) ((unsigned short) ((unsigned int) 472796163U))))));
                        arr_29 [i_1] [(short)8] [i_2] [i_8] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) / ((~(arr_22 [i_2 + 1])))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 13; i_9 += 3) 
                    {
                        for (int i_10 = 0; i_10 < 13; i_10 += 3) 
                        {
                            {
                                arr_36 [i_9] [i_1] [i_1] [10U] [3LL] [(unsigned short)4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) && (((/* implicit */_Bool) min((var_11), (((/* implicit */long long int) ((unsigned char) (short)-29234))))))));
                                arr_37 [i_9] [(_Bool)1] [i_2] [i_9] [i_10] = ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_14 [i_0] [i_1] [i_0] [1LL]))))))) >= ((((-(arr_23 [i_0]))) << (((((unsigned long long int) 3822171118U)) - (3822171106ULL))))));
                                arr_38 [i_9] [i_9] = ((/* implicit */unsigned long long int) arr_3 [i_2] [i_2] [i_2]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (unsigned int i_12 = 0; i_12 < 13; i_12 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */short) ((((((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))) % (arr_25 [i_12] [6LL] [(short)4] [i_2] [(unsigned char)10] [i_0]))) % (((/* implicit */long long int) (-(((/* implicit */int) var_6))))))) >> (((/* implicit */int) (_Bool)1))));
                                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_7 [i_2 + 1] [i_11] [i_2]))) ? (min((((/* implicit */int) arr_33 [i_0] [(unsigned short)12] [9ULL] [(unsigned short)3] [i_11] [i_11] [(unsigned short)0])), (((((/* implicit */int) (short)28803)) & (((/* implicit */int) (unsigned char)127)))))) : ((+(((((/* implicit */int) arr_4 [6] [(short)4])) - (((/* implicit */int) (unsigned short)64155))))))));
                                var_26 *= ((/* implicit */signed char) (~(((((/* implicit */unsigned int) -1004088851)) % (arr_32 [i_2] [i_1] [i_2 + 2] [i_2] [i_1] [i_2 - 2])))));
                                var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) arr_17 [i_2 + 3] [i_2 + 1] [i_1] [i_2 - 1] [i_2 - 1]))));
                                var_28 = ((/* implicit */unsigned long long int) arr_35 [i_0] [i_0] [i_2] [9LL] [i_12]);
                            }
                        } 
                    } 
                    arr_43 [(unsigned char)11] [i_1] [(unsigned short)4] = ((/* implicit */signed char) ((unsigned int) 2448272249U));
                }
                for (signed char i_13 = 0; i_13 < 13; i_13 += 4) 
                {
                    arr_47 [i_13] [i_1] [3ULL] = ((/* implicit */short) (+(((/* implicit */int) ((signed char) ((unsigned int) arr_22 [11U]))))));
                    /* LoopNest 2 */
                    for (short i_14 = 0; i_14 < 13; i_14 += 3) 
                    {
                        for (short i_15 = 0; i_15 < 13; i_15 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((int) (~(((((/* implicit */_Bool) arr_1 [i_13])) ? (((/* implicit */int) (unsigned char)230)) : (((/* implicit */int) arr_35 [i_0] [i_1] [(_Bool)1] [i_14] [(short)12]))))))))));
                                var_30 = ((/* implicit */short) ((_Bool) (~(((/* implicit */int) var_2)))));
                            }
                        } 
                    } 
                }
                for (short i_16 = 2; i_16 < 12; i_16 += 3) 
                {
                    arr_56 [0ULL] [i_0] [i_16] [i_16 - 1] = ((/* implicit */short) ((((-1254644570) + (2147483647))) >> (((-821184462281453910LL) + (821184462281453937LL)))));
                    /* LoopNest 2 */
                    for (unsigned int i_17 = 0; i_17 < 13; i_17 += 2) 
                    {
                        for (signed char i_18 = 2; i_18 < 12; i_18 += 4) 
                        {
                            {
                                var_31 = (+(((/* implicit */int) ((unsigned char) arr_54 [i_1] [(unsigned short)3] [(unsigned short)3]))));
                                var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) arr_2 [i_1]))));
                                arr_64 [i_17] [(_Bool)1] [(_Bool)1] [i_17] [i_17] = arr_42 [(short)6];
                                arr_65 [i_0] [(unsigned short)1] [i_0] [i_0] = ((/* implicit */unsigned char) ((_Bool) (-(((/* implicit */int) arr_4 [i_16 - 1] [i_18 - 1])))));
                            }
                        } 
                    } 
                }
                var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) (~(((/* implicit */int) (signed char)89)))))));
                var_34 -= ((/* implicit */signed char) arr_41 [(short)1]);
            }
        } 
    } 
}
