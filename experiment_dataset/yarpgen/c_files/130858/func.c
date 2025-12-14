/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130858
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
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) var_11))));
    var_16 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)184))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 15; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (((/* implicit */int) arr_3 [i_0 + 2])) : (((/* implicit */int) var_9))))), (min((-1LL), (7760379643941327597LL)))));
                var_18 = ((/* implicit */unsigned int) (-(((/* implicit */int) max((min((var_8), (arr_5 [i_0] [i_1] [i_1]))), (arr_3 [i_0 - 1]))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)63000))))) ? (((/* implicit */int) max((var_0), ((unsigned char)91)))) : (((/* implicit */int) (unsigned char)99))))));
}
