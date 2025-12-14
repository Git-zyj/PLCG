/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111341
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
    var_15 = ((/* implicit */int) var_11);
    var_16 = ((/* implicit */unsigned int) (-2147483647 - 1));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) 1957801936U)) ? (arr_0 [i_1]) : (arr_3 [i_1]))));
                arr_6 [6U] [i_1] [i_1] &= arr_2 [16U] [i_1];
                arr_7 [14] [i_0] = ((unsigned int) ((arr_3 [i_0]) << (((arr_3 [i_1]) - (3824166424U)))));
                arr_8 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (+(2240160729U)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (2240160738U) : (2054806561U))))));
            }
        } 
    } 
}
