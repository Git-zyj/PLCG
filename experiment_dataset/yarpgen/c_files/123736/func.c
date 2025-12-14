/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123736
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
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */signed char) arr_8 [(signed char)15] [i_0] [16] [i_2]);
                    var_13 = ((/* implicit */unsigned char) (short)0);
                    var_14 |= var_1;
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) max((((/* implicit */int) ((signed char) var_4))), (((((/* implicit */_Bool) var_7)) ? (var_10) : (((int) var_10))))));
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))));
    var_17 ^= (signed char)-2;
}
