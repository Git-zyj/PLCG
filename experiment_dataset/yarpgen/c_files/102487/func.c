/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102487
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
    for (int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((/* implicit */int) (unsigned short)31291)) : (var_7))), (((/* implicit */int) ((signed char) arr_1 [i_0 + 1])))));
                var_21 = ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) var_2)), (arr_2 [i_0 + 2] [i_1]))), (((((/* implicit */_Bool) var_8)) ? (arr_2 [i_0 + 2] [i_1]) : (arr_2 [i_0 + 2] [i_0])))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) (((~((~(-1718948468))))) ^ (((/* implicit */int) var_3))));
    var_23 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) min((var_1), (((/* implicit */long long int) var_18))))) ? (min((((/* implicit */unsigned long long int) var_16)), (var_0))) : (((/* implicit */unsigned long long int) ((long long int) var_8))))), (((unsigned long long int) ((var_8) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-87))))))));
}
