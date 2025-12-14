/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155623
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_1 + 2] = ((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 12; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3 - 3] [i_2] = ((/* implicit */unsigned char) arr_9 [i_1 + 1] [i_1 + 1] [i_3] [i_4]);
                                arr_15 [i_0] [(_Bool)1] [(_Bool)1] [i_3] [i_2] = ((/* implicit */unsigned short) (unsigned char)160);
                            }
                            /* LoopSeq 2 */
                            for (int i_5 = 0; i_5 < 16; i_5 += 1) 
                            {
                                var_20 -= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (+(arr_13 [i_0] [i_0] [i_1] [10U] [i_3 + 3] [i_5])))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1 - 2] [14])) : (2529803607415184334ULL))) : ((~(3684141322611922516ULL)))))));
                                var_21 = ((/* implicit */unsigned char) arr_11 [i_0] [i_2 + 1] [i_2] [i_5]);
                                var_22 = ((/* implicit */int) arr_5 [i_2] [i_3]);
                            }
                            /* vectorizable */
                            for (unsigned int i_6 = 3; i_6 < 13; i_6 += 3) 
                            {
                                var_23 = ((/* implicit */short) arr_17 [i_6 + 1] [i_1 - 2] [i_3 + 3] [i_2 + 2] [i_1 + 1] [i_1 - 2]);
                                var_24 = ((((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_2] [i_2 - 1] [i_6])) ? (arr_13 [i_6 - 2] [i_6 - 2] [i_6] [i_6] [i_6 + 3] [i_6]) : (((/* implicit */int) arr_12 [i_2] [i_2] [i_2] [i_1 + 1] [i_1 + 1])));
                                var_25 = ((arr_1 [i_2 - 1] [(unsigned short)6]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_6] [i_3 + 1] [i_2] [i_1 + 2] [i_1 - 1] [i_0]))));
                            }
                            var_26 = (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_3]))))));
                            var_27 = arr_9 [i_3] [i_3 + 3] [i_3 + 4] [i_3 + 4];
                            var_28 ^= ((/* implicit */unsigned short) var_14);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 3) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                            {
                                var_29 = min(((~((-(((/* implicit */int) var_0)))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_0] [14] [i_7]))))));
                                arr_32 [i_9] [i_8] [12] [i_1 + 2] [i_8] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [i_0] [i_1 + 1] [i_1] [i_1 - 1]))));
                                var_30 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_1] [i_8] [i_9])) ? (arr_18 [11] [i_7] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) == (((((/* implicit */_Bool) (unsigned char)255)) ? (min((((/* implicit */unsigned long long int) arr_11 [i_9] [i_1] [i_1] [i_1])), (var_14))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)14729)) : (((/* implicit */int) arr_20 [i_1] [i_1] [i_8] [i_9])))))))));
                                arr_33 [i_8] = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (signed char)-85)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)90))))))));
                            }
                            for (int i_10 = 0; i_10 < 16; i_10 += 4) 
                            {
                                arr_36 [i_0] [i_1 - 2] [i_7] [i_8] [(signed char)4] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                                var_31 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (~(var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_1 - 2] [i_7] [i_7]))) : (((var_14) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_7] [i_0] [i_10])))))))));
                            }
                            for (unsigned int i_11 = 1; i_11 < 15; i_11 += 1) 
                            {
                                arr_39 [i_11] [i_8] [i_7] [i_1 + 1] [i_8] [i_0] = ((/* implicit */int) ((max((((((/* implicit */int) var_2)) | (((/* implicit */int) arr_11 [i_0] [i_1] [i_8] [i_0])))), ((+(var_6))))) == (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_5 [7LL] [i_1 - 2])))))))));
                                var_32 ^= ((/* implicit */unsigned int) (signed char)-89);
                                var_33 = ((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */unsigned long long int) var_12)), (min((var_3), (((/* implicit */unsigned long long int) var_7)))))));
                                var_34 ^= ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_1 + 2])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_11])) ? (arr_2 [i_11]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7)))))))));
                            }
                            /* LoopSeq 2 */
                            for (unsigned char i_12 = 0; i_12 < 16; i_12 += 1) 
                            {
                                arr_42 [i_8] = ((/* implicit */int) (+(var_18)));
                                arr_43 [i_8] [i_1] [i_7] [i_1] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (max((((/* implicit */long long int) var_13)), (((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 2] [i_8])) ? (-8824002562684128783LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)115)))));
                                var_35 *= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_1 + 2] [i_1 - 1] [i_1] [(unsigned char)6])) && (((/* implicit */_Bool) arr_27 [i_1] [i_1 + 3] [i_1] [i_1]))))) <= (max((((((/* implicit */int) arr_31 [i_1] [i_8] [i_7] [i_1] [i_1])) >> (((/* implicit */int) arr_31 [i_1] [i_1] [i_7] [i_8] [i_12])))), (min((((/* implicit */int) arr_12 [i_1] [i_8] [i_7] [6LL] [i_1])), (arr_13 [i_12] [i_8] [i_7] [i_7] [(_Bool)1] [i_0])))))));
                            }
                            /* vectorizable */
                            for (unsigned int i_13 = 0; i_13 < 16; i_13 += 4) 
                            {
                                var_36 = ((/* implicit */_Bool) var_6);
                                arr_47 [i_13] [i_8] [i_8] [i_8] [i_0] = ((/* implicit */unsigned int) (((((-(((/* implicit */int) var_4)))) + (2147483647))) << (((((/* implicit */int) var_13)) >> (((arr_25 [i_8] [i_0] [i_0]) - (2407415612U)))))));
                                arr_48 [(signed char)11] [(signed char)11] [(signed char)11] [i_8] [i_8] [i_13] [i_13] = ((/* implicit */signed char) ((((/* implicit */int) arr_46 [i_0] [i_8])) >= (((/* implicit */int) arr_46 [i_1] [i_8]))));
                            }
                            var_37 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((arr_45 [i_0] [i_0] [i_1] [i_7] [i_8] [i_8] [i_7]), (((/* implicit */short) arr_3 [i_8]))))) ? (((/* implicit */int) ((arr_1 [i_8] [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(_Bool)1] [i_0] [i_1 + 2] [i_0])))))) : (((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) var_13))))))) / (((((/* implicit */_Bool) (unsigned char)48)) ? (max((((/* implicit */int) var_5)), (-962433094))) : (((/* implicit */int) arr_28 [i_1 + 1]))))));
                            arr_49 [i_8] [i_7] [i_1 - 2] [i_8] = ((/* implicit */signed char) (+((~(arr_2 [i_1 + 3])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_38 = ((/* implicit */unsigned char) var_2);
    var_39 = ((/* implicit */unsigned int) (unsigned short)64137);
}
