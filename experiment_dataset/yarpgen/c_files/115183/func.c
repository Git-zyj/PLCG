/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115183
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
    var_16 = ((/* implicit */unsigned char) var_10);
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((var_6) > (var_5)))) : (var_13)))) + (((((var_7) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_14))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))))))))));
    var_18 = ((/* implicit */long long int) var_12);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) > (var_8)))) > (((/* implicit */int) ((var_13) > (((/* implicit */int) var_4)))))));
                arr_7 [i_0] = ((/* implicit */unsigned long long int) ((var_8) == (var_8)));
                arr_8 [i_0] = ((/* implicit */unsigned long long int) var_15);
            }
        } 
    } 
    var_20 = ((/* implicit */int) var_2);
}
