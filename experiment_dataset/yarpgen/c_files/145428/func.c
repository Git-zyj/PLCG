/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145428
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
    var_11 = ((/* implicit */unsigned long long int) 2093243628U);
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2201723667U)) ? (((/* implicit */long long int) (-(((/* implicit */int) var_10))))) : (var_3)));
    var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) var_1))) ^ (var_3))), (((/* implicit */long long int) var_1)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? ((-(((2093243643U) - (1392096033U))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))))))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((_Bool) (!(((/* implicit */_Bool) var_7))))) && (((/* implicit */_Bool) var_4))));
            }
        } 
    } 
}
