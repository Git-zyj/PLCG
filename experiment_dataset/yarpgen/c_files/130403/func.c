/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130403
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
    var_10 = ((/* implicit */signed char) ((var_1) / (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) ((signed char) var_3))), (((unsigned char) var_9))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] |= ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (min((var_1), (var_1))) : (((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned long long int) var_6))))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (var_5)))) % (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_8)) : (var_6)))));
                arr_8 [i_1] [i_1] = ((short) max((((((/* implicit */int) (signed char)-1)) / (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((_Bool) var_1)))));
                var_11 *= ((/* implicit */short) var_8);
            }
        } 
    } 
}
