/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161087
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
    var_14 = ((/* implicit */int) var_11);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_15 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-7640))));
                var_16 = ((((/* implicit */_Bool) (unsigned char)61)) ? (((/* implicit */int) arr_3 [i_1])) : (((((/* implicit */_Bool) 2727052076U)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1])))));
                var_17 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 1916526109)) && (((/* implicit */_Bool) (unsigned char)63)))) ? (min((65535), (var_6))) : (var_9)));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) var_0);
    var_19 = ((/* implicit */short) var_8);
}
