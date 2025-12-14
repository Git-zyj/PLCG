/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172301
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
    var_13 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_6))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned int) max((var_14), (arr_0 [i_0] [i_1 + 1])));
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) min((arr_1 [i_1 + 2]), (arr_1 [i_0 + 2]))))) / (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 2]))) ^ (arr_5 [i_1] [i_1 + 2] [i_1 + 2])))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 2; i_2 < 21; i_2 += 3) 
                {
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_0] [i_2])) ? (((/* implicit */int) ((arr_6 [i_0 - 1] [i_1 + 3] [i_2 - 2]) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 1] [i_2]))))))))) : (((/* implicit */int) ((arr_6 [i_0] [i_0 + 2] [i_2 - 1]) > (arr_6 [i_0] [i_0 + 1] [i_2 + 1])))))))));
                    var_17 *= ((/* implicit */int) min((((((/* implicit */_Bool) arr_4 [i_1 + 3] [(_Bool)1] [i_2 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1 + 1])))))) : (((((/* implicit */long long int) arr_7 [i_0 - 1] [(unsigned char)0] [6U])) + (arr_5 [i_0] [i_1] [i_2]))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) arr_7 [i_0 + 1] [i_0 + 1] [6LL])) * (arr_0 [i_0] [i_1 - 1]))))));
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) arr_0 [i_0] [i_1]))));
                    var_19 = ((/* implicit */signed char) arr_7 [i_0 - 1] [i_0 - 1] [i_1]);
                    var_20 = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) arr_5 [(unsigned char)20] [(unsigned char)20] [(unsigned char)20])), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 + 2]))) : (arr_2 [i_2] [i_1] [i_0]))))) + (((/* implicit */unsigned long long int) ((arr_0 [i_0 - 1] [i_1 + 3]) ^ (arr_4 [i_0 + 1] [i_1] [i_2 - 2]))))));
                }
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) var_9);
    /* LoopSeq 3 */
    for (int i_3 = 2; i_3 < 12; i_3 += 2) 
    {
        var_22 = ((/* implicit */unsigned int) ((arr_6 [i_3] [i_3] [i_3 - 2]) | (((/* implicit */long long int) arr_3 [i_3] [i_3 - 1] [i_3]))));
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) arr_8 [i_3]))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_13 [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (~(arr_9 [i_4])))) ? (((/* implicit */long long int) arr_8 [i_4])) : (arr_6 [i_4] [i_4] [i_4]))) & (arr_6 [i_4] [i_4] [i_4])));
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_18 [i_4] = ((/* implicit */unsigned char) min((((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_6]))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_4] [i_5] [i_6]))))))), (((/* implicit */int) arr_1 [i_6]))));
                    var_24 += ((/* implicit */unsigned long long int) arr_6 [i_4] [i_5] [i_6]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_7 = 3; i_7 < 7; i_7 += 4) 
        {
            for (long long int i_8 = 0; i_8 < 10; i_8 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 10; i_9 += 1) 
                    {
                        for (int i_10 = 2; i_10 < 7; i_10 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_10 - 1] [i_7 + 2] [i_7 + 1]))))), (arr_3 [i_10 - 1] [i_7 - 1] [i_7 - 3]))))));
                                arr_31 [i_4] [i_4] = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_9 [i_4])), (min((((/* implicit */unsigned long long int) ((arr_30 [i_10 + 1] [i_9] [i_8] [i_7] [i_7] [i_4]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_4])))))), (arr_24 [i_4])))));
                                arr_32 [i_8] [i_8] [i_4] [i_4] = ((/* implicit */long long int) ((arr_30 [i_4] [i_7] [i_8] [i_9] [i_8] [i_10 - 2]) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_0 [i_4] [i_7])) > (arr_2 [i_4] [i_7 + 3] [18])))))));
                            }
                        } 
                    } 
                    var_26 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) arr_30 [i_4] [i_4] [i_4] [i_7 + 2] [i_4] [i_8])), (arr_2 [i_4] [i_7 + 3] [i_8]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_29 [i_7] [i_7] [i_7] [i_4] [i_4])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_4] [i_4])) ? (arr_12 [i_4]) : (((/* implicit */int) arr_21 [i_8] [i_8]))))) >= (arr_26 [i_4] [i_7] [(_Bool)0] [i_8]))))) : ((((!(((/* implicit */_Bool) arr_19 [i_4] [i_4] [i_4])))) ? (arr_4 [i_7] [(short)0] [(short)0]) : (((/* implicit */unsigned int) arr_12 [i_7]))))));
                    var_27 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_23 [i_4] [i_4])) ? (arr_8 [i_4]) : (arr_15 [8U]))), (((/* implicit */unsigned int) ((arr_19 [i_8] [i_7] [i_4]) > (arr_4 [i_4] [(_Bool)1] [i_8]))))))) ? (min((((/* implicit */unsigned int) arr_27 [i_7] [6] [i_7 + 2])), (arr_3 [i_7 - 1] [i_7 - 1] [i_7 - 1]))) : (((((/* implicit */_Bool) arr_0 [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_7 - 3])))))) : (((((/* implicit */_Bool) arr_25 [i_4] [i_4] [i_4] [8U])) ? (arr_25 [i_4] [i_4] [i_8] [0]) : (arr_30 [(unsigned char)6] [(unsigned char)6] [i_7 + 1] [i_7] [i_7] [(unsigned char)6])))))));
                    arr_33 [i_4] [i_4] [i_8] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_4] [i_4] [3LL] [i_7 + 2] [i_4] [i_7 + 2]))));
                    var_28 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_7 - 3] [i_7 - 1] [i_7 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_14 [0U] [i_8]), (((/* implicit */unsigned char) arr_21 [i_8] [i_8])))))) : (max((((/* implicit */unsigned int) arr_29 [i_4] [i_7] [i_8] [i_8] [i_7 - 1])), (arr_26 [i_8] [i_8] [(unsigned char)2] [i_8])))))) ? (arr_8 [i_4]) : (min((arr_3 [i_7 - 3] [i_7 + 3] [i_7]), (arr_3 [i_7 - 3] [i_7 + 3] [(unsigned short)17])))));
                }
            } 
        } 
    }
    for (short i_11 = 2; i_11 < 14; i_11 += 2) 
    {
        arr_36 [i_11] [i_11] = ((/* implicit */_Bool) min((arr_4 [i_11 + 1] [i_11] [i_11 - 2]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_11 + 2] [i_11] [i_11 + 2])))))));
        /* LoopSeq 1 */
        for (unsigned short i_12 = 0; i_12 < 17; i_12 += 4) 
        {
            var_29 = (!((!(((/* implicit */_Bool) ((arr_6 [i_11] [i_12] [i_11]) + (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_12])))))))));
            var_30 += ((/* implicit */_Bool) arr_34 [13ULL]);
        }
    }
}
