/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150076
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
    var_12 = ((/* implicit */unsigned short) (((_Bool)0) || (((/* implicit */_Bool) var_6))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 18; i_1 += 3) 
        {
            {
                arr_7 [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) ((signed char) (unsigned char)63)))) ? (((/* implicit */unsigned long long int) arr_2 [0LL])) : (min((min((4888879213625787564ULL), (17352002434525226514ULL))), (17352002434525226514ULL)))));
                var_13 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (unsigned char)221)), (17352002434525226514ULL)));
                arr_8 [i_0] = ((/* implicit */_Bool) max((min((var_1), (((/* implicit */unsigned short) arr_6 [i_1] [i_1 - 1] [i_1])))), (((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_1 - 3] [i_1 + 2] [i_1 + 2])) > (((/* implicit */int) arr_6 [i_1] [i_1 + 1] [(unsigned short)14])))))));
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) var_2);
    var_15 = ((/* implicit */long long int) 1094741639184325101ULL);
    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((unsigned long long int) (((-(1094741639184325101ULL))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) * (((/* implicit */int) var_6)))))))))));
}
