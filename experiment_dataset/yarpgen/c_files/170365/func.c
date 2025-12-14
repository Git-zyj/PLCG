/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170365
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
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (!(((((/* implicit */unsigned long long int) max((2147483645), (2147483645)))) > (((var_1) >> (((((/* implicit */int) var_13)) + (23728))))))))))));
    var_18 = ((/* implicit */unsigned long long int) min(((~(((((/* implicit */int) var_0)) << (((((/* implicit */int) var_8)) - (31919))))))), (((/* implicit */int) var_12))));
    var_19 = ((/* implicit */short) var_5);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_8 [i_0] [(short)18] [8LL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -6199003016198205604LL))));
                var_20 |= arr_5 [(short)3] [i_1];
                arr_9 [i_1] [i_1] [i_0] = ((/* implicit */short) (~(-1643840854)));
            }
        } 
    } 
}
