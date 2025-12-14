/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120712
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0 - 2] [i_0 - 2] = min(((+((-(var_12))))), (((unsigned long long int) arr_4 [i_0 - 1])));
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_6 [i_0 + 1] [i_0 - 3]), (var_8)))) ? (((/* implicit */unsigned long long int) (~(1254704155U)))) : (min((((unsigned long long int) var_10)), (((/* implicit */unsigned long long int) arr_7 [17ULL] [22U] [17ULL] [i_0])))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) (+((+(var_12)))));
    var_17 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)12))));
}
