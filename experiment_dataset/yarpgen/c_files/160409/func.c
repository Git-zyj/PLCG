/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160409
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
    var_12 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (-(var_6)))))) ? ((-(var_10))) : (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) var_0)) < (var_3)))))))));
    var_13 += ((/* implicit */unsigned int) ((((var_11) + (2147483647))) << ((((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) * (var_3))))) - (12856748835320669321ULL)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 4; i_1 < 22; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */int) ((((max((((/* implicit */long long int) (unsigned char)64)), (-3511623856464462208LL))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_0] [i_1])))))))) >> (((min((((/* implicit */long long int) arr_4 [i_1] [i_1 - 2] [i_1 - 1])), (var_10))) + (1613880709645714157LL)))));
                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */long long int) (-(arr_3 [i_0] [i_1] [i_0])))) & (max((((var_4) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */long long int) arr_0 [i_0])))))))));
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(var_4)))) >= (var_2)));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) var_9);
}
