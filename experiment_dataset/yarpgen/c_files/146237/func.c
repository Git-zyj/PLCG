/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146237
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
    var_15 = ((/* implicit */unsigned char) var_5);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) var_10)))))))));
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (unsigned char)11))));
                var_18 ^= min((470657167), (((/* implicit */int) (unsigned char)15)));
                var_19 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)2)) >= (((/* implicit */int) (unsigned char)15))));
            }
        } 
    } 
}
