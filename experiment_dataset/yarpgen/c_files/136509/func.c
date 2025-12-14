/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136509
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((short) max((((/* implicit */long long int) -594408995)), (arr_0 [i_1]))))), ((-((~(arr_2 [i_0])))))));
                var_13 = ((/* implicit */signed char) var_8);
                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_3 [i_0])), (var_9)))) ? (((/* implicit */int) max(((signed char)109), (arr_3 [i_1])))) : (((/* implicit */int) (short)25930)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) ((int) 2595792339U));
    var_16 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) var_10)) ? (var_10) : (var_8))));
}
