/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187673
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
    var_14 += (short)13590;
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        arr_2 [1U] = ((/* implicit */short) var_7);
        var_15 += ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_1 [i_0 + 1]), (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)32767)))))) : (min((((/* implicit */unsigned long long int) var_6)), (arr_1 [i_0 - 1])))));
        arr_3 [(short)1] &= ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_16 = ((/* implicit */int) (_Bool)1);
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) ((int) 4068349470254411882ULL))) && (((/* implicit */_Bool) ((unsigned char) (short)-1)))))) & ((-(((/* implicit */int) (_Bool)1))))));
    }
    var_18 = (short)-32767;
}
