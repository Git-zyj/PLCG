/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128573
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
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 7; i_1 += 3) 
        {
            {
                var_18 -= ((/* implicit */short) (~(((/* implicit */int) ((((((/* implicit */int) var_15)) * (8388607))) > (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_3 [(short)8])) : (((/* implicit */int) var_15)))))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) : (var_4)))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (short)8877))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-54))))) : (10601429404705475603ULL))) : (((/* implicit */unsigned long long int) max(((-(var_13))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (5) : (0)))))))));
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */signed char) var_2);
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) (-2147483647 - 1));
    var_20 = ((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_12))))), (var_5)));
}
