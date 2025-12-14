/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149245
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((((var_1) - (var_1))), (max((((/* implicit */long long int) var_2)), (var_1)))))) == (max((max((var_7), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) ((var_10) <= (((/* implicit */long long int) ((/* implicit */int) var_12))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) min((min((max((((/* implicit */long long int) var_8)), (var_10))), (((/* implicit */long long int) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_6))))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) min((var_8), (((/* implicit */short) var_12))))), (min((var_5), (((/* implicit */unsigned int) var_12)))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_6), (var_4))))) > (max((max((var_7), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) var_10))))));
                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) min((((/* implicit */unsigned long long int) var_3)), (max((min((var_7), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))))))))))));
            }
        } 
    } 
}
