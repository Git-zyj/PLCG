/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122868
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
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 8; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) var_2);
                    var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(535822336)))), (((((/* implicit */_Bool) arr_1 [i_2])) ? (var_16) : (var_10))))))));
                }
            } 
        } 
    } 
    var_21 ^= ((/* implicit */int) var_1);
    var_22 = ((/* implicit */long long int) (unsigned char)9);
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned int) (_Bool)1)), (var_3)))))) ? (((/* implicit */unsigned long long int) var_18)) : (var_16)));
    var_24 = ((/* implicit */long long int) ((short) var_5));
}
