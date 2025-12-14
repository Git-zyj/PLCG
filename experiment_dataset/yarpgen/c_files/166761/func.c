/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166761
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
    /* LoopSeq 4 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = max((((/* implicit */signed char) ((var_0) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) >= (((/* implicit */int) (unsigned char)201))))))))), (arr_1 [i_0 - 1]));
        var_16 -= ((((/* implicit */int) arr_0 [6ULL])) ^ ((~(((/* implicit */int) var_5)))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0])))) - (((/* implicit */int) ((((/* implicit */int) (unsigned char)201)) != (((/* implicit */int) (unsigned char)201)))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 10; i_1 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_1])) ^ (((/* implicit */int) arr_0 [i_1]))));
        arr_7 [i_1] = (~(((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_5 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((long long int) ((((_Bool) var_0)) && (((((/* implicit */_Bool) arr_0 [i_2])) || (var_8))))));
        var_19 += ((/* implicit */unsigned int) ((int) ((_Bool) arr_8 [14U])));
    }
    for (unsigned char i_3 = 4; i_3 < 13; i_3 += 1) 
    {
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (unsigned char)80))));
        arr_14 [i_3 + 1] [i_3] = ((/* implicit */unsigned short) ((_Bool) (-(((/* implicit */int) arr_13 [i_3 - 4])))));
        var_21 = arr_9 [i_3 + 2];
    }
    var_22 = ((var_10) != (((/* implicit */unsigned long long int) var_15)));
    var_23 -= ((/* implicit */int) var_2);
    /* LoopNest 3 */
    for (signed char i_4 = 2; i_4 < 21; i_4 += 4) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned int i_6 = 2; i_6 < 21; i_6 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_7 = 0; i_7 < 22; i_7 += 4) /* same iter space */
                    {
                        var_24 -= ((/* implicit */unsigned long long int) arr_18 [(short)13] [(_Bool)0]);
                        /* LoopSeq 2 */
                        for (signed char i_8 = 0; i_8 < 22; i_8 += 1) 
                        {
                            arr_27 [i_4] = ((/* implicit */short) max((((/* implicit */long long int) (~(((/* implicit */int) ((var_0) < (arr_25 [i_4] [i_5] [i_6] [(unsigned short)14]))))))), (max((((/* implicit */long long int) var_12)), (arr_19 [i_7] [i_6 + 1])))));
                            arr_28 [i_4] [i_4] [(signed char)13] [(signed char)13] [i_7] [i_7] [i_8] = (_Bool)1;
                            arr_29 [i_4] = ((/* implicit */signed char) (unsigned char)187);
                            var_25 += ((/* implicit */_Bool) ((var_0) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) arr_21 [i_6 + 1] [i_4 - 1]))))))));
                            arr_30 [i_4] [i_4] [i_6 - 2] = ((arr_23 [i_4 + 1] [13U] [i_5] [i_6 - 1]) ^ (((((/* implicit */_Bool) arr_26 [3U] [3U] [i_4 - 1] [i_4 - 1] [i_6 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_4] [i_5] [i_4 - 2] [i_7] [i_6 - 2]))) : (arr_22 [i_4 - 2]))));
                        }
                        for (unsigned char i_9 = 3; i_9 < 21; i_9 += 1) 
                        {
                            arr_33 [i_4] [i_5] [i_5] [i_7] [i_7] = ((/* implicit */signed char) var_15);
                            arr_34 [i_6] [i_6] = ((/* implicit */signed char) var_4);
                            var_26 += ((/* implicit */unsigned short) ((int) ((arr_16 [i_4 - 1]) >> (((((/* implicit */int) max((((/* implicit */unsigned char) var_5)), (arr_31 [i_4] [16ULL] [16ULL] [i_7] [i_9])))) - (167))))));
                        }
                    }
                    /* vectorizable */
                    for (short i_10 = 0; i_10 < 22; i_10 += 4) /* same iter space */
                    {
                        var_27 ^= ((/* implicit */unsigned short) ((signed char) arr_32 [i_4 + 1] [10] [i_6 + 1]));
                        arr_37 [i_10] [i_4] [i_6] [i_5] [i_4] [i_4] &= ((/* implicit */unsigned short) ((var_1) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_4 + 1])))));
                        var_28 = ((((/* implicit */int) arr_15 [i_6 + 1])) - (((/* implicit */int) (_Bool)0)));
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_4 - 1]))) * (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) - (var_14)))));
                    }
                    /* vectorizable */
                    for (short i_11 = 0; i_11 < 22; i_11 += 4) /* same iter space */
                    {
                        var_30 *= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) % (arr_22 [2])));
                        arr_41 [i_4 + 1] [(unsigned char)10] = ((/* implicit */_Bool) (~(arr_21 [i_4 - 2] [i_4 + 1])));
                        arr_42 [i_11] [i_6 - 2] [i_6] [i_6] [(unsigned char)6] [(unsigned char)6] = ((/* implicit */short) (signed char)(-127 - 1));
                        var_31 = ((/* implicit */_Bool) max((var_31), (((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_4])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_31 [i_11] [i_5] [i_5] [(unsigned short)5] [i_4]))))) < (var_0)))));
                    }
                    var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)201)) >= ((-(((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) arr_40 [i_4 - 2] [i_5] [i_5] [i_5] [i_6 + 1] [i_6 - 1])))))))));
                    arr_43 [i_6] [i_5] [i_6] = ((((/* implicit */int) arr_31 [i_6] [i_5] [i_4] [i_4] [i_4])) != (((int) arr_39 [i_4 - 2] [i_4 - 2])));
                }
            } 
        } 
    } 
}
