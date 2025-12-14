/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118696
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
    var_13 |= ((/* implicit */unsigned int) var_0);
    var_14 = ((/* implicit */signed char) var_4);
    var_15 = ((/* implicit */long long int) ((((var_9) <= (((/* implicit */unsigned long long int) var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17037))) : (min((var_4), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)-17045)), (var_12))))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-17045)) + ((-(-944655489)))));
                var_16 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (short)-17048))))));
                var_17 = ((/* implicit */unsigned int) (short)-17037);
            }
        } 
    } 
}
