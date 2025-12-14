/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144636
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
    var_12 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) ((var_2) < (min((((/* implicit */unsigned int) var_5)), (var_8))))))) : (2225725823860477736LL)));
    var_13 = ((/* implicit */long long int) var_7);
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */_Bool) max(((~(-2225725823860477737LL))), (((((/* implicit */_Bool) arr_1 [i_2])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0 - 1] [i_2 + 1] [i_2] [i_2])))))));
                    var_15 ^= ((/* implicit */_Bool) ((((/* implicit */long long int) max((((/* implicit */int) arr_7 [(_Bool)1] [i_1 - 2] [(_Bool)1])), ((+(((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))))))) + (min((2225725823860477734LL), (-2225725823860477724LL)))));
                    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) arr_6 [i_0] [i_0] [i_0] [i_0]))));
                }
            } 
        } 
    } 
}
