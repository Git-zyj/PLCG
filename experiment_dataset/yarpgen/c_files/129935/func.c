/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129935
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
    var_13 = ((/* implicit */unsigned int) var_6);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */int) var_9)) != (((/* implicit */int) var_11)))) ? (max((((unsigned long long int) var_6)), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_9)), (var_12)))))) : (((/* implicit */unsigned long long int) min((min((var_2), (((/* implicit */unsigned int) var_7)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))))))));
                var_14 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) var_8)) <= (min((((/* implicit */long long int) var_10)), (var_6))))) ? (max((max((((/* implicit */unsigned int) var_11)), (var_1))), (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) * (((/* implicit */int) var_9))))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((min(((short)20517), (((/* implicit */short) var_11)))), (((/* implicit */short) ((var_6) == (((/* implicit */long long int) ((/* implicit */int) var_9))))))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned short) min((var_5), (var_11))))), (max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_1)) : (var_6))), (((/* implicit */long long int) min((var_4), (((/* implicit */signed char) var_0)))))))));
}
