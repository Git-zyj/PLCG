/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183184
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
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) -5378648795589574146LL))));
    var_16 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */unsigned int) 0)) != (var_4))))), (((unsigned long long int) var_14))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) min((((/* implicit */int) arr_0 [i_0 + 3])), ((-(((/* implicit */int) arr_0 [i_0 + 1])))))))));
                arr_4 [i_0] = ((/* implicit */unsigned long long int) ((short) (signed char)-9));
                var_18 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? ((+(((/* implicit */int) (signed char)-2)))) : (max((-4), (((/* implicit */int) arr_0 [i_1 + 1])))))), (max((((/* implicit */int) var_10)), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_1 - 1])) : (11)))))));
            }
        } 
    } 
    var_19 *= var_2;
}
