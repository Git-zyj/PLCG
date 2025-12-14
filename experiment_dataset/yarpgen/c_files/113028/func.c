/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113028
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_17 ^= ((/* implicit */_Bool) min((min((1914059750U), (((/* implicit */unsigned int) 311038073)))), (((/* implicit */unsigned int) arr_4 [(unsigned short)6]))));
                var_18 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) - (arr_1 [i_0] [i_0])));
            }
        } 
    } 
    var_19 -= ((/* implicit */int) var_5);
    var_20 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_7)), (var_3)))) ? (((((/* implicit */_Bool) var_5)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))));
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) != (max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) var_8)) : (var_11))), (((/* implicit */long long int) var_12))))));
}
