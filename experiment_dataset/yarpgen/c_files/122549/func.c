/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122549
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
    var_18 = ((((/* implicit */long long int) var_9)) ^ (((((/* implicit */long long int) var_14)) ^ (((var_2) / (((/* implicit */long long int) 13U)))))));
    var_19 = ((/* implicit */unsigned int) var_10);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (~(var_11)))) ? (max((((/* implicit */long long int) 13U)), (arr_1 [i_0] [i_1]))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (arr_1 [i_0] [i_1]) : (var_13))))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) ((13U) ^ (var_11)))) ? ((+(((/* implicit */int) arr_3 [i_1])))) : (((/* implicit */int) var_10)))))));
                var_21 = ((((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) | (((/* implicit */long long int) arr_2 [i_0] [i_0]))))) ? ((~(arr_2 [i_0] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_2 [i_0] [i_0])))));
            }
        } 
    } 
}
