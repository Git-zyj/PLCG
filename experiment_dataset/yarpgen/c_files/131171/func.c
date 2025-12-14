/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131171
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
    var_12 = ((/* implicit */long long int) (~((+(var_0)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned long long int) ((arr_1 [i_0]) ? (((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0])))) : (min((var_0), (((/* implicit */int) arr_1 [i_0]))))));
                var_13 += ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((~(var_8))), (140737488355327LL))))));
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (var_4))) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))))) : (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_11)))))))));
}
