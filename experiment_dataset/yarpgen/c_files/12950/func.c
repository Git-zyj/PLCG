/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12950
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
    var_18 &= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) 90436517)) ? (839184806) : (-839184806))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11))))))) & (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) ^ (var_6)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_13))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_19 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) / (var_3)))) ? (((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (var_3) : (var_3))))));
                var_20 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) max((var_9), (var_9)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_17)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9))))))));
            }
        } 
    } 
}
