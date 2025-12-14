/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129126
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
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 7; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((((long long int) max((arr_0 [5U]), (((/* implicit */long long int) 410929114U))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((7858432929762314347LL) ^ (var_12)))))))));
                arr_7 [i_1] [i_0 - 1] [5U] = ((/* implicit */long long int) 410929111U);
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    var_13 = ((/* implicit */unsigned int) (+((-9223372036854775807LL - 1LL))));
                    var_14 = ((/* implicit */unsigned int) -7858432929762314348LL);
                }
                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) 410929121U)) ? (((((/* implicit */_Bool) ((arr_0 [i_0 - 1]) + (((/* implicit */long long int) 410929111U))))) ? (1321888987U) : (((/* implicit */unsigned int) var_1)))) : (3848254459U)));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) 7858432929762314347LL);
    var_17 ^= ((/* implicit */int) 410929114U);
}
