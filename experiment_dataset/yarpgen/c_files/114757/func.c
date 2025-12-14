/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114757
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
    for (signed char i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 22; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_7 [i_0 - 2] [i_2] [i_2] [i_2 - 1]), (((/* implicit */long long int) 1U))))) || (((/* implicit */_Bool) arr_7 [i_0 - 2] [i_0 + 1] [i_1] [i_1])))))));
                    var_21 = ((/* implicit */long long int) arr_6 [i_2]);
                }
            } 
        } 
    } 
    var_22 = ((((/* implicit */int) var_3)) - (var_7));
    var_23 = ((/* implicit */signed char) ((unsigned long long int) (unsigned char)7));
    var_24 = ((/* implicit */unsigned char) var_4);
}
