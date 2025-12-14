/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173128
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
    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) min((-249131105), (249131104))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_2] [i_2] = ((/* implicit */int) ((((unsigned int) var_10)) != (var_10)));
                    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned short) var_9))))) ? (((/* implicit */int) min((var_4), (((/* implicit */unsigned short) arr_1 [i_1 - 1]))))) : (((/* implicit */int) ((5668575698850614696LL) == (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 + 1]))))))));
                    var_13 = ((/* implicit */unsigned long long int) arr_3 [i_0] [11U] [i_2 - 3]);
                    var_14 = ((/* implicit */_Bool) ((int) ((710427862U) / (var_5))));
                }
            } 
        } 
    } 
    var_15 = var_6;
    var_16 = ((/* implicit */_Bool) var_8);
}
