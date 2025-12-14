/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103393
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
    var_17 ^= ((((/* implicit */int) var_2)) >= (((/* implicit */int) ((((/* implicit */unsigned long long int) var_16)) >= (((((/* implicit */_Bool) var_14)) ? (9927237725255864152ULL) : (8519506348453687464ULL)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [(unsigned short)6] [i_0])) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (((unsigned long long int) var_5))));
        arr_4 [i_0] &= ((/* implicit */unsigned short) ((arr_1 [i_0]) == (arr_1 [i_0])));
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (9927237725255864133ULL) : (14851259573697621754ULL)))) ? (3398867833830942331LL) : (((/* implicit */long long int) arr_1 [i_0]))));
        var_20 = ((/* implicit */unsigned short) arr_1 [6U]);
    }
    for (short i_1 = 4; i_1 < 9; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? ((((_Bool)1) ? (min((((/* implicit */long long int) (short)-22)), (arr_3 [i_1 - 4] [i_1 - 4]))) : (((/* implicit */long long int) arr_1 [i_1 - 1])))) : (((((/* implicit */_Bool) var_10)) ? (arr_2 [i_1 - 2] [i_1]) : (arr_2 [i_1 - 2] [i_1 - 2])))));
        var_21 = ((/* implicit */unsigned long long int) -8292405820119252091LL);
    }
}
