/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106120
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
    var_19 = var_15;
    var_20 += ((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_1)) << (((((/* implicit */int) var_17)) - (11092))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) ((int) 13451944607822658989ULL))), (((unsigned long long int) arr_2 [i_0])))) >= (((/* implicit */unsigned long long int) 706648662))));
                arr_4 [i_0] [i_1] [i_1 - 2] = ((/* implicit */int) max((((((/* implicit */_Bool) 660151053466723408ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)0)))) : (1073741823ULL))), (((/* implicit */unsigned long long int) var_17))));
                var_22 *= var_6;
            }
        } 
    } 
}
