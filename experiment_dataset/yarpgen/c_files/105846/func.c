/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105846
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
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) 337792465U))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1 + 1] [i_0])) || (arr_4 [11ULL] [i_1])))), (((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (-9223372036854775807LL))))), (((/* implicit */long long int) min((((/* implicit */signed char) arr_4 [i_0 + 2] [i_0 + 2])), ((signed char)-113))))));
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)117)) ? (9223372036854775807LL) : (3LL)));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_3 = 1; i_3 < 17; i_3 += 4) 
    {
        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_16 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 9223372036854775807LL)) ? (338722398872053310ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17425))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17418)))));
                    var_17 = ((/* implicit */signed char) ((int) min((((/* implicit */long long int) 4294967295U)), (-5900667647129857693LL))));
                }
            } 
        } 
    } 
}
