/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100339
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_18 ^= ((/* implicit */unsigned short) ((((((((/* implicit */int) (short)0)) / (((/* implicit */int) var_8)))) / (var_14))) == (((/* implicit */int) var_0))));
        var_19 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)3346)) + (((/* implicit */int) (unsigned char)255))))), (min((0ULL), (5105679033601800646ULL))))), (((/* implicit */unsigned long long int) arr_1 [(short)19]))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 3) 
    {
        arr_4 [i_1 + 1] = ((/* implicit */unsigned char) max(((+(18446744073709551601ULL))), ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)8112))) & (arr_3 [i_1])))))));
        arr_5 [i_1] = ((/* implicit */_Bool) (short)-8121);
    }
    var_20 = min((((/* implicit */int) var_12)), (((min((((/* implicit */int) (short)8121)), (var_16))) & (((/* implicit */int) (unsigned short)64318)))));
}
