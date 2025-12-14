/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153077
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
    var_12 = ((/* implicit */signed char) max((((unsigned int) var_8)), (((/* implicit */unsigned int) var_6))));
    var_13 -= ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) << (((var_2) + (337411395)))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((_Bool) 0ULL))))));
    var_14 = ((/* implicit */int) ((signed char) min((var_1), (((/* implicit */unsigned int) (signed char)76)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_1 [i_0]))))), ((+(((unsigned int) arr_3 [i_0] [i_0]))))));
                var_16 = ((/* implicit */unsigned short) (+(((((/* implicit */int) var_8)) + (11)))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) (-(((unsigned int) 0U))));
}
