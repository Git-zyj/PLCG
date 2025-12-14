/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153042
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
    var_14 ^= ((/* implicit */signed char) max((min((var_2), (((/* implicit */int) var_9)))), (((/* implicit */int) var_7))));
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) min((((var_11) ? (((/* implicit */unsigned int) var_2)) : (4294967295U))), (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_10)))))))) ? (min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_1)) : (332093490))), (((((/* implicit */int) var_11)) | (((/* implicit */int) var_11)))))) : (((/* implicit */int) var_1))));
    var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_8)))))) <= (min((((/* implicit */unsigned long long int) ((var_10) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)17484))))), (var_4)))));
    var_17 = ((/* implicit */short) var_5);
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) ((((-7520173883549722290LL) + (9223372036854775807LL))) >> (((-922967305) + (922967358)))))))));
                    arr_9 [i_1] [i_1] [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) - (((/* implicit */int) var_13))));
                }
            } 
        } 
    } 
}
