/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136814
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
    for (short i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */long long int) (-((+(1706417393)))));
                var_21 = ((/* implicit */unsigned int) max((((((/* implicit */long long int) ((/* implicit */int) ((arr_5 [i_0] [i_1] [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) + (min((((/* implicit */long long int) arr_0 [i_0])), (var_5))))), (((/* implicit */long long int) arr_3 [i_0]))));
            }
        } 
    } 
    var_22 |= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_17)) ? (((1706417419) >> (((6148133441420967710ULL) - (6148133441420967684ULL))))) : ((~(1706417376)))))));
    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_3)), (max((4294967295U), (((/* implicit */unsigned int) (~(((/* implicit */int) var_17))))))))))));
}
