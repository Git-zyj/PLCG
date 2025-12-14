/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176956
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
    for (int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 22; i_1 += 4) 
        {
            {
                var_16 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((int) ((int) (signed char)-108)))) ? (-7LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)194)))));
                var_17 = ((/* implicit */signed char) var_4);
                var_18 = ((/* implicit */short) ((long long int) min((((-1185354657) / (((/* implicit */int) arr_1 [i_0] [i_1 + 1])))), (((((/* implicit */int) var_9)) / (((/* implicit */int) arr_1 [i_0] [i_0])))))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1185354657))))) : (((/* implicit */int) var_13)))) / (((/* implicit */int) ((signed char) (~(((/* implicit */int) (unsigned char)62))))))));
}
