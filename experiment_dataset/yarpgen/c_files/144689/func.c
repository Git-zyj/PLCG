/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144689
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_20 = max((((signed char) arr_5 [13LL] [13LL] [13LL])), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) ? (2136041726236032495LL) : (arr_1 [(signed char)4] [i_1]))) < (arr_1 [5LL] [5LL])))));
                var_21 = min((((((/* implicit */_Bool) min((arr_3 [i_0] [i_0]), (((/* implicit */long long int) arr_0 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_3 [6LL] [6LL])) ? (arr_2 [i_0]) : (arr_6 [i_0] [i_0]))) : (5460651977316794955LL))), (((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_0]))))));
                var_22 = ((/* implicit */signed char) (+((~(((/* implicit */int) arr_4 [i_0]))))));
                var_23 = var_16;
            }
        } 
    } 
    var_24 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
    var_25 = var_15;
}
