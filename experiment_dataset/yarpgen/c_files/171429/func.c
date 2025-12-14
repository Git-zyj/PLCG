/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171429
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
    var_11 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((min((var_6), (var_2))) ? (((/* implicit */int) max((((/* implicit */short) var_3)), (var_1)))) : (((/* implicit */int) max((var_1), (((/* implicit */short) var_6)))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_6))))), (max((((/* implicit */unsigned long long int) var_6)), (var_0)))))));
    var_12 = ((/* implicit */short) ((unsigned int) max((((/* implicit */int) max((var_1), (((/* implicit */short) var_6))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) max((var_1), (var_1)))) / (((/* implicit */int) var_9)))) + (max((((((/* implicit */int) var_2)) + (((/* implicit */int) var_2)))), (((/* implicit */int) min((var_9), (((/* implicit */unsigned char) var_6)))))))));
                var_13 = ((/* implicit */unsigned short) (+(((/* implicit */int) max((((/* implicit */unsigned char) max((((/* implicit */signed char) var_6)), (var_7)))), (var_3))))));
            }
        } 
    } 
}
