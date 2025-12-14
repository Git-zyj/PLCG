/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131210
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
    var_12 &= ((/* implicit */signed char) var_2);
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 4; i_1 < 22; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~(min((4294967295U), (((/* implicit */unsigned int) arr_0 [i_1 - 1] [i_0 - 3]))))));
                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_10))))))) ? (min((((arr_3 [i_1]) ? (arr_1 [i_1] [i_1]) : (((/* implicit */long long int) 4294967279U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))))))) : (((/* implicit */long long int) min((((arr_5 [i_1] [i_0]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10)))), (((/* implicit */int) var_1)))))));
            }
        } 
    } 
}
