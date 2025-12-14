/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188769
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_0 [i_1])) : (var_13)))) && (((/* implicit */_Bool) arr_2 [i_1]))))));
                var_16 = ((/* implicit */int) max((((/* implicit */short) var_5)), (((short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) <= (var_6))))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) max((-9161981733962237825LL), (((/* implicit */long long int) var_0)))))));
    var_18 = ((/* implicit */unsigned char) ((-1885514848) ^ (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)46)) : (((/* implicit */int) (short)-16829))))) && (((/* implicit */_Bool) var_11)))))));
}
