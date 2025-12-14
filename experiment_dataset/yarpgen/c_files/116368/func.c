/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116368
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
    var_17 = ((/* implicit */signed char) var_6);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */short) (unsigned short)24168);
                arr_5 [i_1] [i_1] = ((/* implicit */long long int) min((((((((/* implicit */int) min((arr_3 [i_1]), (((/* implicit */short) (signed char)-73))))) + (2147483647))) >> (((4094) - (4071))))), (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) arr_0 [i_0])), (arr_3 [i_1])))))))));
            }
        } 
    } 
}
