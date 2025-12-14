/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109102
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
    var_17 = ((/* implicit */unsigned char) (+(3486204503U)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_18 *= ((/* implicit */unsigned long long int) (~(0LL)));
                var_19 = ((/* implicit */short) arr_3 [(signed char)7]);
                arr_7 [i_0] = ((/* implicit */long long int) max((((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (arr_1 [i_0])));
            }
        } 
    } 
}
