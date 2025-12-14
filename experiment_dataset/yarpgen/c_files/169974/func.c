/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169974
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
    var_12 = ((/* implicit */long long int) var_7);
    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */int) var_0)) ^ (var_9)))) ? (var_2) : (-1105800544))))))));
    var_14 = ((((/* implicit */_Bool) max((((((((/* implicit */int) var_0)) + (2147483647))) << (((((/* implicit */int) var_10)) - (137))))), (var_2)))) ? (-1597603670) : (max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (var_9))), (((/* implicit */int) min((var_3), ((_Bool)1)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_11 [11] [11] [17] &= ((/* implicit */short) var_4);
                    var_15 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 2065474962U)) ? (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_1)), (var_4)))) : (arr_8 [i_0 - 3]))) : (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_9 [i_0] [i_1] [i_2])), (var_6)))), (arr_7 [i_1])))));
                }
            } 
        } 
    } 
}
