/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14230
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
    var_13 = ((/* implicit */unsigned short) var_4);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                var_14 = (-(((((/* implicit */_Bool) arr_1 [i_0] [i_1 - 1])) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_1 - 1] [i_0 - 1])) : (2096896))));
                var_15 = ((/* implicit */unsigned int) var_11);
                var_16 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0 - 1] [i_1 + 1])) ^ (-2096901)))), (((unsigned int) var_4))));
                var_17 = ((/* implicit */long long int) (-(((/* implicit */int) ((2096896) <= (max((((/* implicit */int) arr_2 [i_0] [i_0 - 1])), (-2096881))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) (((((+(var_0))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)112))))))) ? (((/* implicit */long long int) (+((+(-2096897)))))) : (max((((/* implicit */long long int) var_5)), (((((/* implicit */long long int) ((/* implicit */int) var_10))) / (var_0)))))));
}
