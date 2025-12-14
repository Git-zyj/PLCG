/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120689
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned char) ((((int) ((var_9) | (((/* implicit */long long int) ((/* implicit */int) var_2)))))) | (((/* implicit */int) ((((/* implicit */_Bool) 2235366732181435216LL)) && (((/* implicit */_Bool) (short)-3469)))))));
                    var_10 ^= ((/* implicit */unsigned char) ((unsigned short) (-(((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) (short)3469))) : (var_9))))));
                    var_11 &= ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1 - 1]))) : (arr_7 [i_0] [(signed char)17] [i_1 + 2]))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? ((~(((/* implicit */int) ((var_4) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))) : (((((/* implicit */int) ((unsigned short) (signed char)-1))) * (((/* implicit */int) arr_0 [i_1 - 1] [i_1 + 2])))))))));
                        arr_13 [i_3] [12LL] [i_1] [i_0] = min((((((long long int) arr_3 [i_0])) / (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)17), (((/* implicit */unsigned short) (short)-3469)))))))), (((((/* implicit */_Bool) (unsigned short)6694)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 + 1] [i_1 - 1]))) : (9223372036854775807LL))));
                        arr_14 [i_3] = ((/* implicit */long long int) -1);
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 1; i_4 < 18; i_4 += 4) 
                    {
                        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) (-(134217216ULL))))));
                        var_14 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(((/* implicit */int) (short)120))))) ^ (var_9)));
                        arr_18 [2LL] [2LL] [i_2] = ((/* implicit */unsigned char) var_1);
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 2; i_5 < 19; i_5 += 3) 
    {
        for (short i_6 = 1; i_6 < 22; i_6 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_7 = 4; i_7 < 19; i_7 += 4) 
                {
                    for (unsigned char i_8 = 0; i_8 < 23; i_8 += 4) 
                    {
                        {
                            var_15 = arr_22 [i_6 - 1] [i_6] [i_7 - 4];
                            arr_31 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */int) max((((/* implicit */long long int) max((min((((/* implicit */int) (unsigned short)65535)), (1480409780))), (((((/* implicit */int) var_0)) * (((/* implicit */int) arr_21 [(signed char)14] [(unsigned short)0] [(unsigned short)0]))))))), (min((((/* implicit */long long int) arr_29 [i_6] [i_6] [(signed char)20] [i_6 - 1] [i_6] [i_7 - 4])), (arr_30 [i_7 + 3] [i_7 + 4] [i_7] [i_7 - 4] [i_7 - 4])))));
                        }
                    } 
                } 
                var_16 ^= ((/* implicit */signed char) (+(var_9)));
                /* LoopSeq 1 */
                for (signed char i_9 = 0; i_9 < 23; i_9 += 4) 
                {
                    /* LoopSeq 2 */
                    for (int i_10 = 2; i_10 < 22; i_10 += 3) 
                    {
                        var_17 = ((/* implicit */signed char) max((arr_19 [i_5 - 2]), (arr_36 [3LL] [i_9] [i_6] [i_10 + 1] [i_10] [(signed char)4])));
                        arr_37 [i_9] [(unsigned short)15] [i_9] [i_6] = ((/* implicit */long long int) ((int) ((((var_1) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_10] [i_6] [i_10] [i_10] [i_5 + 3] [i_10]))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17))))));
                        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((unsigned short) (!(((/* implicit */_Bool) var_8))))))));
                    }
                    for (unsigned char i_11 = 1; i_11 < 22; i_11 += 4) 
                    {
                        var_19 = ((unsigned short) ((unsigned short) min((((/* implicit */unsigned long long int) (unsigned char)68)), (var_1))));
                        var_20 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-109)))))));
                        var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_6])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_6])))))), ((~(var_7)))));
                        arr_41 [i_6] [i_6] [i_6] [i_11 + 1] = ((/* implicit */int) ((unsigned short) ((((((/* implicit */_Bool) var_0)) ? (arr_39 [i_11] [i_6] [i_6] [i_5 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [i_5] [i_5] [i_5] [i_5] [i_5 + 4])) ? (((/* implicit */int) arr_26 [i_9])) : (((/* implicit */int) (unsigned short)6694))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 2; i_12 < 20; i_12 += 4) 
                    {
                        for (unsigned short i_13 = 1; i_13 < 21; i_13 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) var_0);
                                var_23 = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [(unsigned char)20] [i_6 - 1] [i_6] [i_12 - 1]))))), (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) min((var_6), (var_6)))) : (((/* implicit */int) var_5))))));
                            }
                        } 
                    } 
                    arr_46 [i_5] [i_5] [i_6] [i_5] = ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-3469)) ? (max((-1), (((/* implicit */int) (signed char)-41)))) : (((/* implicit */int) var_2))))) * (((((/* implicit */long long int) (-(((/* implicit */int) var_6))))) % (((((/* implicit */_Bool) arr_28 [i_5] [(unsigned short)16] [i_9])) ? (arr_23 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))))));
                    /* LoopNest 2 */
                    for (signed char i_14 = 0; i_14 < 23; i_14 += 4) 
                    {
                        for (unsigned char i_15 = 0; i_15 < 23; i_15 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) ((((_Bool) arr_23 [i_6])) || (((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_19 [i_5])), (var_4))), (((/* implicit */unsigned long long int) 3003470033U)))))));
                                var_25 = ((/* implicit */signed char) max((((((arr_40 [i_14] [i_14] [i_9] [i_6 - 1]) + (2147483647))) << (((((/* implicit */int) var_5)) - (18535))))), ((~(arr_40 [i_6 + 1] [i_9] [i_6 + 1] [i_6 + 1])))));
                                var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (+(((/* implicit */int) (short)2047)))))));
                            }
                        } 
                    } 
                    arr_52 [i_5] [i_6] [i_9] [i_6] = ((/* implicit */unsigned short) var_0);
                }
                arr_53 [i_6] = ((/* implicit */long long int) arr_27 [i_6]);
                var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((((((/* implicit */_Bool) (unsigned char)57)) ? (((/* implicit */int) (signed char)86)) : (((/* implicit */int) (signed char)6)))) >= (((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) (signed char)-16))))))) ? ((-(((/* implicit */int) (short)3468)))) : (((/* implicit */int) var_5)))))));
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned char) ((((var_4) <= (((unsigned long long int) var_8)))) ? (((((var_8) + (2147483647))) >> (((max((((/* implicit */long long int) var_0)), (var_9))) - (6399599673104762796LL))))) : (((/* implicit */int) var_0))));
}
