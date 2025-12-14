/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121486
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
    var_20 = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) var_6)), (((unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) ((var_6) + (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) % (var_16)))))))));
    var_21 = ((/* implicit */_Bool) min((((/* implicit */long long int) 32357276)), (max((var_13), (((/* implicit */long long int) max((((/* implicit */unsigned char) var_18)), (var_8))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) -2758803634298672131LL)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_10))))));
                var_22 = ((/* implicit */unsigned int) var_9);
            }
        } 
    } 
    var_23 = ((/* implicit */int) min((((/* implicit */long long int) var_4)), (((((/* implicit */long long int) var_19)) + (max((var_13), (((/* implicit */long long int) var_14))))))));
}
