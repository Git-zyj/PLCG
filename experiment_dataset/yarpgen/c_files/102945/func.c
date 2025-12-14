/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102945
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) << ((((+(((/* implicit */int) var_9)))) + (109)))))) && (((/* implicit */_Bool) var_2))));
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-1LL)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */signed char) min((((((/* implicit */long long int) ((/* implicit */int) var_4))) * (min((14LL), (-15LL))))), (((/* implicit */long long int) max((((/* implicit */signed char) arr_0 [i_1])), (var_1))))));
                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) var_5))));
                var_15 = var_7;
                var_16 = ((/* implicit */short) max((((/* implicit */long long int) ((var_8) > (4LL)))), (((((/* implicit */_Bool) -1LL)) ? (min((-19LL), (((/* implicit */long long int) arr_0 [9U])))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
                var_17 = ((/* implicit */unsigned char) ((long long int) (!(((/* implicit */_Bool) 17620199702218375962ULL)))));
            }
        } 
    } 
}
