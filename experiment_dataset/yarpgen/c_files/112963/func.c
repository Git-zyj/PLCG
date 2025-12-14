/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112963
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
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) ((arr_0 [i_0] [i_0 - 2]) >= (arr_0 [i_0] [i_0 + 1])));
        var_13 = ((/* implicit */unsigned short) var_0);
        /* LoopSeq 4 */
        for (unsigned int i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            var_14 = ((/* implicit */long long int) ((((arr_0 [i_0 + 1] [i_1 - 3]) != (var_1))) ? (var_10) : (((/* implicit */int) arr_1 [i_1 - 1] [i_0 - 2]))));
            arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) == (arr_0 [i_1 - 1] [i_0 + 2]))))) : (max((((/* implicit */unsigned long long int) var_6)), (arr_0 [i_1 + 1] [i_0 + 2])))));
        }
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            arr_7 [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */long long int) var_10)))) / (((/* implicit */long long int) ((/* implicit */int) var_7)))));
            arr_8 [i_0] [i_2] = ((/* implicit */long long int) var_4);
            var_15 ^= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) * (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0 - 1]))) : (arr_3 [i_0] [i_2] [i_2])))));
        }
        for (short i_3 = 0; i_3 < 20; i_3 += 1) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_8)) : (arr_0 [i_0 + 2] [i_0 - 1])))));
            arr_11 [i_3] = max((((/* implicit */unsigned long long int) var_0)), (var_9));
            var_17 = ((/* implicit */unsigned short) max((var_9), (((/* implicit */unsigned long long int) var_2))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_4 = 2; i_4 < 18; i_4 += 1) 
            {
                arr_16 [(unsigned char)2] [(unsigned char)2] [i_3] = arr_15 [i_4 - 1] [i_4 + 1] [i_4 + 1];
                arr_17 [17] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_6 [i_0 + 1] [i_0])) : (((/* implicit */int) arr_9 [(signed char)5] [i_3] [(unsigned short)6]))));
            }
            for (signed char i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                arr_21 [(unsigned short)19] [i_3] [i_3] [i_5] = var_4;
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) arr_15 [i_0 - 1] [i_0 - 2] [i_0 + 2])) : (((/* implicit */int) arr_15 [i_0 + 1] [i_0 - 2] [i_0 + 2]))));
            }
        }
        for (short i_6 = 0; i_6 < 20; i_6 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */int) arr_0 [i_0] [(unsigned char)13]);
            arr_24 [i_6] |= ((/* implicit */unsigned char) var_2);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_7 = 0; i_7 < 20; i_7 += 1) 
            {
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) + (((/* implicit */int) arr_20 [i_0] [i_0 - 1]))));
                arr_28 [i_0] [i_0] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) == (((/* implicit */int) arr_23 [i_7] [i_6] [i_0]))));
                arr_29 [(unsigned char)8] [i_6] [i_7] = ((/* implicit */unsigned long long int) arr_1 [i_0 - 2] [i_0 - 1]);
            }
            var_21 = ((/* implicit */int) max((var_1), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3)))))));
        }
        arr_30 [i_0] = ((/* implicit */unsigned long long int) var_5);
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) & (((/* implicit */int) arr_25 [16LL] [i_0 - 2] [4LL]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0] [i_0 - 2] [4LL]))) : (min((((/* implicit */unsigned long long int) arr_25 [(unsigned char)4] [i_0 - 2] [(unsigned char)4])), (var_1)))));
    }
    for (unsigned short i_8 = 1; i_8 < 13; i_8 += 1) 
    {
        arr_33 [i_8] = ((/* implicit */unsigned char) var_9);
        var_23 = ((/* implicit */unsigned short) var_10);
    }
    var_24 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((var_8) > (((((/* implicit */long long int) ((/* implicit */int) var_6))) | (var_11)))))), (var_2)));
    var_25 = ((/* implicit */long long int) ((var_10) == (((/* implicit */int) var_0))));
    var_26 = var_8;
    /* LoopNest 3 */
    for (unsigned long long int i_9 = 4; i_9 < 11; i_9 += 1) 
    {
        for (unsigned short i_10 = 3; i_10 < 13; i_10 += 1) 
        {
            for (int i_11 = 1; i_11 < 13; i_11 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 2; i_12 < 10; i_12 += 1) 
                    {
                        for (signed char i_13 = 0; i_13 < 14; i_13 += 1) 
                        {
                            {
                                var_27 = min((((/* implicit */unsigned long long int) var_2)), (var_9));
                                arr_45 [i_9] [i_13] [i_11] [(unsigned char)6] [i_10] [i_12] = ((/* implicit */long long int) var_3);
                                arr_46 [i_9] [i_9] [i_9] [i_10] [i_9] = ((/* implicit */unsigned short) arr_40 [i_13] [i_12] [(unsigned short)5] [(unsigned short)12]);
                                arr_47 [i_13] [i_10] [i_12] [i_12] [i_11] [i_10] [i_9] = ((/* implicit */unsigned short) min((arr_6 [i_9 + 3] [i_11 + 1]), (arr_6 [i_9 - 4] [i_11 - 1])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 14; i_14 += 1) 
                    {
                        for (unsigned char i_15 = 0; i_15 < 14; i_15 += 1) 
                        {
                            {
                                arr_53 [i_10] [(unsigned char)7] [i_10] = ((/* implicit */signed char) arr_32 [i_9]);
                                arr_54 [(unsigned short)11] [(unsigned char)1] [i_11] [i_10] [i_9] [i_10 - 2] [i_9] = ((/* implicit */long long int) var_0);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
