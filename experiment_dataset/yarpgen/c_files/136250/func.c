/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136250
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
    var_13 *= ((/* implicit */_Bool) -533120303);
    var_14 = ((/* implicit */signed char) (short)3378);
    var_15 = ((/* implicit */_Bool) var_12);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned long long int) min((arr_0 [i_0] [i_1]), (((/* implicit */unsigned int) ((int) arr_5 [i_0] [i_1 + 1])))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */int) min((((/* implicit */short) (signed char)-13)), (arr_5 [i_0 + 1] [i_0 + 1])))) + (2147483647))) >> (max((((/* implicit */long long int) arr_1 [i_0 + 1])), (var_6)))));
                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (~(((arr_4 [i_1 + 2] [i_1 - 1] [i_1 - 1]) ? ((-(((/* implicit */int) arr_1 [i_0 + 1])))) : (((/* implicit */int) arr_4 [(signed char)16] [i_1 - 1] [i_1 + 1])))))))));
                var_17 = ((/* implicit */_Bool) 716601103);
            }
        } 
    } 
    var_18 -= min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)34)) ? (((/* implicit */long long int) ((((/* implicit */int) var_12)) - (-533120295)))) : (var_3)))), (((((/* implicit */_Bool) -716601115)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))));
}
