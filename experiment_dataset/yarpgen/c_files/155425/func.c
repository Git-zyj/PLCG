/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155425
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
    var_17 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) var_15)) : (1968798439U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_12))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_6 [i_0] [18U] [i_0] [i_0]), (((/* implicit */long long int) 1968798416U))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (8388607LL)));
                    var_19 = ((/* implicit */unsigned short) arr_6 [i_0] [i_1] [i_1] [i_0]);
                    arr_7 [i_1] = arr_1 [i_1];
                }
            } 
        } 
    } 
}
