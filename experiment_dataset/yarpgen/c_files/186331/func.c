/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186331
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
    var_20 = ((/* implicit */short) max((((/* implicit */unsigned short) ((unsigned char) (unsigned short)45973))), (var_6)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned char) arr_4 [i_1]);
                var_22 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (+(3708995520U)))), (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0])))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-(var_4)));
            }
        } 
    } 
    var_23 = var_3;
}
