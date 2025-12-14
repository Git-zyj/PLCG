/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136565
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-9257))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_0 [i_0 + 1] [i_0 + 1]), (arr_0 [i_0] [i_0 - 2])))) == (((((/* implicit */_Bool) arr_0 [(unsigned short)3] [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0] [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 2]))))));
                arr_8 [7U] [i_1] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)7))));
            }
        } 
    } 
}
