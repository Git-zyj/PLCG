/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109823
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1] = ((/* implicit */signed char) arr_5 [i_0]);
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) max((-1383226442597527113LL), (0LL))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */int) var_3)) - (var_1))) : (((/* implicit */int) ((_Bool) (+(var_6)))))));
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-2))) : (var_5)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1383226442597527099LL)) ? (((/* implicit */int) var_4)) : (var_11)))) : (max((1383226442597527113LL), (((/* implicit */long long int) var_0))))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) min((var_3), (((/* implicit */short) var_0))))) : (var_19))) : (((/* implicit */int) max((var_9), (var_0))))));
}
