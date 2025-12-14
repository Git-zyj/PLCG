/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179022
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (min(((((_Bool)1) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((/* implicit */long long int) arr_1 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))) : (var_6))))))));
                arr_6 [i_1] [i_1] = ((/* implicit */int) min((max((((/* implicit */unsigned int) arr_4 [i_1])), (min((((/* implicit */unsigned int) var_9)), (255U))))), (((/* implicit */unsigned int) ((unsigned short) arr_3 [i_0] [i_1] [i_0])))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) max(((_Bool)1), ((_Bool)1)));
}
