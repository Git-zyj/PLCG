/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101041
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) /* same iter space */
    {
        var_11 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? ((~(9223372036854775803LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [3LL])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)65529)))))));
        var_12 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_4)) >= (((/* implicit */int) arr_0 [i_0] [i_0])))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((short) var_8)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21; i_1 += 2) /* same iter space */
    {
        var_13 *= ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (-9223372036854775783LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))));
        var_14 = ((/* implicit */unsigned long long int) ((unsigned short) 5226559002714386099ULL));
    }
    var_15 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (-(var_9)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (9223372036854775801LL))) : (((/* implicit */long long int) ((int) (signed char)124))))), (((/* implicit */long long int) var_6))));
    var_16 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) var_0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) var_6))))) : (9223372036854775801LL)));
}
