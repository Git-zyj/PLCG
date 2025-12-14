/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14956
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
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) (-(1503684445)));
        var_20 ^= ((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0 + 1]))));
        arr_4 [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1473075238)) ? (arr_1 [i_0 - 1] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1])))));
        var_21 = ((/* implicit */signed char) (-(((arr_1 [(_Bool)1] [(_Bool)1]) | (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)1016)) ^ ((+(((/* implicit */int) arr_5 [i_1]))))));
        var_23 &= ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)12004)) ? (((/* implicit */int) (short)-32761)) : (((/* implicit */int) (unsigned short)64520)))) >= ((-(((/* implicit */int) var_10))))));
        var_24 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 18375059696323690774ULL))));
        var_25 = ((/* implicit */unsigned int) 4323455642275676160LL);
    }
    var_26 |= ((/* implicit */long long int) var_8);
}
