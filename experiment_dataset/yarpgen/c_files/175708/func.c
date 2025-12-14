/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175708
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
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_12 += var_0;
                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) max((((arr_3 [i_0 - 1]) - (arr_3 [i_0 - 2]))), (arr_3 [i_0 + 1]))))));
                var_14 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((max((-2147483645), (((/* implicit */int) var_5)))) | (((/* implicit */int) var_2))))), (max((((/* implicit */unsigned long long int) 2147483645)), (((unsigned long long int) arr_2 [i_0]))))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) + (var_8)));
}
