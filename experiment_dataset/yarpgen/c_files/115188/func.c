/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115188
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
    var_15 = ((/* implicit */short) ((((/* implicit */long long int) (+(((var_13) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3))))))) + (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-99)) * (((/* implicit */int) var_6))))) ? (min((var_1), (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) ((/* implicit */int) (short)-9477)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((int) arr_3 [i_0] [i_0 - 4] [i_1])))));
                arr_5 [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)1)), (var_4)))) ? (((var_11) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_7), (((/* implicit */signed char) var_13)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-26114)) * (((/* implicit */int) var_12)))))));
            }
        } 
    } 
}
