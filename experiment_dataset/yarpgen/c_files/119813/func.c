/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119813
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
    var_12 = (~((+(((/* implicit */int) var_4)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_4 [i_0] [12LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (short)-6797))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))));
        var_13 ^= ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
        var_14 *= ((short) (!(((/* implicit */_Bool) var_0))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] [1ULL] = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [i_1]))))), (max((1598628365U), (((/* implicit */unsigned int) (unsigned char)13)))));
        arr_8 [i_1] = ((/* implicit */short) ((((arr_6 [i_1]) + (((/* implicit */int) arr_5 [i_1])))) - (((/* implicit */int) (unsigned char)13))));
        var_15 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1])) || (((/* implicit */_Bool) (short)6796))))) : (min((arr_6 [10U]), (((/* implicit */int) var_0)))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        var_16 = ((/* implicit */unsigned int) arr_10 [i_2] [i_2]);
        arr_11 [i_2] = ((unsigned char) min((((/* implicit */long long int) arr_9 [i_2])), (arr_10 [i_2] [i_2])));
    }
}
