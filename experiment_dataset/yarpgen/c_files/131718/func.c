/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131718
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */int) var_7)) / (((/* implicit */int) ((signed char) min(((signed char)-109), ((signed char)-109)))))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-91))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_19)) / (((/* implicit */int) (signed char)-72))));
        var_22 ^= ((/* implicit */signed char) ((((((/* implicit */int) (signed char)7)) + (((/* implicit */int) var_14)))) / (((/* implicit */int) var_1))));
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            var_23 = (signed char)85;
            arr_5 [i_1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (signed char)-92)) : (((/* implicit */int) (signed char)-32))));
        }
        var_24 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) (signed char)122))) < (((/* implicit */int) (signed char)34))));
    }
}
