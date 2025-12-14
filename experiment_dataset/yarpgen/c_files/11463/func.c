/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11463
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
    var_13 -= ((/* implicit */int) var_0);
    var_14 = ((/* implicit */signed char) var_5);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) min((((_Bool) arr_3 [i_0 - 3] [i_0 - 3] [i_0 - 3])), ((_Bool)1)));
                    arr_8 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1476812626U)) ? (((/* implicit */long long int) ((2818154689U) >> (0U)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_10)))) : (max((var_5), (((/* implicit */long long int) (_Bool)1))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */long long int) var_10);
}
