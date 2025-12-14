/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173158
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
    for (signed char i_0 = 4; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned int) min(((_Bool)1), (((((/* implicit */_Bool) ((int) 1917504665))) || (((/* implicit */_Bool) arr_0 [i_0]))))));
                var_14 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_2)), (((arr_1 [5LL] [i_0]) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 - 1] [i_0])))))));
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1)))))));
                var_16 -= ((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_0 - 1]))));
                var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1 - 1] [12LL]))) : (arr_0 [i_0])))) ? (arr_0 [i_0]) : (var_8));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) var_9);
    var_19 = ((/* implicit */_Bool) var_2);
}
