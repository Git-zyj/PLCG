/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162169
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
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0])))))) ^ (arr_1 [i_0])));
                    arr_6 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_0]))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_3 [i_2] [i_1] [i_0])), (arr_1 [i_1])))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [(short)1])) || (((/* implicit */_Bool) var_10)))))))));
                    var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((short) min((arr_3 [i_0] [i_1] [i_2]), (arr_3 [i_0] [i_1] [i_1])))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (short i_3 = 0; i_3 < 10; i_3 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) max((((unsigned long long int) (-(((/* implicit */int) arr_2 [i_3]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [2ULL] [i_3])) >> (((((/* implicit */int) arr_4 [i_3] [i_3])) - (53)))))))))));
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3] [i_3]))) <= ((~(arr_0 [i_3]))))))) : (((((arr_9 [i_3]) <= (((/* implicit */long long int) ((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : ((-(arr_1 [i_3])))))));
    }
    for (short i_4 = 0; i_4 < 10; i_4 += 3) /* same iter space */
    {
        arr_14 [i_4] = ((/* implicit */unsigned int) arr_10 [i_4]);
        var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_8 [(signed char)0])), (arr_0 [(short)20]))))));
    }
    for (short i_5 = 2; i_5 < 8; i_5 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_5 - 2] [i_5 + 2] [i_5 + 2] [i_5]))) : (arr_0 [i_5]))) >> (((((((/* implicit */_Bool) arr_0 [i_5])) ? (((/* implicit */int) arr_5 [i_5 - 2] [i_5 + 3] [i_5 - 2] [i_5])) : (((/* implicit */int) arr_5 [i_5 - 1] [i_5 + 3] [i_5 - 1] [i_5])))) - (75)))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            /* LoopSeq 2 */
            for (signed char i_7 = 0; i_7 < 11; i_7 += 3) 
            {
                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) arr_1 [i_5]))));
                arr_25 [i_5] [i_7] [i_7] = (~(arr_23 [i_5 + 2]));
                arr_26 [i_7] [i_7] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_5 + 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_6] [i_6])) || (((/* implicit */_Bool) var_2))))) : ((-(((/* implicit */int) var_10))))));
            }
            for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 3) 
            {
                var_19 -= ((/* implicit */signed char) arr_20 [i_5] [i_5]);
                arr_31 [i_8] [i_8] = ((/* implicit */int) ((signed char) var_4));
            }
            var_20 = ((signed char) (!(arr_21 [i_5] [i_6] [i_6] [i_6])));
        }
        /* vectorizable */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_10 = 3; i_10 < 10; i_10 += 2) /* same iter space */
            {
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_5 + 3] [i_10 - 3])) ? (((/* implicit */int) arr_4 [i_5 - 2] [i_10 + 1])) : (((/* implicit */int) arr_4 [i_5 - 1] [i_10 + 1]))));
                var_22 = ((/* implicit */signed char) arr_22 [i_9] [i_9] [i_10]);
            }
            for (unsigned long long int i_11 = 3; i_11 < 10; i_11 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned int i_12 = 2; i_12 < 10; i_12 += 3) 
                {
                    var_23 = ((/* implicit */signed char) ((arr_21 [i_12 + 1] [i_12] [i_11 - 1] [i_12 - 1]) ? (((/* implicit */int) arr_22 [i_12 - 2] [i_5 - 2] [i_11 - 1])) : (((((/* implicit */_Bool) arr_27 [0LL])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))));
                    arr_41 [i_9] = ((/* implicit */signed char) (!(arr_21 [i_5] [i_9] [i_11] [i_9])));
                }
                arr_42 [i_5] [i_9] [i_11 - 2] = ((/* implicit */int) (((~(arr_28 [i_5]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
            }
            /* LoopSeq 1 */
            for (signed char i_13 = 0; i_13 < 11; i_13 += 3) 
            {
                var_24 = ((((/* implicit */_Bool) arr_19 [i_5 + 3] [(short)4] [i_5])) ? (((/* implicit */int) arr_33 [i_5 + 1] [i_5 + 3] [i_5 + 1])) : ((-(((/* implicit */int) arr_16 [(signed char)4])))));
                arr_47 [i_5] [i_5] [i_5] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_0))) ? (((arr_20 [i_9] [i_9]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_5] [i_9]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) + (((/* implicit */int) arr_24 [i_13])))))));
                var_25 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_13] [i_9] [i_9])) || (((/* implicit */_Bool) var_8)))))));
                arr_48 [i_5] [i_9] [i_5] |= ((((/* implicit */unsigned long long int) arr_20 [i_5 + 2] [i_5 + 2])) + (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_23 [i_9]))));
                arr_49 [4] [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) arr_45 [i_5 + 2] [i_9] [i_9] [i_13])) ? (((/* implicit */int) arr_45 [i_5] [i_5] [i_5] [i_13])) : (((/* implicit */int) arr_45 [7LL] [i_5] [i_9] [i_13]))));
            }
            arr_50 [i_5] [(short)8] [i_9] = ((/* implicit */signed char) arr_3 [i_9] [i_9] [0]);
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (arr_30 [i_5] [i_5] [i_5 - 1] [i_5 - 1]) : (arr_30 [i_5] [i_5] [i_5 + 3] [(signed char)6])));
        }
        /* vectorizable */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
        {
            arr_53 [i_5] [(signed char)2] [i_5] = ((/* implicit */signed char) (+(var_3)));
            arr_54 [i_5] = ((/* implicit */unsigned char) arr_23 [i_5 + 1]);
        }
        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) var_7))));
    }
}
