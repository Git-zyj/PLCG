/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117944
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
    var_16 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) ((var_4) == (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) : (((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_17 = ((/* implicit */signed char) arr_2 [i_0] [i_0]);
        var_18 &= ((/* implicit */int) arr_1 [i_0] [i_0]);
    }
    /* LoopSeq 3 */
    for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) || (arr_4 [(unsigned char)13] [(_Bool)1])));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                {
                    arr_10 [i_1] [i_2] [i_3] = arr_9 [i_1];
                    /* LoopSeq 1 */
                    for (long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((((arr_5 [i_4] [i_3] [5]) + (((/* implicit */int) arr_8 [i_2] [i_1])))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [2] [i_3]))))))) >= (((((/* implicit */int) ((arr_7 [7U]) < (((/* implicit */unsigned int) arr_5 [i_4] [i_3] [(_Bool)0]))))) | (max((((/* implicit */int) arr_11 [2] [i_2] [i_2] [i_3] [i_1] [i_4])), (arr_5 [i_1] [3] [i_4]))))))))));
                        arr_13 [(_Bool)0] [i_2] [i_2] [i_2] [i_4] = ((/* implicit */_Bool) (~((+(max((arr_0 [9U] [i_2]), (((/* implicit */int) arr_3 [11]))))))));
                    }
                    var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3])) ? (arr_12 [i_1]) : (((/* implicit */unsigned long long int) arr_0 [i_1] [i_3]))))) ? (((((/* implicit */_Bool) arr_1 [i_2] [i_1])) ? (arr_2 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [12]))))) : ((+(337437660U))))) - (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_9 [1ULL])) ? (((/* implicit */int) arr_1 [i_2] [i_2])) : (arr_5 [i_3] [7ULL] [12U]))))))));
                }
            } 
        } 
        arr_14 [i_1] = ((/* implicit */short) (((-(((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (arr_7 [i_1]) : (arr_2 [i_1] [i_1]))))) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1]))))))));
    }
    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_6 = 0; i_6 < 14; i_6 += 1) 
        {
            var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_9 [i_5]))));
            arr_20 [i_6] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_6] [i_5])) ? (arr_0 [i_6] [i_6]) : (((/* implicit */int) arr_19 [i_6] [i_6] [(unsigned char)6]))))) | (((((/* implicit */long long int) arr_9 [(_Bool)1])) | (arr_18 [i_6] [i_5])))));
            var_23 = ((/* implicit */signed char) arr_17 [i_6] [i_5] [i_5]);
            var_24 = (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_5] [i_6]))))));
        }
        for (int i_7 = 0; i_7 < 14; i_7 += 2) 
        {
            /* LoopSeq 3 */
            for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) /* same iter space */
            {
                arr_28 [i_5] [i_8] = ((/* implicit */long long int) (~(((/* implicit */int) max((((((/* implicit */_Bool) arr_2 [i_7] [i_8])) || (((/* implicit */_Bool) arr_17 [i_5] [i_7] [i_8])))), (((((/* implicit */_Bool) arr_25 [i_7])) || (((/* implicit */_Bool) arr_16 [i_8] [i_7])))))))));
                var_25 = ((/* implicit */unsigned int) max((((((((/* implicit */_Bool) arr_25 [i_7])) || (((/* implicit */_Bool) arr_11 [i_5] [i_7] [i_7] [i_7] [i_8 + 1] [i_8 + 1])))) ? (((((/* implicit */_Bool) arr_12 [i_5])) ? (((/* implicit */int) arr_6 [i_7] [2])) : (arr_21 [(signed char)13] [i_8 + 1]))) : (((((/* implicit */_Bool) arr_7 [i_7])) ? (((/* implicit */int) arr_4 [5LL] [(signed char)10])) : (((/* implicit */int) arr_8 [i_8] [i_7])))))), (((/* implicit */int) (((!(((/* implicit */_Bool) arr_6 [i_8] [i_5])))) || ((!(((/* implicit */_Bool) arr_25 [i_5])))))))));
                var_26 = ((/* implicit */unsigned int) arr_5 [i_5] [i_5] [(signed char)3]);
                var_27 ^= ((((/* implicit */_Bool) min(((~(((/* implicit */int) arr_25 [i_8])))), ((+(arr_0 [i_5] [i_8])))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_5] [i_5])) && (((/* implicit */_Bool) arr_11 [i_5] [i_7] [i_5] [i_7] [i_5] [i_5]))))), (((((/* implicit */long long int) ((/* implicit */int) arr_23 [(short)11] [i_7]))) | (arr_18 [i_8 + 1] [i_5]))))) : (((/* implicit */long long int) max(((~(arr_9 [0LL]))), ((~(arr_7 [i_5])))))));
            }
            for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) /* same iter space */
            {
                var_28 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [3LL] [i_9 + 1] [i_9] [i_7] [i_7] [i_5]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_5] [i_5] [i_7] [i_7] [i_9] [i_9 + 1]))) : (max((arr_2 [i_7] [i_9]), (((/* implicit */unsigned int) arr_5 [i_5] [i_7] [i_9]))))))) ? (max(((~(arr_24 [i_5] [i_7] [8ULL] [i_9]))), ((-(arr_24 [i_5] [i_5] [i_7] [i_9 + 1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))));
                arr_33 [i_5] [i_5] &= ((/* implicit */int) arr_32 [i_5] [i_7] [i_7] [i_9 + 1]);
                /* LoopNest 2 */
                for (long long int i_10 = 0; i_10 < 14; i_10 += 3) 
                {
                    for (unsigned int i_11 = 3; i_11 < 10; i_11 += 4) 
                    {
                        {
                            arr_39 [i_9] [i_7] [i_9] [i_9 + 1] [i_10] [i_11 - 3] = ((/* implicit */unsigned int) (+(arr_32 [i_9] [i_9 + 1] [i_9] [i_9])));
                            var_29 ^= max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_25 [i_9 + 1])))))))), (((((/* implicit */_Bool) 337437660U)) ? (337437644U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-83))))));
                            var_30 = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_11] [(signed char)4])) || (((/* implicit */_Bool) (-2147483647 - 1)))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */unsigned char) arr_25 [i_7]);
            }
            for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) /* same iter space */
            {
                arr_42 [i_7] [8U] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_7] [11] [2] [2] [i_7])) ? (((((/* implicit */_Bool) arr_12 [i_12])) ? (((/* implicit */int) arr_23 [i_5] [i_12 + 1])) : (((/* implicit */int) arr_4 [i_5] [i_5])))) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_5] [i_5])) >= (((/* implicit */int) arr_6 [i_5] [(_Bool)1])))))))) ? ((-(arr_40 [i_5] [(_Bool)1] [i_12]))) : (((/* implicit */unsigned int) arr_22 [i_12] [i_7] [12LL]))));
                /* LoopNest 2 */
                for (signed char i_13 = 0; i_13 < 14; i_13 += 3) 
                {
                    for (short i_14 = 0; i_14 < 14; i_14 += 1) 
                    {
                        {
                            arr_49 [i_12] [i_7] [i_12] [i_12 + 1] [i_12 + 1] [i_14] = (~(min((((/* implicit */unsigned long long int) arr_29 [i_7])), (min((arr_30 [(short)5]), (((/* implicit */unsigned long long int) arr_19 [i_12] [i_13] [i_14])))))));
                            arr_50 [i_12] [i_13] [i_12] [i_7] [i_12] = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) arr_25 [i_12])), (arr_30 [i_5]))) << ((((~(((/* implicit */int) arr_23 [i_5] [i_5])))) + (130)))));
                            var_32 = ((/* implicit */long long int) arr_25 [i_7]);
                        }
                    } 
                } 
                var_33 = ((-986304014646381253LL) & (((/* implicit */long long int) ((/* implicit */int) (short)32767))));
                var_34 = ((/* implicit */long long int) (-((+(min((((/* implicit */unsigned int) arr_41 [i_5] [i_7] [i_5])), (arr_9 [i_12])))))));
                arr_51 [i_5] [i_12] [i_7] [i_12] = ((/* implicit */signed char) max((((/* implicit */int) arr_36 [i_12 + 1] [i_12] [i_12] [i_12] [i_12 + 1])), (((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_12 + 1] [(signed char)4] [i_7] [i_5] [i_5] [8]))))) - (((((/* implicit */_Bool) arr_12 [i_12])) ? (arr_41 [i_5] [i_7] [(short)12]) : (((/* implicit */int) arr_27 [i_5] [i_7] [i_12]))))))));
            }
            /* LoopNest 2 */
            for (unsigned int i_15 = 0; i_15 < 14; i_15 += 1) 
            {
                for (long long int i_16 = 4; i_16 < 11; i_16 += 2) 
                {
                    {
                        var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(max((arr_37 [i_5] [i_7] [i_15] [i_7] [i_16] [i_16] [i_15]), (((/* implicit */unsigned long long int) arr_55 [i_5] [i_5] [(_Bool)1] [i_5]))))))) ? ((-(((((/* implicit */_Bool) arr_41 [i_5] [i_15] [i_16])) ? (((/* implicit */int) arr_56 [i_16 - 4] [i_15] [4LL] [i_5] [i_5])) : (((/* implicit */int) arr_44 [i_7] [i_7])))))) : (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */signed char) arr_27 [i_15] [i_7] [i_5])), (arr_19 [i_7] [i_15] [i_16])))) < ((+(((/* implicit */int) arr_34 [i_7])))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_17 = 3; i_17 < 13; i_17 += 1) 
                        {
                            var_36 = ((/* implicit */unsigned int) arr_3 [i_5]);
                            var_37 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) arr_52 [i_16] [i_17 + 1])) >= (arr_30 [i_16]))) || (((/* implicit */_Bool) arr_26 [i_5]))));
                            arr_60 [i_16] [i_16 - 4] [i_15] [i_5] [3ULL] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_34 [i_5])) % (((/* implicit */int) arr_3 [i_17]))))) * ((-(arr_9 [i_5])))));
                        }
                        arr_61 [(signed char)0] [i_7] [i_15] [i_15] [i_16] = min((((((/* implicit */_Bool) (+(((/* implicit */int) arr_29 [i_5]))))) ? (arr_26 [i_5]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_15]))))))), (((/* implicit */unsigned long long int) arr_38 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])));
                    }
                } 
            } 
        }
        for (int i_18 = 1; i_18 < 12; i_18 += 1) 
        {
            var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((arr_46 [i_18 + 2] [i_5]) ? (((/* implicit */unsigned int) arr_62 [i_18 - 1])) : (arr_7 [i_5])))))) | (((((((((/* implicit */_Bool) arr_22 [i_5] [i_18 + 1] [i_5])) ? (((/* implicit */long long int) arr_0 [i_5] [i_5])) : (arr_54 [i_5] [i_18] [i_18] [i_18] [i_5]))) + (9223372036854775807LL))) << (((((arr_31 [i_5] [i_5] [i_5]) >> (((((/* implicit */int) arr_43 [i_5] [i_5] [i_5] [9ULL] [i_5] [4U])) + (148))))) - (18ULL)))))));
            /* LoopNest 3 */
            for (int i_19 = 0; i_19 < 14; i_19 += 4) 
            {
                for (unsigned long long int i_20 = 3; i_20 < 11; i_20 += 3) 
                {
                    for (long long int i_21 = 0; i_21 < 14; i_21 += 2) 
                    {
                        {
                            var_39 = ((((((/* implicit */_Bool) ((((arr_35 [i_5] [i_5] [i_5] [i_20] [i_21]) + (2147483647))) << (((arr_18 [i_18] [i_20]) + (6288850262892869029LL)))))) ? (min((arr_30 [i_21]), (((/* implicit */unsigned long long int) arr_44 [i_20] [i_20])))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_18] [i_18]))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_5] [i_18 + 2] [i_19] [i_20] [i_21] [i_21]))));
                            arr_72 [i_20] [i_20] [i_20] [i_19] [i_18] [(unsigned short)1] [i_20] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_54 [i_18] [i_18] [8LL] [i_18] [i_18])) % (arr_37 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            /* vectorizable */
            for (int i_22 = 0; i_22 < 14; i_22 += 1) 
            {
                var_40 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_57 [i_22] [i_18] [i_5]) - (((/* implicit */long long int) ((/* implicit */int) arr_16 [2ULL] [i_22])))))) ? (((((/* implicit */long long int) arr_53 [i_5] [i_18])) / (arr_54 [i_22] [i_18] [i_18] [i_5] [i_5]))) : (((/* implicit */long long int) arr_24 [i_5] [i_18] [i_18] [i_22]))));
                arr_77 [i_5] [i_18] [i_5] = ((/* implicit */short) ((((/* implicit */int) arr_45 [6U] [i_22] [6U] [i_18] [i_5])) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_22] [i_18] [i_18] [i_18] [i_5])))))));
            }
            for (unsigned int i_23 = 0; i_23 < 14; i_23 += 1) 
            {
                arr_81 [i_5] [i_5] [i_18] [i_23] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_24 [i_5] [i_5] [i_5] [i_23]))));
                var_41 = ((/* implicit */int) arr_47 [i_5] [i_18 - 1] [i_18 + 1] [i_23] [i_23]);
            }
            for (int i_24 = 1; i_24 < 11; i_24 += 2) 
            {
                var_42 ^= ((/* implicit */int) arr_4 [i_18] [i_24]);
                var_43 = ((/* implicit */long long int) (+(arr_53 [i_5] [i_18])));
                var_44 |= ((/* implicit */unsigned long long int) ((arr_70 [i_5] [i_5] [i_24 + 1]) ? ((((-(((/* implicit */int) arr_70 [i_24 + 3] [i_18] [i_5])))) | (((/* implicit */int) min((((/* implicit */unsigned char) arr_23 [i_18] [i_18])), (arr_8 [i_18] [i_5])))))) : (((/* implicit */int) ((arr_9 [i_18 + 1]) != (((/* implicit */unsigned int) (+(arr_22 [i_18] [i_18] [i_18])))))))));
            }
            arr_84 [i_18 - 1] [i_18] = arr_68 [i_5] [i_18 - 1] [i_18] [i_18 - 1] [i_18 - 1];
        }
        var_45 = ((/* implicit */signed char) arr_46 [i_5] [i_5]);
    }
    for (unsigned int i_25 = 0; i_25 < 19; i_25 += 1) 
    {
        var_46 = (((!(((/* implicit */_Bool) arr_86 [i_25])))) ? (max(((+(2251765453946880LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_86 [i_25])) ? (((/* implicit */int) arr_86 [i_25])) : (((/* implicit */int) arr_86 [i_25]))))))) : (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_85 [i_25])) ? (((/* implicit */int) arr_85 [i_25])) : (((/* implicit */int) arr_86 [i_25])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_86 [i_25])) && (((/* implicit */_Bool) arr_85 [i_25])))))))));
        arr_87 [i_25] = ((/* implicit */unsigned short) min((((/* implicit */int) min((arr_86 [i_25]), (((/* implicit */short) ((((/* implicit */int) arr_85 [i_25])) < (((/* implicit */int) arr_86 [i_25])))))))), ((-(((/* implicit */int) arr_85 [i_25]))))));
        var_47 = ((/* implicit */_Bool) min((var_47), (((/* implicit */_Bool) min(((~(((/* implicit */int) ((((/* implicit */int) arr_85 [i_25])) > (((/* implicit */int) arr_85 [i_25]))))))), (((/* implicit */int) arr_85 [i_25])))))));
        var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_86 [i_25])) > (((/* implicit */int) arr_86 [i_25])))) ? (((/* implicit */int) max((((/* implicit */short) arr_85 [i_25])), (arr_86 [i_25])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_85 [i_25])))))))) ? (((/* implicit */int) arr_85 [i_25])) : ((~(((/* implicit */int) (signed char)121))))));
    }
}
