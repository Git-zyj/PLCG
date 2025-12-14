/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151173
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
    for (unsigned long long int i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */signed char) arr_0 [i_0]);
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned int i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        {
                            arr_14 [i_3] [i_2] [(signed char)0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) (+(var_11)));
                            var_12 = ((/* implicit */long long int) min((var_12), (((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [i_2] [i_1 + 1]))) * (((long long int) min((var_9), (((/* implicit */unsigned int) arr_12 [i_3] [1] [1] [i_1] [4LL])))))))));
                            arr_15 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_12 [i_3] [i_3 + 2] [i_1 + 1] [i_0 - 1] [i_0 - 1])))) ? (((arr_11 [i_1 + 1]) / (((/* implicit */unsigned int) arr_5 [i_1 + 1] [i_1 + 1])))) : (((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1 + 1])) ? (arr_11 [i_1 + 1]) : (((/* implicit */unsigned int) arr_5 [i_1 + 1] [i_1 + 1]))))));
                            var_13 = ((((/* implicit */_Bool) ((var_4) - (3653511435U)))) ? (((arr_8 [i_0 - 3] [i_1 + 1]) & (arr_8 [i_0 - 4] [i_1 + 1]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_6 [i_3] [i_0])), (arr_0 [i_0])))) ? (((/* implicit */int) ((unsigned short) arr_9 [i_0]))) : (arr_12 [i_0 - 4] [i_1] [i_3 + 2] [i_1 + 1] [i_1])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 22; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 2; i_5 < 21; i_5 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */short) 641455877U);
                            arr_20 [i_4] [i_1 + 1] [i_1] [i_1 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_16 [i_5 - 2] [i_4 + 1] [i_0 - 2])), (var_8)))) ? (((int) arr_9 [i_5])) : ((+(arr_5 [i_0 - 1] [i_0 - 3])))));
                            arr_21 [i_4] = ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned int) var_11)), (0U)))));
                            arr_22 [i_0 + 1] [i_1 + 1] [18] [i_0 + 1] [i_5] [i_0 + 1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), (arr_17 [i_0] [i_1] [i_4 - 4] [i_5])))) || (((1125899906842623ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 23; i_6 += 3) 
                {
                    for (long long int i_7 = 2; i_7 < 21; i_7 += 2) 
                    {
                        {
                            arr_28 [i_7] [i_1] [i_6] [i_1] [i_0] = ((/* implicit */short) 641455860U);
                            arr_29 [i_0] [i_1] = ((/* implicit */unsigned int) max((var_1), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_5 [i_0 - 1] [i_1 + 1])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 1) 
    {
        for (unsigned long long int i_9 = 1; i_9 < 17; i_9 += 2) 
        {
            for (long long int i_10 = 0; i_10 < 19; i_10 += 2) 
            {
                {
                    arr_42 [i_8] [i_8] [i_8] [11] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) var_6)), (arr_33 [i_8] [i_8]))))) - (((((/* implicit */_Bool) max((((/* implicit */signed char) var_6)), (arr_36 [i_8] [(short)13])))) ? (min((arr_31 [i_8]), (((/* implicit */unsigned long long int) (short)15396)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_24 [i_10])) <= (((/* implicit */int) var_1))))))))));
                    arr_43 [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) 921408433U))))));
                    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)20210)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_9 + 2] [i_9] [i_9 - 1] [i_9 + 2] [i_9 - 1])) ? (arr_12 [i_8] [i_8] [i_9 - 1] [i_10] [i_10]) : (arr_39 [i_10] [i_10] [i_9 - 1])))) : (var_7))))));
                    arr_44 [i_10] [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_12 [i_8] [(short)11] [(short)11] [i_8] [i_9 + 2]) ^ (arr_12 [i_9] [i_9 + 1] [i_9 + 1] [i_9] [i_9 + 1])))) ? (((/* implicit */long long int) min((arr_12 [(signed char)16] [i_9] [i_9] [i_9] [i_9 + 2]), (arr_12 [i_8] [i_8] [i_8] [i_9 + 1] [i_9 + 1])))) : (var_7)));
                }
            } 
        } 
    } 
}
