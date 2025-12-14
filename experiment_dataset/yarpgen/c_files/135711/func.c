/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135711
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
    var_20 = var_7;
    var_21 = ((/* implicit */int) max((917504U), (min((((4294049776U) % (((/* implicit */unsigned int) 551731672)))), (((/* implicit */unsigned int) var_12))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 2) 
            {
                {
                    var_22 = ((/* implicit */long long int) var_19);
                    var_23 *= ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_0] [i_0])) > (((/* implicit */int) ((((/* implicit */int) var_17)) <= (((/* implicit */int) var_17)))))));
                }
            } 
        } 
    } 
    var_24 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
}
