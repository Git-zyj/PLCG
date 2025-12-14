/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125643
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 10; i_2 += 3) /* same iter space */
                {
                    arr_10 [7LL] [7LL] [7LL] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (min((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) arr_5 [i_0] [i_1] [(short)4])) : (arr_9 [i_1]))), (max((arr_8 [i_0] [i_1] [i_2]), (arr_9 [i_0]))))) : (((/* implicit */long long int) arr_0 [i_2]))));
                    arr_11 [i_0] [i_0] [i_0] [8U] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0] [i_1] [8ULL]))))))))));
                    arr_12 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [(_Bool)1] [i_0])) ? (arr_9 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned short)4])))))))));
                }
                for (short i_3 = 0; i_3 < 10; i_3 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        for (signed char i_5 = 4; i_5 < 7; i_5 += 4) 
                        {
                            {
                                arr_19 [i_0] [i_3] [i_4] = ((/* implicit */signed char) arr_5 [i_5] [i_4] [i_0]);
                                var_18 = (!(((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0])));
                                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (+(arr_7 [i_1] [i_3] [i_4] [i_3]))))))), (((((/* implicit */_Bool) ((signed char) arr_18 [i_0] [i_0]))) ? (((/* implicit */long long int) (+(arr_13 [i_0] [i_4])))) : (arr_6 [i_0] [i_3] [i_4]))))))));
                            }
                        } 
                    } 
                    arr_20 [i_0] = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_3] [i_3]);
                }
                for (short i_6 = 0; i_6 < 10; i_6 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (short i_7 = 2; i_7 < 8; i_7 += 1) 
                    {
                        var_20 -= ((/* implicit */unsigned char) ((unsigned short) ((unsigned int) arr_9 [i_0])));
                        var_21 = ((/* implicit */unsigned long long int) (~((+(arr_5 [3LL] [i_0] [3LL])))));
                        var_22 = ((/* implicit */int) arr_21 [i_0] [i_1] [i_6] [9U]);
                    }
                    /* vectorizable */
                    for (long long int i_8 = 4; i_8 < 8; i_8 += 2) 
                    {
                        arr_27 [i_0] [i_1] [i_6] [i_1] = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_6] [i_8]);
                        arr_28 [8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_1] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_6]))) : (((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_0] [i_0] [i_6] [i_8] [i_0]))) : (arr_13 [i_1] [i_8])))));
                        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((unsigned short) (-(((/* implicit */int) arr_24 [(signed char)0] [(unsigned char)3] [i_6] [i_6] [i_6]))))))));
                    }
                    arr_29 [i_6] [i_1] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_0])) ? (arr_14 [i_0] [i_6]) : ((~(arr_6 [i_0] [i_0] [i_0])))))) ? ((-(((unsigned int) arr_24 [i_0] [i_0] [i_1] [i_6] [i_6])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_1] [i_1])))));
                }
                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) arr_5 [i_0] [i_0] [i_1]))));
            }
        } 
    } 
    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) min((var_15), (((/* implicit */unsigned short) var_9)))))))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
    /* LoopNest 2 */
    for (short i_9 = 3; i_9 < 23; i_9 += 4) 
    {
        for (unsigned short i_10 = 0; i_10 < 24; i_10 += 1) 
        {
            {
                arr_36 [i_9] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) min((((/* implicit */int) arr_30 [i_9] [i_10])), (arr_32 [i_9] [(signed char)17]))))))));
                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_9 - 2] [13ULL])) ? (((/* implicit */int) arr_31 [i_10])) : (((/* implicit */int) arr_33 [i_9] [i_9]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_34 [(unsigned short)5] [(unsigned short)5])) ? (((/* implicit */int) arr_33 [i_9] [i_10])) : (((/* implicit */int) arr_31 [i_9]))))) : ((-(arr_34 [i_9] [6LL])))))) ? (((/* implicit */unsigned long long int) ((int) ((unsigned char) arr_34 [i_9] [i_10])))) : (arr_35 [i_10])));
            }
        } 
    } 
}
