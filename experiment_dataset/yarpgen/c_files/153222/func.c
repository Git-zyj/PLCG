/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153222
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
    var_14 = ((/* implicit */unsigned int) max((var_7), (((((/* implicit */long long int) var_2)) + (min((((/* implicit */long long int) var_5)), (var_7)))))));
    var_15 = ((/* implicit */_Bool) max((min((min((((/* implicit */long long int) var_3)), (var_10))), (((/* implicit */long long int) max((((/* implicit */int) var_3)), (var_0)))))), (((/* implicit */long long int) min((((/* implicit */int) ((var_7) >= (var_10)))), (max((((/* implicit */int) var_12)), (var_5))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                arr_6 [i_0] [(unsigned short)0] [i_0] = ((/* implicit */int) min((max((((var_13) | (((/* implicit */long long int) arr_3 [i_0])))), (((/* implicit */long long int) ((unsigned int) arr_2 [i_0]))))), (((/* implicit */long long int) ((unsigned int) arr_3 [i_0])))));
                var_16 = ((/* implicit */long long int) max((arr_1 [i_0] [i_1 + 4]), (((/* implicit */unsigned char) var_9))));
            }
        } 
    } 
}
