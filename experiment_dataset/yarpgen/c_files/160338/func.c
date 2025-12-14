/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160338
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
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (var_14))))))));
                var_19 = arr_0 [i_0] [i_0];
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (arr_2 [(short)7]) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) arr_3 [i_1])) + (arr_4 [i_1] [4] [i_0]))) : (((arr_2 [(signed char)1]) - (arr_4 [i_1] [i_1] [1ULL])))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) var_16))));
    var_22 = ((/* implicit */int) var_4);
    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) var_14))));
}
