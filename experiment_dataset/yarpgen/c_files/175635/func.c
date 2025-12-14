/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175635
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
    var_12 = ((/* implicit */unsigned int) max(((((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_2) == (var_11))))) : (var_1))), (((/* implicit */unsigned long long int) min((((unsigned short) var_9)), (((/* implicit */unsigned short) var_10)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) arr_1 [i_0 - 2] [i_0 - 1])), (arr_3 [i_0 + 2] [i_0 - 2]))), (((/* implicit */long long int) ((((/* implicit */_Bool) 7397205428462507604LL)) || (((/* implicit */_Bool) 7177664029385464124ULL)))))));
                var_14 = ((/* implicit */_Bool) arr_1 [(short)8] [i_1]);
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) ((unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_10)) / (((/* implicit */int) var_5))))))));
}
