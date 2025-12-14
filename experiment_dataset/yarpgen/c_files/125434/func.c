/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125434
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
    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) var_2))));
    var_14 = ((/* implicit */unsigned char) (-(var_4)));
    var_15 = ((/* implicit */short) (-((+(((/* implicit */int) var_5))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) arr_0 [i_0]);
        arr_2 [i_0] [(_Bool)0] |= ((/* implicit */short) (+(((((/* implicit */_Bool) arr_0 [16])) ? (((/* implicit */int) (short)-26345)) : (((/* implicit */int) arr_0 [16ULL]))))));
        var_17 ^= ((/* implicit */int) ((short) arr_1 [14ULL]));
    }
    for (unsigned int i_1 = 3; i_1 < 11; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) 12068877278750772438ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))));
        var_18 ^= ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [(short)14])) & ((-(((/* implicit */int) arr_0 [2LL]))))));
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_5))));
        arr_6 [i_1] = ((/* implicit */int) arr_3 [i_1]);
    }
    var_20 = ((/* implicit */unsigned long long int) min(((short)7096), ((short)-7096)));
}
