/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141840
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) -7712639175829546260LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32756))) : (-7712639175829546260LL))));
                var_16 ^= ((/* implicit */unsigned char) max((((7712639175829546260LL) ^ (var_4))), (((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-93)) + (2147483647))) << (((9223372036854775795LL) - (9223372036854775795LL)))))) ? (((long long int) var_1)) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_8))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) var_0);
    var_18 &= min((((unsigned long long int) (+(var_4)))), (((/* implicit */unsigned long long int) max((((var_8) & (825478126584459606LL))), (((/* implicit */long long int) (~(-104103670))))))));
    var_19 = ((/* implicit */unsigned char) var_14);
}
