/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141668
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
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) == (var_17)))) % (((/* implicit */int) var_5))));
    var_20 = ((/* implicit */int) var_8);
    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */int) var_12)) << (((((((2980834036U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-20))))) << (((((/* implicit */int) var_10)) - (51557))))) - (2371835957U))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)3603))) <= (2980834036U))))));
        arr_3 [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) < (arr_0 [i_0] [i_0])));
        var_22 *= ((/* implicit */short) ((((/* implicit */int) (unsigned short)38093)) >= (((/* implicit */int) (unsigned char)7))));
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            arr_16 [i_2] [i_0] [i_2] [i_4] [11U] [i_3] = ((/* implicit */long long int) arr_12 [i_4] [i_3] [i_2] [i_1] [i_0] [i_0]);
                            arr_17 [i_4] [3LL] [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) arr_11 [i_0 - 2] [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_9 [(short)4] [i_1] [i_0])));
                            arr_18 [i_0] [i_1 - 1] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_3])) - (arr_12 [i_3] [i_3] [i_2] [i_0] [i_1 + 1] [i_0])));
                        }
                        for (short i_5 = 0; i_5 < 14; i_5 += 2) 
                        {
                            arr_21 [i_0] [i_1 - 2] [i_2] [i_3] [i_5] = ((/* implicit */short) arr_5 [i_0] [i_2] [i_3]);
                            var_23 = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_1 + 1] [i_2] [i_3] [(signed char)13]);
                        }
                        for (int i_6 = 1; i_6 < 13; i_6 += 3) 
                        {
                            var_24 ^= ((/* implicit */short) ((((arr_0 [i_0] [i_0]) / (((/* implicit */long long int) ((arr_15 [i_3] [i_2] [12ULL]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0])))))))) & (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_3])) << (((arr_15 [i_6] [i_2] [i_1]) - (arr_15 [i_0] [i_1] [i_6]))))))));
                            arr_24 [i_0] [i_1] [i_2] [i_3] [12LL] [i_1] [i_2] = ((/* implicit */int) ((((((((/* implicit */int) arr_13 [i_0] [i_0] [(unsigned short)2] [i_0] [i_0] [i_0])) & (((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [i_3] [5ULL] [i_2])))) - (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_9 [i_0] [11ULL] [i_3])) < (arr_7 [i_3] [9ULL])))))) != (((/* implicit */int) arr_4 [i_0] [i_2] [i_6 - 1]))));
                            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) arr_13 [i_0 - 1] [i_0 - 1] [4] [i_2] [i_3] [i_6]))));
                            var_26 = ((/* implicit */long long int) arr_15 [(unsigned char)1] [(unsigned char)1] [i_0]);
                        }
                        var_27 = ((/* implicit */long long int) arr_10 [i_0] [i_0] [0LL] [i_0]);
                    }
                    arr_25 [i_0] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_20 [i_0] [2ULL] [i_1 + 1] [i_1] [i_2])) || (((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])))) && (((((/* implicit */_Bool) arr_1 [i_2])) && (((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_1 - 2] [7LL] [i_2])))))) || (((((/* implicit */_Bool) arr_6 [i_1])) || (((arr_13 [i_2] [i_2] [i_1 - 1] [i_1] [i_0] [i_0]) && (((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_1] [i_0] [i_0]))))))));
                    arr_26 [i_0] [i_1] [i_2] [i_1 - 2] = ((/* implicit */long long int) ((((((/* implicit */int) arr_6 [i_0])) << (((((((/* implicit */int) arr_23 [i_0])) << (((arr_5 [i_2] [i_1] [i_0 + 1]) - (17494266964735254578ULL))))) - (8966133))))) << (((((((/* implicit */int) arr_4 [8ULL] [i_1 - 2] [i_1])) << (((arr_7 [i_0] [i_0]) - (575863453960194394ULL))))) >> (((((arr_22 [i_1] [i_2]) << (((((/* implicit */int) arr_4 [i_0] [i_1] [i_2])) - (154))))) - (5908722711110090740ULL)))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 1) 
                    {
                        arr_29 [i_7] = ((/* implicit */unsigned long long int) arr_27 [i_0] [i_2]);
                        var_28 = ((/* implicit */unsigned short) ((arr_9 [i_7] [i_7] [i_2]) & (arr_9 [i_0] [(short)4] [i_2])));
                    }
                }
            } 
        } 
    }
    for (int i_8 = 0; i_8 < 25; i_8 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_9 = 0; i_9 < 25; i_9 += 3) 
        {
            for (unsigned char i_10 = 0; i_10 < 25; i_10 += 2) 
            {
                {
                    var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((((((/* implicit */int) (short)-14729)) ^ (((/* implicit */int) (short)3614)))) == (arr_34 [i_10] [(short)0] [i_9] [i_8]))))));
                    var_30 = ((/* implicit */unsigned char) arr_31 [2LL]);
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 4; i_11 < 24; i_11 += 3) 
                    {
                        for (int i_12 = 0; i_12 < 25; i_12 += 1) 
                        {
                            {
                                arr_40 [i_8] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */short) arr_32 [(short)10] [(short)10]);
                                var_31 = ((arr_37 [i_8] [i_8] [i_8] [i_8] [i_8]) - (((/* implicit */long long int) arr_30 [i_8])));
                            }
                        } 
                    } 
                    var_32 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_39 [i_8] [i_9] [i_10])) && (((/* implicit */_Bool) arr_36 [i_8] [(_Bool)1] [i_10] [i_10] [i_10] [i_10]))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_13 = 3; i_13 < 23; i_13 += 4) 
        {
            for (unsigned long long int i_14 = 1; i_14 < 23; i_14 += 3) 
            {
                {
                    var_33 ^= ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_43 [24LL] [i_13 - 2])) && (((/* implicit */_Bool) arr_30 [i_14])))) || (((((/* implicit */_Bool) arr_41 [i_13 - 1] [i_13 - 1] [i_13])) && (((/* implicit */_Bool) arr_44 [i_13] [i_8])))))) && (((((((/* implicit */long long int) arr_39 [(short)15] [i_13 - 3] [i_14 - 1])) + (arr_31 [i_14 + 1]))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_46 [(unsigned short)18] [i_13] [i_14])) && (((/* implicit */_Bool) arr_34 [i_8] [i_8] [i_8] [i_8]))))))))));
                    var_34 = ((/* implicit */_Bool) arr_44 [i_8] [i_8]);
                    arr_47 [i_8] [i_13] [i_13] = ((/* implicit */unsigned short) ((((((((/* implicit */long long int) arr_39 [i_8] [i_13 - 1] [i_14])) + (arr_37 [i_14] [i_14] [i_13] [15ULL] [i_8]))) & (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_8] [i_13] [i_13] [i_8]))))) % (arr_37 [8U] [i_13] [i_14 + 2] [i_13] [i_13])));
                }
            } 
        } 
    }
}
