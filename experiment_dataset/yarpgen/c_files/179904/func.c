/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179904
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
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = max((((/* implicit */unsigned long long int) var_0)), (((((/* implicit */_Bool) var_7)) ? (arr_3 [i_0 + 1] [i_0 - 1] [i_0 + 1]) : (var_7))));
                var_11 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(-244013567)))) ? (((((/* implicit */_Bool) 244013574)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-23597)))) : (((/* implicit */int) (_Bool)1))))), (max(((+(arr_3 [i_0] [i_0] [i_1]))), (((/* implicit */unsigned long long int) var_4))))));
                var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) max(((((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 + 1])))), (-360890030))))));
                var_13 = ((/* implicit */int) var_2);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) arr_6 [i_2]))));
        arr_7 [i_2] [(short)3] = ((((/* implicit */int) var_6)) < (((/* implicit */int) min(((!(((/* implicit */_Bool) arr_6 [i_2])))), ((!(((/* implicit */_Bool) arr_5 [i_2]))))))));
        var_15 = ((/* implicit */int) var_7);
        var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (-(((int) arr_6 [i_2]))))), (var_7)));
        var_17 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)64)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_6 [i_2])), (var_5)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2]))) / (var_7)))));
    }
}
