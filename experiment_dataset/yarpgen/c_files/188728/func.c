/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188728
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
    var_19 |= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) * (3400725410U)));
    var_20 *= ((/* implicit */unsigned int) (unsigned short)53968);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) arr_0 [i_0] [(_Bool)1]);
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_3 [i_0] [i_1])), (var_9)))), (var_15)))) ? (3541385650U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned int) (_Bool)0)), (895927456U))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((max((((var_0) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11573))))), (var_15))) + (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_9)) : (min((var_13), (((/* implicit */unsigned long long int) (unsigned short)53968))))))));
}
