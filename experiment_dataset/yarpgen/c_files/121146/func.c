/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121146
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) max(((unsigned char)0), ((unsigned char)178)))) >> (((var_12) + (865112193539113692LL)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_20 *= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_1 [i_0] [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_0] [i_0])) + (38)))));
        arr_2 [20U] [20U] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0]))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((6636567026001611695ULL) / (6636567026001611695ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 3; i_2 < 13; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 4) 
                        {
                            arr_13 [i_1] [15U] [i_1] [i_1] [i_1] [i_1] [(_Bool)1] = ((/* implicit */unsigned short) arr_5 [i_3] [i_1] [i_3]);
                            var_22 = arr_5 [i_2 + 3] [i_1] [i_2 + 3];
                            var_23 *= ((/* implicit */short) arr_9 [i_2 + 2] [i_2 + 2] [i_2 - 3] [i_2 - 2] [i_2 + 1]);
                            arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((11810177047707939921ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10641))))) ? (((/* implicit */int) arr_1 [i_2 - 1] [i_2 - 3])) : (((/* implicit */int) arr_4 [i_1]))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            arr_18 [i_1] [i_1] [i_3] [i_4] [i_4] [i_6] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (short)3083)) : (-1)));
                            var_24 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_17 [i_1] [i_2] [i_3] [i_4] [i_4] [i_6]) / (((/* implicit */unsigned long long int) arr_6 [i_1] [i_1] [i_1]))))) ? (((((/* implicit */_Bool) arr_7 [i_1] [i_2 + 2] [i_4] [i_2 + 2])) ? (((/* implicit */int) arr_8 [i_4] [i_2] [i_4] [i_2])) : (((/* implicit */int) arr_8 [i_4] [i_4] [i_4] [i_4])))) : (((/* implicit */int) arr_10 [i_4]))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_25 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_2 + 2]))) ^ (arr_17 [i_1] [i_2] [i_2 - 3] [i_2 - 3] [i_1] [i_2 - 3])));
                            arr_21 [i_7] [i_1] [i_1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_2 + 2] [i_2] [i_2 + 2] [i_1] [i_2 - 3])) && (((/* implicit */_Bool) arr_15 [i_2 - 3] [i_2 - 3] [i_2 - 2] [i_1] [i_2 - 1]))));
                            var_26 = ((/* implicit */int) max((var_26), (arr_6 [i_4] [i_4] [10U])));
                        }
                        /* LoopSeq 2 */
                        for (short i_8 = 0; i_8 < 16; i_8 += 4) 
                        {
                            arr_25 [i_1] [i_2 - 2] [i_2 - 2] [i_1] [i_1] [i_2 - 3] = ((/* implicit */short) ((arr_24 [i_1] [i_2 + 2] [i_2 - 3] [i_1] [i_2 - 2] [i_1]) >> (((arr_24 [i_1] [i_1] [i_2 - 2] [i_1] [i_2 + 1] [i_2 + 1]) - (3184651658U)))));
                            var_27 = ((/* implicit */int) ((((arr_9 [i_1] [i_2 - 3] [i_3] [i_4] [i_1]) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_1])) == (((/* implicit */int) arr_10 [i_1]))))))));
                            arr_26 [i_1] [i_1] [i_1] [i_4] [i_8] = ((/* implicit */short) ((((/* implicit */int) ((arr_19 [i_1] [i_2] [i_2] [(unsigned short)1] [i_1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_8] [i_4] [i_1] [i_1] [i_1] [i_1] [i_1])))))) * (((/* implicit */int) ((((/* implicit */int) arr_7 [i_1] [i_1] [i_1] [i_1])) != (((/* implicit */int) arr_7 [i_4] [i_4] [i_1] [i_4])))))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_19 [i_1] [i_2] [i_2] [i_4] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (4152995236989666266LL))) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                            var_29 += ((((/* implicit */int) arr_12 [i_4] [i_2 + 2])) == (arr_11 [i_1]));
                        }
                        var_30 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_23 [i_4] [i_4] [i_3] [i_3] [i_2 + 2] [i_2 + 1] [i_1])) <= (((/* implicit */int) arr_23 [i_4] [i_4] [i_3] [i_3] [(unsigned short)13] [i_2 - 3] [i_1]))));
                        var_31 = ((/* implicit */unsigned char) arr_24 [i_1] [i_1] [i_3] [i_4] [i_1] [i_1]);
                        var_32 += ((/* implicit */_Bool) arr_22 [i_2] [i_2 + 1] [i_2 + 1] [i_2 - 2] [i_2 - 2] [i_2 - 1] [i_2]);
                    }
                    for (unsigned char i_10 = 3; i_10 < 14; i_10 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned int) ((11810177047707939933ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [(signed char)11] [i_2 - 3] [i_2 + 2] [i_2 - 2] [i_1] [i_10 - 3])) ? (((/* implicit */int) arr_20 [i_1] [i_1])) : (((((((/* implicit */int) arr_1 [i_1] [(unsigned short)1])) + (2147483647))) << (((arr_24 [(short)7] [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_1] [i_1]) - (3184651674U)))))));
                        var_35 = ((/* implicit */int) ((((/* implicit */long long int) arr_24 [i_10 - 2] [i_10 + 1] [i_10] [i_10] [i_10] [i_10])) <= (arr_27 [i_3] [i_3] [i_3] [i_3])));
                        arr_32 [i_1] [i_2 - 2] [i_1] [i_10] = ((/* implicit */_Bool) ((arr_24 [i_10 - 3] [i_10 - 3] [i_10 - 1] [i_10 - 3] [i_10 - 3] [i_10 - 1]) + (arr_24 [7U] [i_10] [i_10 - 2] [i_10 - 1] [i_10 - 2] [i_10 + 2])));
                        /* LoopSeq 1 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            arr_35 [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) arr_20 [i_1] [i_1]);
                            var_36 = ((/* implicit */unsigned short) arr_11 [i_1]);
                        }
                    }
                    for (short i_12 = 0; i_12 < 16; i_12 += 1) 
                    {
                        var_37 = ((((/* implicit */long long int) ((((/* implicit */int) arr_20 [i_1] [i_1])) & (((/* implicit */int) arr_10 [i_1]))))) ^ (arr_22 [i_2 - 2] [i_2 + 3] [i_2] [i_2 + 2] [i_2] [i_2 + 3] [i_2]));
                        var_38 = ((/* implicit */_Bool) ((4152995236989666244LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-3785)))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_42 [i_1] [i_1] [i_1] [i_1] [i_3] [i_13] = ((/* implicit */unsigned long long int) arr_39 [i_1] [i_2 - 2] [i_3] [i_13]);
                        var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [i_2 + 1])) ? (arr_22 [i_13] [i_13] [i_13] [i_13] [i_2 + 1] [i_2 + 1] [i_2 + 1]) : (arr_22 [i_13] [i_2 - 3] [i_13] [i_13] [i_13] [i_13] [i_2 - 3])));
                        /* LoopSeq 3 */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_40 ^= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)49500))) / (-4152995236989666267LL)));
                            arr_45 [i_1] [i_1] [i_1] [i_3] [i_13] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -4152995236989666244LL)) ? (6636567026001611695ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            arr_46 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_31 [i_1] [i_1] [i_2 - 1] [(_Bool)1]);
                            arr_47 [i_1] [i_2 + 3] [i_3] [i_1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)1)) - (((/* implicit */int) (short)1285))));
                        }
                        for (unsigned long long int i_15 = 0; i_15 < 16; i_15 += 3) 
                        {
                            var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [(_Bool)1])) >> (((/* implicit */int) arr_20 [14U] [14U])))))));
                            arr_51 [i_1] [i_1] [i_1] [(_Bool)1] [i_1] [1LL] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [i_1] [(signed char)15] [i_2 + 3] [i_1])) ? (((/* implicit */int) arr_30 [i_1] [i_2 - 2] [i_2 + 1] [i_2 - 3])) : (((/* implicit */int) arr_30 [i_1] [i_2 + 1] [i_2] [i_2 + 3]))));
                            arr_52 [i_1] [i_15] [(short)8] [i_3] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_8 [i_1] [i_2 + 3] [i_1] [i_1])) - (((/* implicit */int) arr_50 [i_1] [i_3] [i_2 + 1] [i_2] [i_1]))));
                            var_42 = ((/* implicit */_Bool) arr_12 [i_1] [i_1]);
                            arr_53 [i_1] [i_1] [i_3] [i_1] [i_3] = (i_1 % 2 == 0) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_1] [i_2 - 1] [i_2 + 2] [i_2 + 1])) >> (((arr_28 [i_2 - 1] [i_2 - 3] [i_1] [i_2 - 1] [i_2 + 2]) + (7540409976755462421LL)))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_1] [i_2 - 1] [i_2 + 2] [i_2 + 1])) >> (((((arr_28 [i_2 - 1] [i_2 - 3] [i_1] [i_2 - 1] [i_2 + 2]) + (7540409976755462421LL))) - (254859573749489636LL))))));
                        }
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            arr_56 [i_1] [i_1] [i_2 - 3] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((arr_28 [5U] [i_2 + 3] [i_1] [(_Bool)1] [(_Bool)1]) / (arr_28 [i_1] [i_1] [i_1] [i_13] [i_16])));
                            var_43 += ((/* implicit */_Bool) arr_49 [i_2] [i_2] [i_2] [(signed char)14] [i_2] [i_2 + 2]);
                            arr_57 [(_Bool)1] [i_2] [i_3] [i_1] [i_13] [i_16] [i_16] = ((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_1] [i_1] [i_2 - 2] [i_2 + 1])) * (((/* implicit */int) arr_8 [i_1] [i_1] [i_2 - 3] [i_2 - 1]))));
                        }
                    }
                    arr_58 [i_3] [i_2] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_4 [i_1]);
                    /* LoopNest 2 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        for (unsigned char i_18 = 0; i_18 < 16; i_18 += 3) 
                        {
                            {
                                var_44 = ((/* implicit */long long int) arr_36 [i_1] [i_17] [i_2] [i_1]);
                                var_45 *= ((/* implicit */short) ((((/* implicit */int) arr_10 [(_Bool)1])) / (((/* implicit */int) arr_10 [(_Bool)1]))));
                                arr_63 [i_1] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_48 [i_3] [i_3] [(unsigned char)1] [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */int) arr_50 [i_1] [i_1] [i_1] [i_1] [i_1])) : (arr_48 [i_18] [i_17] [i_3] [i_18] [i_18] [i_1] [i_2 + 3])));
                                var_46 = ((/* implicit */long long int) min((var_46), (((/* implicit */long long int) ((arr_4 [10U]) ? (((/* implicit */int) arr_49 [i_1] [i_2 - 1] [i_3] [(short)12] [i_1] [i_18])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_17] [i_2] [14ULL] [i_1])) && (arr_20 [i_1] [(_Bool)1])))))))));
                                var_47 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_18] [i_1] [i_1] [i_1])) - (((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_2 + 1] [i_2 - 1] [i_17] [i_17] [i_17] [i_17]))) : (((arr_23 [i_18] [3LL] [i_17] [12U] [i_3] [i_1] [i_1]) ? (((/* implicit */long long int) arr_38 [i_18] [i_1] [i_3] [i_17])) : (arr_33 [i_1] [i_17] [i_1] [(unsigned char)10] [i_1])))));
                            }
                        } 
                    } 
                    var_48 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (arr_17 [i_1] [i_3] [i_3] [(signed char)9] [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_3] [i_2 - 2] [i_1] [i_1] [(unsigned char)7] [i_1])))))) ? (((((/* implicit */int) arr_15 [i_1] [i_2 - 2] [i_2] [i_1] [i_3])) / (((/* implicit */int) arr_50 [i_3] [i_2 - 3] [i_2] [i_2] [i_1])))) : (arr_36 [i_2 + 1] [i_2 - 3] [i_2 + 2] [i_1])));
                }
            } 
        } 
        var_49 = ((/* implicit */unsigned short) ((arr_11 [i_1]) + (arr_11 [i_1])));
    }
    var_50 = ((/* implicit */short) max((((/* implicit */long long int) var_15)), (var_11)));
    var_51 ^= ((/* implicit */signed char) var_1);
}
