/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117712
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
    var_17 = ((/* implicit */int) var_2);
    var_18 = ((/* implicit */unsigned int) var_1);
    var_19 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (min((((/* implicit */unsigned int) var_0)), (536870912U))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                arr_4 [(short)5] [i_1 - 1] [i_1 - 1] = ((/* implicit */unsigned char) var_9);
                arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_1 [i_0 - 1]))) ? (-815851551) : (((/* implicit */int) (!(((/* implicit */_Bool) min((var_7), (((/* implicit */long long int) var_12))))))))));
                var_20 = ((/* implicit */long long int) ((var_9) ? ((-(((((/* implicit */int) (unsigned char)94)) - (((/* implicit */int) var_14)))))) : (((/* implicit */int) (unsigned short)0))));
                var_21 = ((/* implicit */int) ((short) max((var_0), (((/* implicit */int) var_2)))));
            }
        } 
    } 
}
