/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106810
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
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) var_15))));
    var_18 = ((/* implicit */short) ((0LL) % (((/* implicit */long long int) ((unsigned int) max((((/* implicit */long long int) var_12)), (-18LL)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                var_19 = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1]))))) != (((/* implicit */int) ((short) var_9))));
                var_20 -= ((/* implicit */short) max((((/* implicit */unsigned long long int) (+(var_3)))), (max((arr_5 [i_0 + 1] [i_1 + 1]), (((/* implicit */unsigned long long int) arr_1 [i_0 + 1]))))));
            }
        } 
    } 
}
