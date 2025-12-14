/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106106
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
    var_20 = ((/* implicit */_Bool) ((max((((((/* implicit */_Bool) var_16)) ? (var_4) : (var_4))), (((/* implicit */long long int) var_11)))) / (((/* implicit */long long int) ((/* implicit */int) var_11)))));
    var_21 = var_10;
    var_22 = ((/* implicit */signed char) var_12);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (short)11170)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? ((+(((/* implicit */int) arr_0 [i_0] [i_1])))) : (((((/* implicit */int) arr_0 [i_0] [i_1])) << (((((/* implicit */int) arr_0 [i_1] [i_0])) - (161)))))));
                    var_24 = ((/* implicit */short) arr_1 [i_2]);
                }
            } 
        } 
    } 
}
