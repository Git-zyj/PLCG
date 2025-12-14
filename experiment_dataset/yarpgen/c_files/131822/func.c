/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131822
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
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_4 [2U] [i_0] = ((/* implicit */int) ((min((2632606487U), (2775552289U))) != (min((var_5), (max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned int) arr_1 [i_0]))))))));
                var_17 = ((/* implicit */unsigned int) ((long long int) ((536870911U) <= (arr_2 [i_0] [i_0]))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) var_14);
}
