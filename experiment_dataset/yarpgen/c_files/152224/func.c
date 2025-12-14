/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152224
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
    for (signed char i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */int) (_Bool)0);
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (+(((var_2) & (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1])))))));
                    var_13 = ((/* implicit */signed char) min(((~(((/* implicit */int) var_6)))), (((/* implicit */int) var_9))));
                    var_14 &= ((/* implicit */unsigned int) ((unsigned short) max((((/* implicit */unsigned int) ((1162714488) | (((/* implicit */int) var_11))))), ((~(var_2))))));
                }
            } 
        } 
    } 
    var_15 += var_1;
}
