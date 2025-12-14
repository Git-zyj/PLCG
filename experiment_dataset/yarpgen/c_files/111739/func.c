/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111739
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
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            {
                var_19 -= ((/* implicit */_Bool) ((((int) var_5)) << ((+(9U)))));
                var_20 = ((/* implicit */short) var_15);
                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (arr_3 [i_0 + 2]) : (((/* implicit */long long int) 0U))));
                var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) arr_4 [i_0 + 2])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                var_23 = ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46781))) > (var_3)))) & (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_11)) : (var_15))))) <= (((/* implicit */int) var_6))));
            }
        } 
    } 
    var_24 += ((/* implicit */_Bool) var_18);
}
