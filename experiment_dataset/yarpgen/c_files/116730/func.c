/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116730
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
    var_16 = ((/* implicit */unsigned long long int) (+(max((((/* implicit */unsigned int) var_4)), (min((((/* implicit */unsigned int) var_2)), (var_8)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                arr_4 [3U] [i_0] [i_1 + 1] = ((/* implicit */unsigned short) min((arr_3 [i_0] [i_0]), (((((/* implicit */int) arr_1 [i_1])) + (((((/* implicit */int) var_12)) & (((/* implicit */int) arr_2 [4U] [i_1] [i_1]))))))));
                /* LoopSeq 4 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        var_17 += ((/* implicit */unsigned int) (+((-(((/* implicit */int) var_12))))));
                        var_18 *= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1 + 1] [i_1 - 1] [i_0 + 2]))) <= (((long long int) arr_0 [i_3] [i_3]))));
                        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) var_15))));
                    }
                    arr_11 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_1 - 1] [i_2] [i_1 - 1]))))) ? (((((/* implicit */int) arr_7 [i_2] [i_1 + 1] [i_1 + 1])) - (((/* implicit */int) arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_1 - 1])))))));
                }
                for (long long int i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        arr_17 [i_0] [i_1] [(_Bool)1] [i_0] [i_1] [i_1] = ((/* implicit */signed char) (-(min((9223372036854775807LL), (((/* implicit */long long int) max(((unsigned char)248), (((/* implicit */unsigned char) (_Bool)1)))))))));
                        var_20 = ((/* implicit */unsigned short) var_12);
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 4; i_6 < 10; i_6 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) (~(min((((((/* implicit */int) arr_20 [i_0 - 1] [i_0 - 1] [i_0 - 1] [12U] [i_6] [i_0 - 1] [i_1])) / (arr_3 [i_0 - 1] [i_0]))), (((/* implicit */int) arr_6 [i_0 - 3] [i_1 + 1] [i_6 + 3]))))));
                            var_22 = ((((/* implicit */int) min((arr_7 [i_0 - 3] [i_1 + 1] [i_6 - 2]), (arr_7 [i_0 - 1] [i_1 - 1] [i_6 + 3])))) + (((/* implicit */int) arr_7 [i_0 + 1] [i_1 + 1] [i_6 - 4])));
                        }
                    }
                    var_23 |= ((/* implicit */unsigned short) min((((((/* implicit */unsigned int) ((var_2) / (arr_12 [i_1 + 1])))) / (var_8))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((var_0) + (2147483647))) << (((var_3) - (4256458185U)))))) ? (arr_19 [i_1 + 1] [i_1] [i_0 + 1] [i_4] [i_4] [i_4] [(signed char)1]) : (((/* implicit */int) arr_1 [i_0 - 2])))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_7 = 0; i_7 < 13; i_7 += 3) /* same iter space */
                    {
                        arr_23 [i_0] [(unsigned short)4] [i_0] [(_Bool)1] &= ((/* implicit */short) arr_0 [(_Bool)0] [i_0 - 3]);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                        {
                            var_24 = ((/* implicit */int) ((((/* implicit */int) arr_25 [i_1 + 1] [i_8 + 1] [i_8 + 1] [i_1 + 1] [i_0 - 2])) == (((/* implicit */int) var_15))));
                            arr_26 [i_8] [i_7] [i_0] [i_0] [i_4] [i_1] [i_0] = ((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) 8388608U)) * (10698708249014918192ULL))));
                            var_25 += ((/* implicit */unsigned int) var_11);
                        }
                        arr_27 [i_0 - 1] [i_1] [i_4] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_3), (3816350490U)))) ? (arr_12 [i_0 + 2]) : (((((/* implicit */int) var_12)) | (var_4)))))) | (min((((/* implicit */unsigned int) var_1)), (2707152608U)))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 13; i_9 += 3) /* same iter space */
                    {
                        arr_30 [i_0 - 2] [i_0] [i_0] [i_9] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((8388589U), (((/* implicit */unsigned int) 1054608383))))) ? (arr_12 [i_9]) : (((((/* implicit */int) arr_5 [i_9] [i_4] [i_0 + 2])) % (((/* implicit */int) (unsigned char)195)))))), ((+(((/* implicit */int) arr_10 [2U] [i_1 - 1] [i_1 - 1]))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_10 = 1; i_10 < 9; i_10 += 4) 
                        {
                            var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0 - 3] [i_1 - 1] [i_10 - 1])) ? (280539904U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0 - 2] [i_1 + 1] [i_10 + 3]))))))));
                            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) arr_10 [i_10] [i_9] [i_1]))));
                            var_28 = ((/* implicit */int) 4286578706U);
                            arr_34 [i_0 - 2] [i_0 - 2] [i_0] [i_1 - 1] [i_0 - 2] = ((/* implicit */signed char) min((max((((/* implicit */int) (signed char)127)), ((+(-1701767154))))), (((/* implicit */int) min((((arr_18 [i_0 - 2] [i_0 - 2] [i_0] [i_9] [i_10]) == (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_10] [i_9] [i_0]))))), (((var_8) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))))))))));
                            var_29 = ((/* implicit */unsigned long long int) ((unsigned short) (short)28582));
                        }
                        for (unsigned short i_11 = 1; i_11 < 11; i_11 += 1) 
                        {
                            arr_38 [i_0] [3U] [i_0] [i_9] [i_0] [i_4] = ((/* implicit */long long int) max((arr_21 [i_0 - 2] [i_1] [i_1 + 1]), (((var_1) & (arr_21 [i_0 - 2] [i_0 + 2] [i_1 + 1])))));
                            arr_39 [i_4] [i_4] [i_4] [i_0] [(_Bool)1] = ((/* implicit */short) ((768U) < (((/* implicit */unsigned int) ((/* implicit */int) (short)-13125)))));
                        }
                        arr_40 [i_9] [i_0] [i_0] [i_1 - 1] [i_0] [i_0] = ((/* implicit */unsigned short) max((((((unsigned long long int) var_12)) << ((((~(((/* implicit */int) (unsigned short)55218)))) + (55280))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) var_6)) >> (((((/* implicit */int) (unsigned short)65518)) - (65493))))) : (((/* implicit */int) (short)-13125)))))));
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 13; i_12 += 4) 
                    {
                        for (unsigned short i_13 = 0; i_13 < 13; i_13 += 4) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_6 [i_1 + 1] [i_1 - 1] [i_1 + 1])) & (((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 1] [i_1 + 1]))))));
                                arr_46 [i_13] [i_0] [i_12] [i_4] [i_0] [i_0] = ((/* implicit */_Bool) ((arr_12 [i_1]) / ((+(((/* implicit */int) ((arr_21 [i_1] [i_12] [i_13]) <= (var_1))))))));
                                arr_47 [i_0] [i_12] [i_4] [i_0 - 1] [i_0 - 1] [i_0] = ((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_12]);
                            }
                        } 
                    } 
                }
                for (unsigned char i_14 = 0; i_14 < 13; i_14 += 3) 
                {
                    arr_50 [i_0] [i_0] = ((/* implicit */unsigned int) var_4);
                    /* LoopNest 2 */
                    for (int i_15 = 1; i_15 < 12; i_15 += 4) 
                    {
                        for (unsigned short i_16 = 0; i_16 < 13; i_16 += 3) 
                        {
                            {
                                arr_55 [i_0] [i_1] [i_0] [9] [7] = ((/* implicit */unsigned char) ((((-336004714) | (arr_21 [i_1 + 1] [i_0 - 2] [i_0 - 3]))) / (((/* implicit */int) ((signed char) var_15)))));
                                arr_56 [(unsigned short)8] [i_15] [i_14] [i_1 - 1] [(unsigned short)8] |= ((/* implicit */int) arr_9 [i_0] [(unsigned char)7] [i_0]);
                                var_31 ^= ((/* implicit */int) ((7667390317597412138ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)50)))));
                                var_32 = ((/* implicit */_Bool) max((((((/* implicit */int) arr_44 [i_0] [i_0 + 2] [i_0] [i_0 - 1])) >> (((/* implicit */int) ((((/* implicit */int) arr_48 [i_0] [i_1])) < (((/* implicit */int) arr_48 [i_0] [i_0]))))))), (((arr_37 [i_0] [i_1] [(short)5] [(_Bool)1] [i_14] [i_0] [(unsigned char)12]) + (((((/* implicit */int) arr_9 [i_0] [i_1 + 1] [i_0])) << (((((/* implicit */int) (unsigned short)54182)) - (54171)))))))));
                                var_33 = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_25 [i_0 + 2] [i_0 + 2] [0] [i_0 - 1] [i_0 + 2])))) <= (((/* implicit */int) (signed char)2))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (int i_17 = 0; i_17 < 13; i_17 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_18 = 0; i_18 < 13; i_18 += 3) 
                    {
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            {
                                var_34 = ((/* implicit */long long int) (~(-1701767156)));
                                var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (1265141722) : (((/* implicit */int) (unsigned short)30038))));
                            }
                        } 
                    } 
                    var_36 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)248))));
                    var_37 ^= ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) & (((/* implicit */int) arr_52 [i_0] [i_1 + 1]))));
                }
            }
        } 
    } 
}
