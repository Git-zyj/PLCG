/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15659
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
    var_17 = ((/* implicit */int) max((((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) var_14)) ? (var_10) : (((/* implicit */unsigned long long int) var_13)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) var_5))))) ? (var_15) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_14))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((var_15), (var_13)))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) var_2)) : (var_4)))))) ? (((((/* implicit */_Bool) max((var_16), (var_16)))) ? (min((var_10), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_1)), (var_5)))))) : (max((min((((/* implicit */unsigned long long int) var_3)), (var_9))), (((/* implicit */unsigned long long int) var_8))))));
                    var_19 = ((/* implicit */signed char) max((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_11) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (var_2))))))));
                    arr_9 [i_0] [i_1] [i_2] = var_16;
                    var_20 ^= ((/* implicit */short) var_8);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (min((var_15), (var_13)))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) var_16)), (var_15)))) ? (((/* implicit */unsigned long long int) var_2)) : (min((var_0), (((/* implicit */unsigned long long int) var_6))))))));
}
