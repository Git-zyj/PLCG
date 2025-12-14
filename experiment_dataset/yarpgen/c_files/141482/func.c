/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141482
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
    var_13 = (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (8213630248097986647ULL))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0])))) > (((/* implicit */int) arr_0 [i_0]))));
        var_14 ^= ((/* implicit */unsigned long long int) ((var_1) ^ (((/* implicit */long long int) min((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)127)), (arr_0 [i_0])))), (((((/* implicit */_Bool) arr_0 [9LL])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_0 [i_0])))))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)0))));
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_4 [i_1]) : (arr_4 [i_1])));
        var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((((/* implicit */_Bool) var_5)) ? (arr_6 [i_1]) : (((/* implicit */long long int) 395267835)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))))));
        var_18 = ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_1])) * (((/* implicit */int) var_11))));
    }
    var_19 = ((/* implicit */long long int) min((((/* implicit */int) var_7)), ((+(((/* implicit */int) ((short) var_9)))))));
}
