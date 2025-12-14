/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176943
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
    var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_14 *= ((/* implicit */short) (-(((/* implicit */int) var_2))));
                var_15 = ((/* implicit */short) (-(((/* implicit */int) arr_0 [(unsigned char)8]))));
                var_16 = ((/* implicit */_Bool) ((arr_2 [i_0 + 1]) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_0 [(unsigned short)4]))));
            }
        } 
    } 
    var_17 += ((/* implicit */signed char) var_8);
    var_18 ^= ((/* implicit */unsigned short) -7030937187053127294LL);
    var_19 |= ((/* implicit */short) var_4);
}
