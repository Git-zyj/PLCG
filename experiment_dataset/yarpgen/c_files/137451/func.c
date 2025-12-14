/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137451
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
    var_15 ^= var_2;
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) var_10))));
    var_17 = ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) max((var_4), (var_6)))) ? (var_7) : (((/* implicit */long long int) ((((/* implicit */int) var_11)) + (-1257466372)))))) : (((/* implicit */long long int) ((var_1) + (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
    var_18 = ((/* implicit */unsigned long long int) var_10);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 13; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_9 [i_2] [(_Bool)1] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) (+((~(((/* implicit */int) arr_6 [i_0] [i_1] [i_2])))))))));
                    arr_10 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 7256330420918684792LL)) ? (7256330420918684793LL) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
                }
            } 
        } 
    } 
}
