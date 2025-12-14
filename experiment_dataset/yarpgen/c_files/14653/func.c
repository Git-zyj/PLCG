/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14653
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_1])))))));
                var_18 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1 + 1] [i_1 - 1]))) : (var_0))));
                arr_6 [i_1] = min((((/* implicit */unsigned long long int) 3181910908196337912LL)), (11590767894883863566ULL));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((var_1) != (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) ? (((/* implicit */int) ((var_2) >= (var_0)))) : (((/* implicit */int) var_5))))), (var_2)));
}
