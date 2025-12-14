/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186034
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
    for (unsigned short i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_5 [i_0] = var_10;
                var_18 = ((/* implicit */int) (~(((((/* implicit */_Bool) (~(var_14)))) ? (((unsigned long long int) arr_4 [i_0] [1U] [9])) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [1] [5])))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)21)), (var_16))))));
}
