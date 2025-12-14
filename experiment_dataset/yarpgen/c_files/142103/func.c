/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142103
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
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */int) var_5)) >= (((((min((((/* implicit */int) (signed char)22)), (var_16))) + (2147483647))) << (((((min((var_16), (((/* implicit */int) var_3)))) + (1586094641))) - (30))))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 4; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (((-(((/* implicit */int) (signed char)32)))) * (((((/* implicit */int) (unsigned short)32736)) + (((/* implicit */int) var_4))))))) / (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-20))) - (arr_0 [i_0 - 1])))));
        arr_4 [i_0] [i_0 + 2] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 13)), (arr_0 [i_0 - 3])));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) -2085208715)) && (((/* implicit */_Bool) 18446744073709551615ULL)))))));
        arr_8 [(unsigned short)16] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_1] [i_1]))));
    }
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) 4294967295U))))) / (((/* implicit */int) var_0))));
}
