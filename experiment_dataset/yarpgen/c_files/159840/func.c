/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159840
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
    var_17 += ((/* implicit */short) (!((((~(((/* implicit */int) var_15)))) != (((/* implicit */int) var_7))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_18 *= ((/* implicit */_Bool) max((((/* implicit */int) var_7)), ((((+(((/* implicit */int) var_11)))) >> ((+(((/* implicit */int) var_11))))))));
                var_19 ^= ((/* implicit */long long int) (-((~(((var_3) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
                var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_12) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))) ? ((~(((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (var_13)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) var_11)), (var_6)))))))));
                var_21 = (~(((/* implicit */int) (((+(((/* implicit */int) var_7)))) < (var_6)))));
                var_22 = ((/* implicit */int) (-((-(4294967295U)))));
            }
        } 
    } 
}
