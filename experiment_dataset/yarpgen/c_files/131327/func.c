/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131327
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
    var_14 ^= ((/* implicit */unsigned short) (((~(((/* implicit */int) var_7)))) ^ (((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 ^= ((/* implicit */unsigned int) (-(((((/* implicit */int) var_6)) - (((/* implicit */int) ((var_4) == (((/* implicit */int) var_11)))))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) 2351607095U)), (-7743868633751817355LL))), (((/* implicit */long long int) (+(((/* implicit */int) var_2)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (1055531162664960LL)))))))) : (var_3)));
                var_16 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
                arr_7 [i_0] [i_0] [(short)8] = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_3 [i_1] [i_1] [i_0]))))));
            }
        } 
    } 
    var_17 = ((((/* implicit */int) (!(var_0)))) ^ (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (562949953421280ULL))))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) max((((/* implicit */int) (short)3960)), (var_4)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))) : (((/* implicit */int) var_7))));
}
