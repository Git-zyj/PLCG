/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182263
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
    var_13 = ((/* implicit */unsigned char) max((4146338408U), (((/* implicit */unsigned int) (unsigned short)4611))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                arr_6 [i_0] = min((((/* implicit */int) ((_Bool) var_9))), (((arr_5 [i_0 - 4] [i_1 + 2]) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_5 [i_0 - 1] [i_1 - 1])))));
                var_14 = ((/* implicit */signed char) min((var_14), (min((min((((/* implicit */signed char) var_12)), ((signed char)96))), (((/* implicit */signed char) arr_5 [0ULL] [i_1 + 1]))))));
                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((_Bool) min((((arr_2 [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [0U] [i_1]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)19329)) ? (((/* implicit */int) arr_4 [i_0] [i_1 + 1] [8])) : (656366945))))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) max((var_16), (var_5)));
}
