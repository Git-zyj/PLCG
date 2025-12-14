/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172275
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
    var_10 -= ((/* implicit */long long int) min((max((((((/* implicit */_Bool) var_0)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))))), (((unsigned int) min((((/* implicit */int) (signed char)7)), (var_2))))));
    var_11 = ((/* implicit */long long int) min((((unsigned long long int) min((1U), (((/* implicit */unsigned int) (signed char)-7))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) min((4294967295U), (4294967295U)))) : (var_5))))));
    var_12 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) * (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) / (((/* implicit */int) var_8))))) + (((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned long long int) var_2))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) arr_2 [i_0 + 2]);
                var_13 = ((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_2 [i_1 - 1])))), ((~(((/* implicit */int) arr_2 [i_1 - 2]))))));
                var_14 ^= ((/* implicit */short) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) > (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_4))))));
            }
        } 
    } 
}
