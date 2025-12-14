/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120027
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)8970))) / (9223372036854775807LL)))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (1060448441115523094LL) : (((/* implicit */long long int) 748297354)))) : (((/* implicit */long long int) 4294967295U)))) ^ (((/* implicit */long long int) 1675855269))));
        arr_2 [(signed char)17] = ((/* implicit */unsigned short) arr_1 [i_0]);
    }
    for (short i_1 = 2; i_1 < 14; i_1 += 1) 
    {
        var_12 ^= (short)26382;
        var_13 = ((/* implicit */long long int) var_3);
        arr_5 [i_1] [i_1 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) var_10)))))) ? (((((/* implicit */int) ((((/* implicit */int) (signed char)-1)) <= (arr_3 [i_1])))) | (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) arr_0 [i_1 - 1]))))))) : (((/* implicit */int) ((arr_4 [(short)13]) <= (((/* implicit */int) arr_0 [i_1 - 1])))))));
        var_14 = ((/* implicit */_Bool) 70368744177663LL);
    }
    for (int i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        var_15 = ((/* implicit */unsigned int) arr_4 [i_2]);
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) min((arr_4 [i_2]), (arr_4 [i_2])))) && (((/* implicit */_Bool) min((((/* implicit */int) var_0)), (arr_4 [i_2])))))))));
    }
    var_17 |= ((/* implicit */_Bool) var_7);
}
