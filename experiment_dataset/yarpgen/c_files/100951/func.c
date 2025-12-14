/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100951
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
    var_12 = ((/* implicit */long long int) ((unsigned int) var_11));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_7)) ? (arr_5 [i_1] [i_1] [i_1 - 1]) : (arr_5 [i_0] [i_1] [i_1 - 1]))) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_0 [i_0] [i_1 - 1]), (3213690394U)))))))))))));
                var_14 = ((((arr_1 [i_1 - 1] [i_0]) ? (((/* implicit */unsigned int) var_0)) : (arr_0 [i_1] [i_0]))) - (((((arr_0 [5U] [i_1]) / (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) << (((((-328102937) / (((/* implicit */int) arr_3 [i_0 + 1])))) + (8736))))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) var_6))));
}
