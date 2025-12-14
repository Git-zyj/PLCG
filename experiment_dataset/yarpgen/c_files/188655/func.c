/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188655
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
    var_19 = ((/* implicit */unsigned int) ((var_11) <= (2843549268U)));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    {
                        arr_9 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)11)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-18)) ? (max((((/* implicit */unsigned long long int) arr_8 [i_1])), (arr_0 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((arr_8 [i_1]) ^ (((/* implicit */long long int) 67108863U))))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_4 = 3; i_4 < 11; i_4 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_0] [i_0]);
                            var_21 = ((/* implicit */unsigned long long int) arr_8 [i_1]);
                            arr_12 [i_0] [i_1] [i_1] [i_1] [i_4] = ((/* implicit */unsigned long long int) arr_2 [i_1] [i_1] [i_1]);
                            arr_13 [i_0] [i_0] [i_1] [i_0] [i_3] [i_1] = ((/* implicit */unsigned int) (~(arr_10 [i_4 - 2])));
                        }
                        var_22 = ((/* implicit */unsigned char) 3U);
                        var_23 = ((/* implicit */int) arr_8 [i_1]);
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (-9223372036854775807LL - 1LL)))));
        /* LoopSeq 1 */
        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            var_25 = ((/* implicit */long long int) (~((~(((/* implicit */int) arr_6 [4ULL]))))));
            var_26 = ((/* implicit */unsigned int) ((arr_8 [8]) ^ (((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [0LL])) && (((/* implicit */_Bool) arr_15 [i_5])))))) : (arr_8 [4U])))));
            arr_16 [i_5] = ((/* implicit */unsigned int) (short)15967);
        }
    }
    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_7 = 2; i_7 < 20; i_7 += 1) 
        {
            for (unsigned char i_8 = 0; i_8 < 21; i_8 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 20; i_9 += 3) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 21; i_10 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */short) arr_30 [i_9] [i_9] [i_8] [i_6] [i_6]);
                                arr_32 [i_6] [i_6] = ((/* implicit */unsigned char) arr_25 [2ULL] [i_7] [2ULL] [i_7]);
                                arr_33 [i_6] [i_6] [i_8] [20] [i_10] = ((/* implicit */unsigned char) arr_28 [i_6] [i_6] [i_8] [i_8] [i_8]);
                                var_28 = ((/* implicit */unsigned short) arr_17 [12] [12]);
                            }
                        } 
                    } 
                    var_29 = ((((/* implicit */_Bool) ((arr_17 [i_7 - 1] [i_7 - 1]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)235)))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)120)) ? (arr_21 [i_6] [i_6] [i_6]) : (arr_21 [i_6] [i_6] [i_6])))) | (max((arr_26 [i_6] [13] [i_6] [i_6]), (((/* implicit */unsigned long long int) arr_19 [i_6] [i_6])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_7 - 2] [i_7 - 2] [i_7 - 2])) ? (arr_31 [i_7 - 2] [i_7 - 1] [i_7 - 2]) : (arr_31 [i_7 - 2] [i_7 - 2] [i_7 - 1])))));
                }
            } 
        } 
        var_30 = ((/* implicit */signed char) ((((((/* implicit */int) arr_20 [i_6])) + (((/* implicit */int) arr_20 [i_6])))) * (((((/* implicit */_Bool) arr_18 [i_6] [i_6])) ? (((/* implicit */int) arr_18 [i_6] [i_6])) : (((/* implicit */int) arr_18 [i_6] [i_6]))))));
    }
    for (unsigned char i_11 = 2; i_11 < 11; i_11 += 1) 
    {
        arr_36 [i_11] = ((/* implicit */short) ((max((arr_22 [i_11 + 1]), (((/* implicit */unsigned long long int) arr_21 [i_11 + 1] [i_11] [8])))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)42)) <= (((/* implicit */int) arr_6 [i_11]))))))));
        var_31 = ((min((arr_10 [i_11]), (arr_10 [i_11]))) | (((((/* implicit */_Bool) arr_26 [i_11] [i_11 - 1] [i_11] [i_11])) ? (((/* implicit */int) arr_20 [i_11])) : (((/* implicit */int) (unsigned short)51582)))));
        var_32 = ((/* implicit */long long int) arr_21 [i_11] [i_11] [i_11]);
        var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_11] [i_11 - 2])) ? (arr_17 [i_11 + 1] [i_11 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_11] [i_11 - 2] [i_11 - 1] [i_11 - 1] [i_11 - 2])))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_17 [i_11] [i_11 - 2])) & (arr_26 [i_11] [i_11 - 2] [i_11 - 1] [i_11 - 1]))))));
    }
    var_34 |= ((/* implicit */unsigned long long int) max((max(((((-9223372036854775807LL - 1LL)) ^ (((/* implicit */long long int) 20U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)39)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)201))) : (32767U)))))), (((/* implicit */long long int) (-2147483647 - 1)))));
}
