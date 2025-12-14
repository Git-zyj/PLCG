/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140722
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
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned char) min((((/* implicit */int) ((_Bool) (+(((/* implicit */int) (unsigned char)235)))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 3])) : (((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 2]))))));
                arr_5 [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((arr_3 [i_1 + 3] [i_1] [i_1 + 3]) <= (((/* implicit */long long int) 200097881)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) (((~(((524287U) << (((((/* implicit */int) (signed char)-32)) + (33))))))) << (((((((/* implicit */int) max((((/* implicit */short) var_10)), (var_1)))) | (((((/* implicit */int) var_8)) & (((/* implicit */int) var_12)))))) - (167)))));
}
