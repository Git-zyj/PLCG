/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151972
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
    var_19 ^= ((/* implicit */unsigned int) (-(max((var_2), (((/* implicit */long long int) ((signed char) var_17)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 11; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (~(var_1)));
        var_20 *= ((/* implicit */unsigned char) ((unsigned short) ((long long int) (unsigned char)105)));
    }
    for (short i_1 = 3; i_1 < 11; i_1 += 2) /* same iter space */
    {
        var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)105))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned char) (unsigned char)150)))));
        var_22 |= ((/* implicit */unsigned short) -2222913227704646547LL);
        var_23 = ((/* implicit */signed char) (unsigned char)129);
    }
    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned char)93)) : (var_0))))) ? (((/* implicit */int) ((var_0) <= (((/* implicit */int) var_18))))) : ((+(((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned char)150)) : (((/* implicit */int) (unsigned char)100)))))))))));
    var_25 = ((/* implicit */int) max((var_25), ((~((-((+(((/* implicit */int) (unsigned char)105))))))))));
}
