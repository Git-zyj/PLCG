/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188421
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
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */signed char) var_8)), (var_12)))) | (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_13))))))), (min((((((/* implicit */_Bool) var_13)) ? (var_9) : (((/* implicit */unsigned int) var_5)))), (((/* implicit */unsigned int) ((((((/* implicit */int) var_14)) + (2147483647))) >> (((/* implicit */int) var_8))))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -15LL)) ? (((/* implicit */int) (signed char)36)) : (((/* implicit */int) (unsigned short)29030))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_0)) : (var_7)))))) ? (((/* implicit */unsigned long long int) ((max((var_3), (var_3))) >> (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) % (var_7)))))) : (((((/* implicit */unsigned long long int) min((var_3), (((/* implicit */unsigned int) var_10))))) + (min((((/* implicit */unsigned long long int) var_10)), (var_1)))))));
                    var_18 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_0) : (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) var_15)) ? (var_5) : (var_0))) : (((/* implicit */int) min((var_2), (var_2))))))));
                }
            } 
        } 
    } 
}
