/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105429
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
    var_20 = ((/* implicit */short) max((((/* implicit */int) var_16)), (((((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) var_15))))) << (((((/* implicit */int) var_19)) / (139583291)))))));
    var_21 = ((/* implicit */long long int) ((((((/* implicit */int) var_1)) + (((/* implicit */int) (unsigned short)8160)))) / (var_14)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [i_0 + 4] = ((/* implicit */unsigned long long int) (-(((long long int) (short)-32765))));
                var_22 = ((/* implicit */unsigned char) (unsigned short)8150);
                var_23 = ((/* implicit */unsigned short) ((unsigned int) ((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))))));
                var_24 = ((/* implicit */_Bool) (~(9223372036854775790LL)));
            }
        } 
    } 
}
