/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107758
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
    var_15 = ((/* implicit */int) var_3);
    var_16 &= var_12;
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */signed char) arr_0 [i_0]);
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) arr_1 [i_0] [i_0])) >> (((var_5) - (2070089107781306477ULL))))) : (((/* implicit */int) arr_0 [i_0]))));
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-28)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_2)))) : (((/* implicit */int) var_8))));
        var_19 *= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
    }
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)32767)) ^ (((/* implicit */int) (_Bool)0))));
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (+(min((arr_3 [i_1]), (var_5))))))));
    }
}
