/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167822
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
    for (unsigned long long int i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 |= ((/* implicit */_Bool) 1616977569U);
                arr_7 [i_0] [i_1] [i_1] |= ((/* implicit */short) 440221802);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (max((((((/* implicit */_Bool) var_7)) ? (3602135088U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (((3602135095U) + (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
    var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))));
    var_16 = ((/* implicit */short) var_10);
    var_17 |= ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 3602135093U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3))))) ? ((~(var_1))) : (((/* implicit */long long int) (~(((/* implicit */int) var_5))))))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0)))))));
}
