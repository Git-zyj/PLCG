/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144799
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
    var_11 *= ((/* implicit */short) (~(((/* implicit */int) (!(max(((_Bool)1), ((_Bool)1))))))));
    var_12 *= ((signed char) (+(var_2)));
    var_13 += ((/* implicit */short) max((var_3), (((/* implicit */signed char) (_Bool)1))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_14 ^= ((/* implicit */short) ((int) ((((/* implicit */int) arr_5 [i_0])) - (var_9))));
                var_15 -= ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) && (((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_3 [i_0] [(short)6])) || (((/* implicit */_Bool) arr_0 [i_0]))))))));
                var_16 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-16))));
                var_17 ^= ((/* implicit */signed char) arr_2 [i_1]);
            }
        } 
    } 
}
