/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153253
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_2))) >= (((long long int) ((var_11) / (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
    var_18 -= ((/* implicit */unsigned int) var_14);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_0] [i_1 - 1] [i_0])) ? (max((arr_6 [i_1 - 1] [i_1 + 1] [i_1 + 1]), (((/* implicit */long long int) var_0)))) : (var_10)));
                var_20 &= ((/* implicit */unsigned int) max((min((((/* implicit */long long int) arr_5 [(short)9] [i_1 + 1] [i_1 - 1])), (var_10))), (arr_6 [i_1] [i_1 - 1] [i_1 - 1])));
            }
        } 
    } 
    var_21 = max((((/* implicit */long long int) ((unsigned short) ((unsigned short) var_10)))), (max((min((var_13), (((/* implicit */long long int) var_12)))), (((/* implicit */long long int) ((unsigned char) var_6))))));
}
