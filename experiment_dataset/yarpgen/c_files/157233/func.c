/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157233
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                var_15 -= ((/* implicit */short) max(((~(0LL))), (((/* implicit */long long int) ((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((arr_4 [i_0]) && (((/* implicit */_Bool) var_4))))))))));
                arr_6 [i_0] [i_1 + 1] [i_1 + 1] = ((/* implicit */long long int) arr_0 [i_0]);
                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((-(1073741823))), (((/* implicit */int) ((var_11) <= (((/* implicit */unsigned long long int) 9223372036854775807LL)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) arr_5 [(_Bool)1]))))) * (((/* implicit */int) arr_4 [2]))))) : (max((((/* implicit */unsigned long long int) arr_2 [i_0] [(short)0] [i_1 - 1])), (max((var_11), (var_11)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? ((-(var_9))) : (var_8))))));
}
