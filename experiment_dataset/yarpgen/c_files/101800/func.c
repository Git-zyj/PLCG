/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101800
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) var_2))))), (((var_2) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_19))))) <= (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_0 - 1])) ^ (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])))))));
                var_21 = ((/* implicit */short) arr_2 [i_0] [i_1] [i_0]);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((int) max(((+(((/* implicit */int) var_10)))), (((/* implicit */int) max(((_Bool)1), (var_7)))))));
    var_23 = ((/* implicit */long long int) var_6);
}
