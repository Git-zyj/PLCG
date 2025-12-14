/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146871
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
    for (signed char i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_3 [i_0] [i_0])), (var_17)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [3ULL])) | (((/* implicit */int) arr_3 [i_0 - 2] [i_0]))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-63))) : (0ULL))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) min((((/* implicit */short) arr_3 [i_0] [i_0])), (var_10)))), ((-(((/* implicit */int) var_14)))))))));
                var_19 = ((/* implicit */signed char) (~((~(arr_2 [i_0 + 2] [i_0 + 2] [i_0 - 1])))));
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_12)) & (0ULL)));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))));
}
