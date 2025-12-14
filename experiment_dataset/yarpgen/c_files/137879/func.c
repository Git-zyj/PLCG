/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137879
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
    var_10 = ((/* implicit */unsigned int) min((var_10), (((((/* implicit */_Bool) var_0)) ? (var_7) : (var_2)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_11 = ((unsigned int) ((((/* implicit */_Bool) min((arr_0 [i_0]), (2111979648U)))) ? (max((var_6), (var_3))) : (((((/* implicit */_Bool) var_5)) ? (arr_5 [1U]) : (arr_1 [i_0])))));
                var_12 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2630298970U)) ? (((((/* implicit */_Bool) var_7)) ? (2182987647U) : (var_1))) : (((((/* implicit */_Bool) 860852389U)) ? (2980570700U) : (2015972259U)))))) ? (arr_5 [i_0]) : (max((((((/* implicit */_Bool) 2980570726U)) ? (var_7) : (arr_0 [i_0]))), (((((/* implicit */_Bool) 2047U)) ? (93803960U) : (var_3))))));
            }
        } 
    } 
    var_13 = var_0;
    var_14 = var_5;
}
