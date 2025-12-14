/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115180
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
    var_18 = ((/* implicit */unsigned char) ((336578487) ^ ((~((-(((/* implicit */int) (signed char)-116))))))));
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((signed char) var_4)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */long long int) (~((~(((/* implicit */int) (signed char)115))))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_13)))))));
    var_22 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))));
}
