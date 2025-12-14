/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164081
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                var_10 ^= ((/* implicit */unsigned char) var_4);
                var_11 = ((/* implicit */unsigned int) (~(((/* implicit */int) min((arr_4 [i_1 - 1] [i_1 - 1]), (arr_4 [i_0] [i_0]))))));
                arr_6 [i_1] [i_1 - 1] = ((/* implicit */int) min((max((614002622454843978LL), (((/* implicit */long long int) ((unsigned char) var_2))))), (((/* implicit */long long int) var_7))));
            }
        } 
    } 
    var_12 *= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))));
    var_13 = ((/* implicit */unsigned char) ((short) max((((/* implicit */unsigned int) var_6)), (var_1))));
}
