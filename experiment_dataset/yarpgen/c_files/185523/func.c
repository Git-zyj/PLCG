/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185523
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
    var_12 = ((/* implicit */int) max((((unsigned short) var_0)), (((/* implicit */unsigned short) ((short) var_5)))));
    var_13 = ((/* implicit */long long int) var_1);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            {
                var_14 += ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0 + 3] [10ULL])) ? (arr_4 [i_0 + 1] [i_1]) : (arr_4 [i_0 + 3] [i_0])))), (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) / (var_7)))));
                var_15 = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_4 [i_0] [(short)0])), (max(((-(arr_5 [i_0]))), (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */unsigned int) var_8)))))))));
            }
        } 
    } 
}
