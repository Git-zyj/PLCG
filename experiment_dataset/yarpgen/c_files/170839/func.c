/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170839
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
    var_12 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9)))) <= (((/* implicit */int) var_9))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned char) arr_0 [4U]);
                var_14 = ((var_2) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) 20U)), (var_7)))) ? (arr_0 [i_1]) : (((/* implicit */int) (_Bool)1))))) : (20U));
            }
        } 
    } 
}
