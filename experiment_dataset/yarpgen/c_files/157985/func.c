/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157985
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */long long int) (short)-4488);
                var_20 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [(signed char)9] [i_1])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)59237)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)129))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (var_7))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)126)))));
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (752788325) : (-200483685)));
                var_22 = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */int) var_0)))))))));
    var_24 = ((/* implicit */_Bool) var_12);
}
