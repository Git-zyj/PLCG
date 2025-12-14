/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155558
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_2 [22ULL] = ((/* implicit */_Bool) arr_1 [i_0]);
        var_16 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)-21964)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) * ((+(((/* implicit */int) arr_1 [i_0]))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [5LL] = ((/* implicit */short) var_15);
        var_17 = ((/* implicit */signed char) max((((/* implicit */int) arr_3 [i_1])), (((((((/* implicit */int) arr_3 [i_1])) + (2147483647))) << (((((/* implicit */int) (short)31434)) - (31434)))))));
    }
    var_18 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65522)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_8))));
}
