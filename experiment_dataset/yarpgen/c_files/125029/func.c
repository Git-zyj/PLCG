/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125029
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_9 [i_2] [(_Bool)0] = ((/* implicit */int) arr_1 [i_0]);
                    arr_10 [i_2] [i_1] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (0ULL)));
                }
            } 
        } 
    } 
    var_13 *= ((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_0)), (1832569230U))))))), (min((((/* implicit */unsigned int) (!(var_11)))), (var_6)))));
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((-(var_8))), (var_6)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1832569205U))))) : ((+(((((/* implicit */int) var_1)) >> (((var_6) - (4086312657U)))))))));
}
