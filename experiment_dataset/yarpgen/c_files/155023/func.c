/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155023
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
    var_19 = ((/* implicit */_Bool) ((((unsigned long long int) var_9)) * (min((((/* implicit */unsigned long long int) var_16)), (var_6)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (~(((/* implicit */int) arr_3 [i_0])))))));
                arr_5 [i_1] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)45536);
                var_21 += ((long long int) (unsigned char)41);
                var_22 = ((/* implicit */signed char) var_6);
            }
        } 
    } 
}
