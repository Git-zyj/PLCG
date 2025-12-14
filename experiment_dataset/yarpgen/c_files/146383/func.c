/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146383
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
    var_18 = var_17;
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 4; i_0 < 18; i_0 += 4) /* same iter space */
    {
        var_19 *= ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) -1705761122)) ? (arr_1 [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((arr_1 [i_0 - 4]) / (arr_1 [i_0 - 4])));
    }
    for (unsigned short i_1 = 4; i_1 < 18; i_1 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((-(((/* implicit */int) arr_5 [i_1])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) || (((/* implicit */_Bool) arr_1 [i_1])))))))) ? (15069487066843663236ULL) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_3)) : (var_12)))), (arr_1 [(_Bool)1])))));
        var_21 |= ((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) arr_0 [i_1 + 2])), (((((/* implicit */_Bool) arr_4 [i_1 - 2])) ? (var_10) : (2461045931U))))) <= (((/* implicit */unsigned int) min((((((/* implicit */int) var_11)) & (((/* implicit */int) arr_5 [i_1])))), (((int) -1705761132)))))));
        var_22 = ((/* implicit */unsigned short) var_3);
    }
    /* vectorizable */
    for (unsigned short i_2 = 4; i_2 < 18; i_2 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */int) ((arr_4 [i_2 - 3]) % (((/* implicit */unsigned long long int) -1705761118))));
        arr_8 [i_2] &= ((/* implicit */int) (+(arr_1 [i_2 + 2])));
    }
    var_24 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned int) var_16))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (200891317)))) / (var_15)))));
}
