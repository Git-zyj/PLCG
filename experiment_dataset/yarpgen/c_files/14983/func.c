/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14983
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
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_3 [i_0] [i_0]) : (arr_1 [i_0]))))));
        arr_5 [i_0] = ((/* implicit */long long int) ((_Bool) arr_1 [i_0]));
    }
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        arr_8 [i_1] = ((((/* implicit */_Bool) 1737712761540211717ULL)) ? (((/* implicit */long long int) 2068848037U)) : ((-9223372036854775807LL - 1LL)));
        var_18 ^= ((/* implicit */_Bool) (((-(((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_6 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_17))))))) >> (((((((arr_6 [i_1] [i_1]) + (9223372036854775807LL))) >> (((((long long int) arr_7 [i_1])) - (746249624LL))))) - (9842240LL)))));
        var_19 -= ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)248))));
    }
    var_20 = ((/* implicit */short) var_15);
    var_21 = ((/* implicit */long long int) 2510303933794502342ULL);
    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((821476571U) ^ (3695780512U))))));
    var_23 = ((/* implicit */long long int) (+((~(((3695780500U) >> (((((/* implicit */int) var_14)) - (1394)))))))));
}
