/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109054
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
    var_10 = var_7;
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */unsigned long long int) var_7)))) != (((/* implicit */unsigned long long int) -8970630723140373398LL)))))) : (max((((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) var_1))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) max(((-(var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (arr_2 [i_0 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) var_4)))))))))));
                var_12 = arr_3 [i_0] [i_0];
                arr_7 [i_0] [i_1] [i_0 - 3] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
            }
        } 
    } 
}
