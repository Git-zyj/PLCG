/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141517
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
    var_18 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))))))));
    var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(1683148632)))) ? (((var_16) | (var_15))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_14))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */int) var_12)) & (61440))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */short) ((3082107182381956443LL) + (((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_0 - 3] [i_1 - 1])))))));
                var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((var_3), (((/* implicit */unsigned char) (signed char)2)))))));
                arr_7 [i_0] [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
            }
        } 
    } 
}
