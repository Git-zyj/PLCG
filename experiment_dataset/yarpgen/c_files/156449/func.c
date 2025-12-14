/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156449
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
    for (signed char i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_15))))))) / (9U)));
                var_19 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_5 [i_0] [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0 + 1] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0 + 1] [i_0 + 1])))), (((/* implicit */int) var_1))));
                arr_7 [i_0 - 1] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_14);
            }
        } 
    } 
    var_20 -= ((/* implicit */_Bool) var_5);
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(max((var_17), (((/* implicit */unsigned long long int) (signed char)82))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (13U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-9409)))))) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
}
