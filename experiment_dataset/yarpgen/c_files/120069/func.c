/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120069
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
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) var_15))));
    var_18 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) var_5))))), (((arr_0 [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_0]))))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) max((arr_3 [i_1 - 4] [i_0 - 1]), (arr_3 [i_1 - 2] [i_0 - 1])))))));
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_1])), (var_2)))) ? (((/* implicit */int) arr_1 [i_1 - 3])) : (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [1LL])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_10)))))))))));
            }
        } 
    } 
}
