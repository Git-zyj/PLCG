/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106847
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
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) var_10)) : (((unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))));
                var_19 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))))) ? (min((((/* implicit */unsigned long long int) (-(var_17)))), (min((((/* implicit */unsigned long long int) var_0)), (var_5))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 5638453499197705061ULL)) && (((/* implicit */_Bool) arr_1 [i_0]))))), (arr_1 [i_1]))))));
                var_20 ^= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_1 [i_0])), (max((max((((/* implicit */unsigned long long int) var_16)), (var_15))), (((/* implicit */unsigned long long int) (+(594636526U))))))));
            }
        } 
    } 
    var_21 ^= ((/* implicit */signed char) var_16);
    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) var_8))));
}
