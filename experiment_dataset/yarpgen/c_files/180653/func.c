/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180653
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
    var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */int) arr_3 [i_0 - 1]);
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_1])))))));
                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_3 [i_1])) >= (((/* implicit */int) var_0))))) & (min((var_6), (((/* implicit */int) arr_2 [i_1]))))))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_3 [i_1]))))), (var_5))) : (((/* implicit */long long int) min((var_6), (((/* implicit */int) arr_3 [i_0 - 1])))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) var_14))));
}
