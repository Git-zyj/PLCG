/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179672
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
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((var_16) >= (((/* implicit */long long int) ((/* implicit */int) var_12))))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */int) var_13)) : (var_10)))) : (((((/* implicit */_Bool) var_14)) ? (var_0) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)0)) / (((/* implicit */int) (signed char)3)))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 18; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_21 = ((((/* implicit */_Bool) ((((/* implicit */int) ((var_8) || (((/* implicit */_Bool) var_9))))) & (arr_6 [i_1 - 3] [3LL] [i_1] [i_0 + 3])))) ? (((/* implicit */int) ((short) var_2))) : (((/* implicit */int) arr_1 [i_0])));
                    arr_8 [13U] [13U] [i_1] [i_2] = var_10;
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_3)))) : (((((((/* implicit */int) var_15)) + (2147483647))) >> (((var_0) - (309207307U)))))))), (var_16)));
}
