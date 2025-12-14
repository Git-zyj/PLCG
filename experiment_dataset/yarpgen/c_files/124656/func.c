/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124656
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            {
                arr_5 [i_1 - 1] [i_1 - 1] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-30750))) : (var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30761))) : (0ULL)))));
                arr_6 [i_0] [i_1 + 1] [i_1 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_11))))) ? ((-(var_4))) : (18446744073709551615ULL)))) ? (((min((var_9), (((/* implicit */unsigned long long int) var_3)))) >> (((102348157U) - (102348157U))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551611ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) 5ULL))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_13))))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) var_14))));
}
