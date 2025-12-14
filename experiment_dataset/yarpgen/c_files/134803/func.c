/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134803
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
    var_14 -= ((/* implicit */short) min((var_7), (((/* implicit */long long int) ((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)26)))) >> (((((/* implicit */int) min((((/* implicit */short) var_10)), (var_0)))) + (17527))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_15 *= ((/* implicit */unsigned char) ((((/* implicit */int) (short)-22557)) != (((/* implicit */int) (short)22557))));
                arr_5 [i_0] [(signed char)2] [i_0] = ((/* implicit */int) min((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned char)253)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)22557)))))));
            }
        } 
    } 
    var_16 &= ((/* implicit */int) var_11);
    var_17 &= ((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
}
