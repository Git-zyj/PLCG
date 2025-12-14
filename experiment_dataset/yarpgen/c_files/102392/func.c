/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102392
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
    var_20 = ((/* implicit */signed char) (-(((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) * (var_5)))) ? (((unsigned long long int) arr_4 [i_1])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1])))))));
                arr_7 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((((arr_2 [i_1] [10U]) * (var_2))), (min((((/* implicit */unsigned int) var_4)), (var_2)))))) <= ((~(var_18)))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((_Bool) var_9));
}
