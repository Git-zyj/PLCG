/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177489
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
    var_11 = (unsigned char)119;
    var_12 = ((/* implicit */unsigned int) (unsigned short)14456);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_5);
                var_13 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) (-(((/* implicit */int) var_9))))) : (((((long long int) (_Bool)1)) >> (((4446254246508680373ULL) - (4446254246508680348ULL)))))));
}
