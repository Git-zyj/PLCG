/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157327
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */int) (+(min((((arr_1 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37444))) : (2337204093164944673LL))), ((+(2337204093164944673LL)))))));
                var_16 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) - (var_13)))) ? (((/* implicit */int) ((unsigned short) var_14))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2337204093164944673LL)))))))));
                arr_6 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_5)), (max((2337204093164944673LL), (-2337204093164944691LL)))));
                arr_7 [i_0] = ((/* implicit */int) var_10);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))));
}
