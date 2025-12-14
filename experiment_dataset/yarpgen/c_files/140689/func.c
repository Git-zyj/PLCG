/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140689
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((max((((/* implicit */unsigned long long int) 960)), (var_9))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2836432290781626979ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (4294967295U)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 156272396210396152ULL)) ? (var_15) : (4294967295U)))) ? ((~(var_4))) : ((~(var_5))))))))));
                var_19 += ((/* implicit */short) ((min((2147483647), (((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) 963))))))) >> (((((/* implicit */_Bool) (short)-11091)) ? (((((/* implicit */_Bool) (short)-32762)) ? (((/* implicit */unsigned long long int) 3)) : (13762588670643259345ULL))) : (((/* implicit */unsigned long long int) 1940344419))))));
                var_20 = ((unsigned int) var_5);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((short) 14394660174792938868ULL)))))) * (((/* implicit */int) ((short) -1029122220)))));
}
