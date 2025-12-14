/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188814
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
    var_19 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_2), (var_6)))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_7)))))));
    var_20 = ((/* implicit */short) max(((~((~(((/* implicit */int) var_18)))))), (((/* implicit */int) ((var_10) > (((unsigned int) var_0)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 -= ((/* implicit */unsigned short) max((((unsigned long long int) arr_0 [i_0 + 1])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */long long int) ((unsigned int) var_13))) : (((((/* implicit */long long int) ((/* implicit */int) var_17))) + (arr_5 [i_1] [(short)0]))))))));
                arr_7 [i_0] [i_1] [i_1 - 1] = ((/* implicit */unsigned int) ((signed char) ((signed char) ((((/* implicit */_Bool) var_12)) ? (arr_6 [i_0] [i_1 - 1] [i_1 - 1]) : (arr_1 [i_0])))));
            }
        } 
    } 
}
