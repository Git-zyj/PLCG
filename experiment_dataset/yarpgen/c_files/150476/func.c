/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150476
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = var_9;
                    arr_7 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_1 [i_0]), (1606599910554079270LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2] [i_0]))) : (((unsigned long long int) arr_4 [i_2] [i_1] [i_0])))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */_Bool) (-9223372036854775807LL - 1LL));
    var_14 = ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_3)), (var_0)))) ? ((-(var_9))) : (((var_1) - (var_4))))) + (var_9));
    var_15 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((long long int) var_10))), (((unsigned long long int) var_10))));
    var_16 = var_6;
}
