/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122051
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
    var_20 = ((/* implicit */int) var_7);
    var_21 = ((/* implicit */unsigned int) var_14);
    var_22 = ((/* implicit */_Bool) (unsigned char)147);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            {
                var_23 = ((((/* implicit */_Bool) ((unsigned int) 4230229369U))) ? ((~(((((/* implicit */long long int) ((/* implicit */int) var_14))) / (-7620323772783772476LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((4162590703U) >> (((((/* implicit */int) arr_0 [i_1] [i_0])) + (35))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) && (((/* implicit */_Bool) 9223372036854775807LL))))))))));
                var_24 -= ((/* implicit */unsigned short) var_5);
            }
        } 
    } 
}
