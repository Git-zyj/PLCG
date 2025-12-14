/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120702
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
    for (short i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 18; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((int) max((var_0), (max((((/* implicit */long long int) arr_5 [5] [5])), (-4765419492478494711LL))))));
                arr_8 [i_0 - 3] [i_1 - 1] [i_1] = ((/* implicit */short) arr_2 [i_0]);
            }
        } 
    } 
    var_16 = ((/* implicit */int) var_3);
    var_17 = ((/* implicit */int) min((((/* implicit */long long int) ((int) var_3))), (((long long int) ((int) var_4)))));
}
