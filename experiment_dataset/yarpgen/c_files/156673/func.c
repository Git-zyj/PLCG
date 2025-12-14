/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156673
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
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_16 *= ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32741))) * (arr_0 [i_0]))))) ? (arr_0 [i_0]) : (arr_0 [i_0])));
        arr_4 [i_0] = var_1;
    }
    for (short i_1 = 1; i_1 < 12; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */short) var_3);
        var_17 ^= ((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-2))))) >= ((~(arr_3 [i_1 + 1] [i_1 + 2])))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_2 = 1; i_2 < 16; i_2 += 3) 
    {
        arr_12 [i_2] = ((/* implicit */unsigned long long int) (signed char)104);
        var_18 = arr_2 [i_2];
    }
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)192)) + (((/* implicit */int) var_14))))), (3364285961U)))) ? (max((((((/* implicit */_Bool) (short)25883)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)192)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) < (10770953860833319655ULL)))))) : (((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) (signed char)1))))));
    var_20 = ((/* implicit */short) max((max((((/* implicit */long long int) (+(((/* implicit */int) (signed char)-2))))), (max((((/* implicit */long long int) (unsigned char)255)), (9223372036854775807LL))))), (((/* implicit */long long int) -543489825))));
}
