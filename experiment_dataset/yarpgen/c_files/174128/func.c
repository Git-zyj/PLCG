/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174128
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_10 = max((((long long int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1]))))), (min((((((var_1) + (9223372036854775807LL))) >> (((var_2) - (1951710414297957898LL))))), (((/* implicit */long long int) arr_1 [i_1] [i_1])))));
                var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) var_1))));
                var_12 = ((/* implicit */short) (~(((/* implicit */int) ((_Bool) arr_4 [i_0] [i_1])))));
                var_13 = ((/* implicit */long long int) ((arr_4 [i_0] [i_0]) && (((/* implicit */_Bool) ((arr_2 [i_0] [i_1] [i_1]) & (arr_2 [i_1] [i_1] [i_0]))))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) (unsigned short)960)))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4)))))));
    var_15 = ((/* implicit */signed char) var_9);
    var_16 = ((/* implicit */signed char) var_4);
}
