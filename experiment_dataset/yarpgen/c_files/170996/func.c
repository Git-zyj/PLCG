/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170996
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-19781)) ? (((/* implicit */unsigned int) arr_5 [i_1 - 1])) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_1]))) & (var_6)))))) ? (min((max((var_12), (((/* implicit */int) var_5)))), ((+(((/* implicit */int) (short)19781)))))) : ((-(((/* implicit */int) arr_1 [i_0] [i_1])))));
                var_19 = ((/* implicit */signed char) (-(((/* implicit */int) max(((short)-13023), ((short)-19760))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_9);
}
