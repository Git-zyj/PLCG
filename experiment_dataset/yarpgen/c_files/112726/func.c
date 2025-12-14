/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112726
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
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = (_Bool)0;
                var_18 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((((/* implicit */int) arr_0 [i_0] [i_1])) % (((/* implicit */int) (_Bool)1))))))));
                var_19 = ((short) max((((/* implicit */long long int) ((signed char) -5668770946397196400LL))), (-5668770946397196400LL)));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) ((((/* implicit */int) var_2)) << (max((((var_3) ^ (var_3))), (((/* implicit */int) var_16))))));
}
