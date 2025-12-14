/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162140
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
    var_13 = ((/* implicit */long long int) (-(((/* implicit */int) var_0))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            {
                var_14 ^= ((/* implicit */short) ((_Bool) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))))), ((unsigned short)40034))));
                var_15 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_0] [i_1 - 3])) ? (((/* implicit */int) (short)10757)) : (((/* implicit */int) arr_2 [i_0] [(signed char)7])))) < (((/* implicit */int) (unsigned char)255))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)10757)))), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((unsigned short) var_3))) : (((/* implicit */int) var_7))));
}
