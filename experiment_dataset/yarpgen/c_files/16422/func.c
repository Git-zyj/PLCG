/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16422
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 7; i_0 += 4) 
    {
        var_16 = ((/* implicit */long long int) max((var_16), ((-(((long long int) arr_2 [i_0] [(_Bool)1]))))));
        var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_2 [i_0 - 1] [i_0 - 1]), (arr_2 [i_0] [i_0 + 3])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (arr_1 [i_0])))) ? ((-(18446744073709551598ULL))) : (((/* implicit */unsigned long long int) (((-2147483647 - 1)) / (arr_1 [i_0])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 3])) & (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 2])))))));
    }
    var_18 = var_6;
}
