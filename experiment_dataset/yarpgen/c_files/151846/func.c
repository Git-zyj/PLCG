/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151846
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
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */int) arr_3 [i_0] [(unsigned short)10] [i_0 + 1]);
                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((unsigned long long int) (-(((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 1] [i_0 + 1]))))))));
                var_20 = ((/* implicit */int) max((((unsigned long long int) max(((short)-8962), (((/* implicit */short) arr_1 [i_0]))))), (((/* implicit */unsigned long long int) max((4294967295U), (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_1])) + (((/* implicit */int) arr_1 [i_0]))))))))));
                var_21 = ((/* implicit */unsigned char) max((min((min((4294967295U), (((/* implicit */unsigned int) arr_1 [i_0])))), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) var_5)), (arr_1 [(signed char)20])))))), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_2 [i_0])))), (((((/* implicit */_Bool) 4294967294U)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned char)127)))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) (unsigned char)114)))))), (((var_5) ? (var_15) : (((/* implicit */long long int) max((1U), (4294967294U))))))));
}
