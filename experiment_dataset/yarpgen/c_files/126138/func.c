/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126138
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
    var_13 = ((/* implicit */short) ((((/* implicit */long long int) ((((((/* implicit */int) var_3)) + (2147483647))) >> ((((+(((/* implicit */int) var_9)))) - (47316)))))) % (var_7)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-112))));
        arr_4 [i_0] |= ((/* implicit */signed char) (~(((/* implicit */int) ((short) var_9)))));
        var_14 = ((/* implicit */short) arr_2 [i_0]);
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) ((signed char) arr_0 [i_0]));
    }
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (~(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)14586))) + (var_7))))))));
}
