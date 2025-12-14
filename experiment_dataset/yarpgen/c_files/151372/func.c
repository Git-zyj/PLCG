/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151372
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
    var_20 = ((/* implicit */short) (~(var_11)));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 2])) || (((/* implicit */_Bool) arr_2 [5U] [i_0 + 3])))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0 - 2] [i_0])))))));
                arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (unsigned char)127))));
                arr_6 [i_0] [i_1] [i_1] = (+(((/* implicit */int) min((arr_4 [i_0 + 4] [i_1]), (var_18)))));
                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 + 3])) ? (((/* implicit */int) arr_3 [i_0 - 2] [i_0 + 3])) : (((/* implicit */int) arr_3 [i_0] [i_0 + 3]))))) ? (((((/* implicit */int) arr_3 [i_0] [i_0 + 3])) / (((/* implicit */int) var_13)))) : ((+(((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 3])))))))));
            }
        } 
    } 
    var_23 = var_9;
}
