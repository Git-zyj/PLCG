/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141743
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
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) max((var_19), (((/* implicit */int) var_13))))), (((((arr_4 [(signed char)12]) + (9223372036854775807LL))) >> (((arr_5 [i_0] [i_0]) - (8509931717868095756LL)))))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) max((arr_4 [9LL]), (((/* implicit */long long int) var_18))))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) -1084662973)) : (arr_1 [i_0]))))) : (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_9)))))))));
                var_21 = ((/* implicit */unsigned char) ((signed char) min((min((var_12), (((/* implicit */short) var_4)))), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_6))) > (var_5)))))));
                var_22 = ((/* implicit */signed char) (-(-5226000383030347942LL)));
                arr_6 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)-14793))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) -858134940)) && (((/* implicit */_Bool) -4)))))) << (((((((/* implicit */_Bool) max((((/* implicit */long long int) var_13)), (arr_5 [i_0] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)58))) : (2629501443U))) - (51U)))));
            }
        } 
    } 
    var_23 *= ((/* implicit */_Bool) (((((+(((/* implicit */int) var_6)))) < (((/* implicit */int) var_9)))) ? (((long long int) ((var_15) + (((/* implicit */unsigned int) var_19))))) : (((/* implicit */long long int) max((-1084662992), (((/* implicit */int) var_11)))))));
}
