/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112269
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
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)(-32767 - 1))), ((unsigned short)11497))))) <= (var_2))))) : (min((var_7), (((/* implicit */unsigned long long int) ((var_7) <= (var_0))))))));
    var_19 = ((/* implicit */unsigned long long int) var_13);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1270984664U)) || (((/* implicit */_Bool) 1270984665U))));
                arr_6 [i_0] [i_1] = ((/* implicit */short) arr_3 [i_0]);
            }
        } 
    } 
}
