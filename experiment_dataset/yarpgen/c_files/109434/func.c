/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109434
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
    var_14 = ((/* implicit */int) ((min((var_2), (((/* implicit */unsigned long long int) (_Bool)1)))) <= (((/* implicit */unsigned long long int) (+(var_6))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) arr_0 [i_1 + 1] [i_1 - 2]))));
                var_16 &= ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) arr_2 [10ULL] [i_1 - 1])) ? (((/* implicit */int) arr_2 [i_1] [i_1 - 1])) : (((/* implicit */int) arr_2 [i_1] [i_1 - 1])))));
            }
        } 
    } 
}
