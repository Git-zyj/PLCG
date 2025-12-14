/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144033
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
    for (long long int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 17; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_9 [i_2] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_8 [i_0] [i_0 - 1] [i_0 - 2] [i_1 - 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7)))) | (min(((+(var_4))), (((/* implicit */int) var_7))))));
                    arr_10 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */short) ((var_4) >> (((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */long long int) 187617403)) <= (arr_8 [i_0] [i_0] [i_1 + 1] [i_2])))), ((signed char)26))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */short) ((min((arr_6 [i_1 - 3] [i_1] [(short)2] [i_4 - 1]), (arr_6 [i_1 - 4] [i_3 + 1] [i_4] [i_4 + 1]))) >> (((((/* implicit */int) var_1)) + (6689)))));
                                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) ((unsigned int) var_10)))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_15 [i_0] [i_0 - 2] [i_0 - 1] [i_1 - 3] [i_2] [i_3 + 1] [i_4])), ((+(arr_6 [i_4] [i_3] [i_2] [i_0])))))) : (min((arr_11 [i_1] [i_1] [i_1] [i_1]), (((/* implicit */long long int) var_4))))));
                                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) var_10))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = var_8;
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 1) 
    {
        for (int i_6 = 1; i_6 < 19; i_6 += 3) 
        {
            {
                arr_22 [i_6] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_17 [i_5] [i_6 + 1])), (arr_19 [i_5])))) != (((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5] [(_Bool)1]))) : (var_5)))))) >> (((arr_18 [i_5]) + (857803003330176422LL)))));
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) (short)20)), (4294967295U)))) == (min((((/* implicit */long long int) arr_20 [i_5] [i_6 - 1])), (arr_18 [i_6 - 1])))));
            }
        } 
    } 
}
