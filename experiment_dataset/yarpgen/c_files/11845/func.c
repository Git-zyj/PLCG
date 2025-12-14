/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11845
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
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((var_15) | (((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6)))) | ((((-2147483647 - 1)) ^ (((/* implicit */int) var_13)))))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0 + 4] [i_0] = ((((/* implicit */_Bool) ((((((var_4) | (((/* implicit */int) (_Bool)1)))) + (2147483647))) >> ((((~(((/* implicit */int) (unsigned short)19927)))) + (19955)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((unsigned int) (-(var_5)))));
                var_21 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) - (((/* implicit */int) (_Bool)1))))) ? (max((((/* implicit */int) (unsigned short)45609)), (2012515137))) : (min((((/* implicit */int) (unsigned short)31833)), (var_15)))));
            }
        } 
    } 
    var_22 = (unsigned short)45623;
}
