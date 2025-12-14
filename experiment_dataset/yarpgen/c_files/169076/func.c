/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169076
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) arr_1 [i_0] [17U]))));
                var_21 = ((/* implicit */signed char) (-(max((max((((/* implicit */unsigned long long int) arr_2 [i_0] [(short)8])), (arr_1 [(unsigned short)6] [i_0]))), ((~(arr_1 [i_0] [i_0])))))));
            }
        } 
    } 
    var_22 += ((/* implicit */unsigned short) ((((((((/* implicit */int) (unsigned char)136)) << (((1618223750U) - (1618223743U))))) <= (var_15))) ? (max((((/* implicit */unsigned long long int) ((long long int) var_19))), (var_4))) : (((/* implicit */unsigned long long int) var_15))));
}
