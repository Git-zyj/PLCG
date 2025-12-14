/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145295
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
    var_18 = var_12;
    var_19 = ((/* implicit */unsigned int) ((var_10) + (var_10)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_6 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_12)) >= (max((9889540256438481220ULL), (((/* implicit */unsigned long long int) arr_2 [i_0 + 1] [i_0 + 2]))))));
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) min((9889540256438481220ULL), (((/* implicit */unsigned long long int) 8751669544119619925LL)))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (var_2)));
}
