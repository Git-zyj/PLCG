/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101872
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
    var_18 = var_12;
    var_19 = (((((+(((((/* implicit */_Bool) -268586968)) ? (var_3) : (var_13))))) + (2147483647))) << (((((((((/* implicit */_Bool) var_17)) ? (var_7) : ((+(var_8))))) + (26884100))) - (16))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                var_20 = var_9;
                var_21 = ((((/* implicit */_Bool) arr_0 [1])) ? (var_6) : (((int) ((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (arr_4 [i_0]) : (var_14)))));
            }
        } 
    } 
}
