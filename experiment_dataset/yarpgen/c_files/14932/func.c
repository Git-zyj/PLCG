/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14932
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
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                var_10 = min((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_4 [(unsigned char)5] [i_1])), (var_8))))))), (max((((arr_6 [i_1] [i_1 + 1] [i_0]) - (arr_3 [i_0] [i_1]))), (((/* implicit */int) arr_5 [i_1] [i_1 + 2] [i_1 + 2])))));
                arr_7 [i_1] [i_1 - 1] = ((/* implicit */_Bool) arr_2 [i_0]);
            }
        } 
    } 
    var_11 *= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((long long int) var_6))) ? (((var_0) / (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_9)))))), ((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_9)) : (var_0)))))));
}
