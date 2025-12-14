/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126300
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
    for (int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0 - 1] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 - 1] [i_2])) ? (((/* implicit */long long int) arr_1 [i_0 - 1])) : (((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (arr_5 [i_0] [i_0] [i_2] [i_0]) : (((/* implicit */long long int) arr_2 [i_0] [i_1]))))));
                    arr_8 [i_0 + 1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0])) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_0])) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0]))));
                    arr_9 [(signed char)8] &= ((/* implicit */int) arr_0 [(_Bool)1] [i_1]);
                    arr_10 [i_2] [(signed char)4] [(signed char)4] [i_0] |= ((/* implicit */signed char) (~(arr_2 [i_0 - 1] [i_1])));
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [(signed char)6])) ? (arr_6 [i_0 - 1] [i_0 - 1] [0LL]) : (arr_6 [(_Bool)1] [(_Bool)1] [(_Bool)1])));
    }
    for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        var_18 ^= ((/* implicit */unsigned int) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_3])))))))));
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) min((((((/* implicit */_Bool) arr_14 [i_3])) ? (((/* implicit */int) arr_14 [i_3])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_3])) || (((/* implicit */_Bool) arr_14 [i_3]))))))), ((+(arr_13 [i_3] [i_3]))))))));
        /* LoopSeq 2 */
        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            var_20 += ((/* implicit */_Bool) arr_13 [7] [0LL]);
            arr_18 [i_4] = arr_16 [i_4];
            /* LoopNest 3 */
            for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                for (unsigned int i_6 = 3; i_6 < 21; i_6 += 2) 
                {
                    for (unsigned int i_7 = 0; i_7 < 24; i_7 += 2) 
                    {
                        {
                            arr_26 [i_3] [i_4] [i_7] [i_4] [i_7] &= ((/* implicit */signed char) arr_20 [i_3] [i_6 + 1] [i_6 + 1] [i_6]);
                            arr_27 [i_5] [i_3] [i_3] [i_6 - 1] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_19 [i_6 - 3] [i_4] [i_6 - 3]), (((/* implicit */long long int) arr_24 [i_6] [i_6 - 1] [i_5] [i_6]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_7] [i_3] [i_3])) / (((/* implicit */int) arr_12 [i_4]))))) && (((/* implicit */_Bool) max((arr_23 [i_5] [i_4] [i_5]), (arr_23 [i_5] [i_5] [21LL]))))))) : (((((/* implicit */_Bool) ((arr_25 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) & (((/* implicit */int) arr_17 [i_3] [(signed char)20] [i_4]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_3] [i_6] [i_7])) && (((/* implicit */_Bool) arr_13 [i_3] [i_4]))))) : (((/* implicit */int) min((arr_23 [i_5] [i_5] [i_5]), (arr_17 [i_5] [i_6 - 2] [i_7]))))))));
                            var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_15 [i_3])))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_20 [i_3] [i_5] [i_5] [i_3])), (arr_19 [i_3] [i_3] [i_3])))) : ((+(arr_15 [i_7])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) max((arr_13 [i_7] [i_3]), (((/* implicit */int) arr_22 [i_3] [i_4] [i_6 - 1]))))) >= (min((arr_15 [i_3]), (((/* implicit */unsigned long long int) arr_12 [i_3])))))))) : (min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_21 [i_5])), (arr_19 [i_4] [i_5] [i_5])))), (((((/* implicit */_Bool) arr_12 [i_5])) ? (arr_15 [i_7]) : (((/* implicit */unsigned long long int) arr_21 [i_7]))))))));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */unsigned short) min(((-(arr_24 [i_4] [i_3] [i_3] [i_3]))), (((/* implicit */unsigned int) max((arr_16 [i_3]), (arr_16 [i_4]))))));
        }
        /* vectorizable */
        for (signed char i_8 = 2; i_8 < 23; i_8 += 4) 
        {
            /* LoopSeq 2 */
            for (signed char i_9 = 0; i_9 < 24; i_9 += 4) 
            {
                arr_32 [i_3] [i_3] [i_8] [i_9] = ((/* implicit */long long int) arr_23 [i_9] [i_8 + 1] [i_9]);
                var_23 += ((((/* implicit */_Bool) arr_17 [i_3] [i_8] [i_9])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_3] [i_8] [i_8]))))) : ((~(arr_29 [i_3] [(unsigned char)6] [i_9]))));
                /* LoopSeq 2 */
                for (int i_10 = 0; i_10 < 24; i_10 += 2) 
                {
                    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_8 - 1] [i_8 - 1] [(signed char)5])) ? (((/* implicit */int) ((((/* implicit */int) arr_16 [(_Bool)1])) > (((/* implicit */int) arr_30 [(_Bool)1] [i_9] [i_8] [i_3]))))) : (((((/* implicit */_Bool) arr_19 [i_3] [i_3] [i_10])) ? (((/* implicit */int) arr_14 [i_3])) : (arr_13 [i_10] [i_8]))))))));
                    arr_36 [i_3] [i_8] [i_3] [i_10] [i_10] = ((/* implicit */short) arr_33 [i_8 - 1] [i_8 - 1] [i_8]);
                    /* LoopSeq 3 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_25 += ((/* implicit */long long int) arr_22 [i_3] [(signed char)17] [i_9]);
                        var_26 = ((/* implicit */long long int) arr_29 [i_9] [i_8 + 1] [i_3]);
                    }
                    for (unsigned short i_12 = 0; i_12 < 24; i_12 += 4) 
                    {
                        arr_42 [i_3] [13ULL] [i_9] [i_10] [i_9] = ((/* implicit */short) ((arr_30 [(signed char)4] [i_8] [(signed char)4] [i_8]) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_9] [i_8] [i_9] [i_8 + 1]))) : (((((/* implicit */_Bool) arr_41 [i_3] [i_3] [i_3] [i_9] [i_10] [i_12])) ? (arr_19 [i_12] [i_10] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_12])))))));
                        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_35 [i_9] [i_12] [i_9] [i_9] [i_8 + 1] [i_3])))))))));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 4) 
                    {
                        arr_47 [i_3] [i_8] [i_13] = ((/* implicit */_Bool) ((((/* implicit */long long int) (~(arr_25 [i_3] [i_3] [i_9] [i_10] [19LL] [i_13])))) ^ (((((/* implicit */_Bool) arr_33 [i_10] [i_8 - 2] [i_8 - 2])) ? (arr_19 [i_3] [i_8 + 1] [i_8 + 1]) : (((/* implicit */long long int) arr_38 [i_3] [i_8 - 1] [i_9] [i_3] [i_13]))))));
                        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_46 [i_8 + 1])) ? (arr_46 [i_8 + 1]) : (arr_46 [i_8 + 1])));
                    }
                }
                for (unsigned int i_14 = 0; i_14 < 24; i_14 += 4) 
                {
                    var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_35 [0U] [i_8] [13LL] [i_14] [i_8] [i_8 - 2])))))));
                    arr_51 [i_14] [i_9] [i_8] [i_3] = ((/* implicit */unsigned int) ((arr_13 [i_8 - 1] [i_8 - 2]) | (((/* implicit */int) arr_44 [i_8 - 2] [i_8 - 2] [i_9]))));
                }
                var_30 = ((/* implicit */_Bool) max((var_30), (((((/* implicit */_Bool) arr_24 [i_8 - 2] [i_8 - 1] [i_8 - 2] [i_9])) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_20 [i_3] [i_3] [i_8] [i_8])))))))));
                var_31 = ((/* implicit */long long int) max((var_31), (((((/* implicit */_Bool) arr_25 [i_8 - 2] [i_8 - 1] [i_8 - 2] [i_8 + 1] [i_8 - 2] [i_8 + 1])) ? (arr_39 [i_3] [i_9] [2U] [18LL] [i_8] [(unsigned char)1]) : (((/* implicit */long long int) ((((/* implicit */int) arr_35 [i_3] [(unsigned short)6] [(unsigned short)6] [i_8 - 2] [i_9] [i_9])) << (((((/* implicit */int) arr_16 [i_9])) - (182))))))))));
            }
            for (signed char i_15 = 3; i_15 < 23; i_15 += 4) 
            {
                var_32 = ((/* implicit */signed char) arr_30 [i_15] [i_15 - 2] [i_15] [i_8 - 2]);
                arr_55 [i_15 + 1] [i_8 - 1] [i_8 - 1] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_28 [11U] [i_8 - 1]))));
                /* LoopNest 2 */
                for (unsigned char i_16 = 1; i_16 < 22; i_16 += 4) 
                {
                    for (unsigned char i_17 = 0; i_17 < 24; i_17 += 1) 
                    {
                        {
                            arr_62 [i_8] [i_8] &= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((arr_57 [i_17] [i_3] [i_8 - 2] [i_17] [i_17]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_17]))))))) & (((((/* implicit */_Bool) arr_13 [i_3] [i_3])) ? (arr_19 [i_3] [i_15 + 1] [i_17]) : (((/* implicit */long long int) arr_46 [i_16]))))));
                            var_33 *= ((/* implicit */long long int) (((+(arr_40 [i_3] [(unsigned short)17] [i_15] [i_3] [i_17]))) == (((/* implicit */long long int) ((/* implicit */int) ((arr_41 [i_3] [i_8] [i_17] [23] [i_17] [i_15 - 1]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_17] [i_15] [i_8] [i_3])))))))));
                            var_34 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_44 [i_3] [i_3] [i_16 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_8]))))) : (((/* implicit */int) arr_54 [i_8 - 2] [i_15 + 1] [i_15 + 1] [i_15]))));
                            arr_63 [i_16] = ((/* implicit */signed char) (!(((((/* implicit */_Bool) arr_44 [(signed char)16] [(signed char)16] [i_15])) || (((/* implicit */_Bool) arr_21 [i_16]))))));
                            var_35 *= ((/* implicit */unsigned char) ((arr_52 [i_17] [i_17] [i_16 - 1] [i_8 + 1]) ? (((/* implicit */int) arr_52 [i_17] [i_17] [i_16 + 2] [i_8 - 2])) : (((/* implicit */int) arr_52 [i_17] [i_17] [i_16 + 1] [i_8 - 1]))));
                        }
                    } 
                } 
                arr_64 [i_3] [i_8] [i_15] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_3] [i_3] [i_8] [i_8] [i_3]))) * (arr_48 [i_3] [9] [i_15 - 1]))) < (((/* implicit */unsigned int) (~(((/* implicit */int) arr_23 [i_3] [i_3] [i_8 + 1])))))));
                var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) (~(arr_28 [i_15 - 1] [i_8 - 2]))))));
            }
            var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_54 [i_8] [i_8] [(signed char)5] [i_3]))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_56 [i_3] [i_3] [i_8 - 1] [i_3]))))) : ((-(arr_34 [i_3] [i_3] [i_8 + 1]))))))));
            var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_3] [i_8] [i_3] [i_8 - 2] [i_3] [(short)15])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_53 [i_3] [i_8 - 1] [i_3]))) : (arr_61 [i_3] [i_3] [i_3] [i_8] [i_8])))) ? ((+(arr_57 [2U] [i_8] [i_3] [i_8] [i_3]))) : (((/* implicit */unsigned long long int) arr_38 [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_8 + 1]))));
        }
    }
    var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) && ((!(((/* implicit */_Bool) var_9))))));
}
