/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18617
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
    var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((int) var_15))) + (max((((/* implicit */unsigned int) -1839281946)), (((unsigned int) var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 - 1])) ? (((/* implicit */long long int) (+(arr_0 [i_0 - 1] [i_1])))) : (max((((/* implicit */long long int) 1839281945)), (8635571161330737944LL)))));
                arr_5 [i_0] [15LL] [i_1] = ((/* implicit */long long int) ((int) (-(-8635571161330737944LL))));
            }
        } 
    } 
}
