/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154178
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */short) (-(((var_12) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (arr_2 [i_0])))));
        var_15 = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
        var_16 = ((/* implicit */int) ((short) max((((/* implicit */unsigned long long int) (signed char)-100)), (arr_2 [i_0]))));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)72))))))) == (((unsigned long long int) var_10))));
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        var_18 &= ((/* implicit */short) ((arr_2 [i_1]) ^ (max((((/* implicit */unsigned long long int) (signed char)72)), ((~(arr_2 [i_1])))))));
        var_19 = ((/* implicit */short) arr_0 [i_1] [i_1]);
    }
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (signed char)72))));
}
