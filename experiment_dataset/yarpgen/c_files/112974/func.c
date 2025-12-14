/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112974
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
    var_10 = ((/* implicit */unsigned char) var_4);
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned int) (~((+((((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1])))))))));
                arr_6 [i_0 - 3] [i_1 + 1] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_3 [i_0 + 1]) : (arr_3 [i_0 - 3]))) <= (((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (arr_3 [i_0 - 3]) : (arr_3 [i_0 - 3])))));
                var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))))));
                var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) arr_3 [i_0]))));
            }
        } 
    } 
}
