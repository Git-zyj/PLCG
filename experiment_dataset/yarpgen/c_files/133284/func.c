/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133284
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
    var_19 |= ((/* implicit */long long int) max((((((/* implicit */int) min((((/* implicit */signed char) var_14)), ((signed char)-122)))) - (((/* implicit */int) var_7)))), (((/* implicit */int) (short)32767))));
    var_20 = ((/* implicit */unsigned int) var_11);
    var_21 *= ((/* implicit */_Bool) (-(min(((+(((/* implicit */int) var_12)))), (var_3)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_22 = ((/* implicit */unsigned char) 4272396085U);
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */long long int) var_3);
                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (_Bool)1))));
            }
        } 
    } 
}
