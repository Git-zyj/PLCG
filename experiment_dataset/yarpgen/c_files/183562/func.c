/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183562
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
    var_20 = min((((/* implicit */unsigned long long int) var_11)), (((unsigned long long int) min((var_15), (((/* implicit */long long int) var_9))))));
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) max((((((/* implicit */int) var_17)) * (((/* implicit */int) var_11)))), (((/* implicit */int) max((((/* implicit */short) var_16)), (var_18))))))), (var_13))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */long long int) (+(((/* implicit */int) min((arr_5 [i_1 - 1]), (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) > (var_15))))))));
                var_23 = ((/* implicit */short) ((max((((/* implicit */unsigned int) arr_2 [i_1 - 2])), (((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))) : (arr_4 [i_0]))))) < (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) var_9);
}
