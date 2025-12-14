/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148111
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
    var_11 &= ((/* implicit */unsigned char) (signed char)64);
    var_12 = (+(var_6));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) 4294967289U);
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((signed char) var_7)), ((signed char)127)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (var_8)))) : (((unsigned int) ((((/* implicit */_Bool) (signed char)127)) ? (var_8) : (((/* implicit */int) var_1)))))));
        var_14 *= ((((3794715129U) / (((/* implicit */unsigned int) var_8)))) / (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-14829))))));
        var_15 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) 3166016796U)) ? (var_8) : (var_10)))));
    }
}
