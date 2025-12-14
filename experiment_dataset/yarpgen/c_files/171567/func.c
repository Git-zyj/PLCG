/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171567
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
    var_13 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((1706344898U) >> (((((((/* implicit */_Bool) (signed char)-101)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)-19676)))) - (65535))))))));
    var_14 = ((/* implicit */unsigned short) var_3);
    var_15 = ((/* implicit */unsigned short) min((var_11), (((unsigned int) (~(var_11))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */int) var_10);
                var_17 = ((((/* implicit */_Bool) ((((((/* implicit */int) var_1)) + (2147483647))) >> (((var_11) - (2087349400U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_3 [(signed char)8] [i_1])), (arr_1 [i_0]))))) : (2588622397U));
                var_18 &= ((/* implicit */_Bool) arr_3 [i_0] [i_0]);
            }
        } 
    } 
}
