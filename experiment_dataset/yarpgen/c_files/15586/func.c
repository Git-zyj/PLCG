/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15586
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
    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) ^ (var_7)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)76)))))))) : (((/* implicit */int) var_6)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 16; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [11U] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) (unsigned short)13541)) : (((/* implicit */int) (signed char)102))))));
                arr_6 [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 - 1]))))));
            }
        } 
    } 
}
