/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137734
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (max((9223372036854775807LL), (9223372036854775807LL))) : (-9223372036854775807LL)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) max((var_2), (((((/* implicit */int) (signed char)14)) < (((/* implicit */int) (unsigned short)38680)))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)1848)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-14))) : ((-9223372036854775807LL - 1LL))));
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((arr_2 [i_0]) - (arr_2 [i_2])))), (min((9223372036854775807LL), (9223372036854775807LL)))));
                }
            } 
        } 
    } 
    var_17 += ((/* implicit */signed char) (+(var_3)));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 784729122376651678ULL))))) * (((/* implicit */int) var_12))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_2))));
}
