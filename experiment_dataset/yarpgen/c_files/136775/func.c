/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136775
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_16 = max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_1 [i_0] [i_0]))));
        var_17 = ((/* implicit */_Bool) -1);
        var_18 = ((/* implicit */unsigned long long int) (+(arr_0 [i_0])));
    }
    for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_19 += ((/* implicit */long long int) -1464822562);
        var_20 = arr_0 [i_1];
    }
    var_21 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) % (1161035978U)))) ? (((long long int) var_6)) : (((/* implicit */long long int) ((/* implicit */int) max((var_15), ((signed char)63))))))) % (((/* implicit */long long int) ((/* implicit */int) var_12)))));
}
