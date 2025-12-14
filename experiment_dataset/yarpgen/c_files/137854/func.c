/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137854
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
    var_10 = ((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned int) var_8))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_0 [i_0 - 2]), (arr_0 [i_0 + 1])))) ? (((((/* implicit */_Bool) -21092659)) ? (4U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27629))))) : (((/* implicit */unsigned int) var_3))));
                var_12 = ((/* implicit */_Bool) (((~(((/* implicit */int) var_4)))) & ((~(max((arr_4 [i_0 + 1]), (((/* implicit */int) (unsigned short)11772))))))));
            }
        } 
    } 
}
