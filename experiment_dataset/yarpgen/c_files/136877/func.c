/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136877
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
    var_15 = ((/* implicit */signed char) min((((((((/* implicit */int) var_7)) + (2147483647))) >> (((((/* implicit */int) var_13)) - (61064))))), (((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */int) var_3)) >= (((/* implicit */int) var_11))))), (var_14))))));
    var_16 = var_11;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                var_17 = ((unsigned short) ((((/* implicit */int) min((var_11), (arr_0 [i_0])))) & (((((((/* implicit */int) var_7)) + (2147483647))) >> (((((/* implicit */int) var_11)) + (122)))))));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) <= (min((((((/* implicit */int) var_2)) * (((/* implicit */int) var_6)))), (((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (var_10))))))));
            }
        } 
    } 
}
