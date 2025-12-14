/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189377
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
    var_14 = var_9;
    var_15 = var_5;
    var_16 = ((/* implicit */long long int) ((var_5) >= (var_11)));
    var_17 = ((/* implicit */long long int) ((((long long int) ((var_6) | (var_11)))) != (var_13)));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1 - 1] [i_0] [7LL] = max((((arr_1 [i_1 - 1] [i_2]) + (arr_1 [i_1 - 1] [i_1]))), (((((-5543286517590224551LL) + (9223372036854775807LL))) << (((((arr_1 [i_1 - 1] [i_1]) + (4006822724719074956LL))) - (50LL))))));
                    var_18 = arr_1 [i_0 - 1] [i_1 + 2];
                    var_19 = ((/* implicit */long long int) min((var_19), (max((((arr_7 [i_0] [i_1] [i_1 + 1] [i_1]) / (arr_1 [i_0] [i_1 + 2]))), (((long long int) arr_7 [i_0 + 1] [i_0 + 1] [i_1 - 1] [13LL]))))));
                }
            } 
        } 
    } 
}
