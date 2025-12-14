/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123064
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_18 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))) ? (((((var_10) - (((/* implicit */unsigned long long int) var_0)))) >> (((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_13))))))) : (((((/* implicit */_Bool) ((var_9) % (((/* implicit */long long int) var_0))))) ? ((~(var_6))) : (((/* implicit */unsigned long long int) var_15))))));
                    var_19 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))), (((((/* implicit */_Bool) var_14)) ? (var_4) : (var_15)))))) | (max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_0)) > (var_12)))), (max((((/* implicit */unsigned long long int) var_2)), (var_10)))))));
                    var_20 &= ((/* implicit */int) ((((var_15) / (((/* implicit */long long int) ((/* implicit */int) var_8))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_2)))))));
                }
            } 
        } 
    } 
    var_21 = (~(max((max((((/* implicit */unsigned long long int) var_17)), (var_5))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_10))))));
}
