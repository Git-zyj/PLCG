/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166622
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
    var_10 = ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            {
                arr_5 [(short)4] [i_1] [i_1] = ((/* implicit */short) max((min((arr_1 [i_0 + 3]), (arr_1 [i_0 + 3]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) ((_Bool) var_6))) : (((/* implicit */int) ((short) var_6))))))));
                var_11 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) var_3)), (max((min((arr_1 [21]), (2138212627U))), (2156754681U)))));
                var_12 = ((/* implicit */unsigned char) min((((/* implicit */long long int) arr_2 [i_1] [i_1] [i_0])), ((~(arr_3 [i_1 + 1] [i_1])))));
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) var_2);
    var_14 = (+(((/* implicit */int) var_1)));
    var_15 = ((/* implicit */unsigned long long int) var_1);
}
