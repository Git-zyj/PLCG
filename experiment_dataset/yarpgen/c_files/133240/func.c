/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133240
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
    var_11 = max((min((((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) || (((/* implicit */_Bool) -2147483619))))), ((-2147483647 - 1)))), (-2147483617));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_6 [i_1] [i_2])) : (1884440896)))) ? (((((/* implicit */int) var_1)) - (((/* implicit */int) var_0)))) : (((((/* implicit */int) var_0)) / (((/* implicit */int) var_5))))))));
                    var_12 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 0)), (0ULL))))))));
                }
            } 
        } 
    } 
}
