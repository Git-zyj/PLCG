/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108681
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
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) arr_2 [i_0 + 1] [i_0 - 1])), (3303513770597034844LL)));
        var_14 = ((/* implicit */short) (unsigned char)146);
        arr_5 [i_0 - 1] [i_0] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (unsigned char)137)) : (((/* implicit */int) ((((/* implicit */_Bool) 2994858768737807453LL)) || (((/* implicit */_Bool) 13917660108769849476ULL)))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 2) /* same iter space */
    {
        arr_10 [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) max(((!(((/* implicit */_Bool) var_2)))), (arr_7 [i_1 - 1] [i_1 + 1]))))));
        var_15 = ((/* implicit */_Bool) min(((((+(2994858768737807462LL))) - (((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_1] [i_1]))))))), (((/* implicit */long long int) ((unsigned char) max((var_6), (((/* implicit */short) arr_2 [i_1 + 1] [i_1]))))))));
        var_16 = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)168)) | (((/* implicit */int) arr_0 [i_1 + 1] [i_1])))) << (((((((/* implicit */_Bool) arr_9 [i_1 + 1])) ? (((/* implicit */int) arr_9 [i_1 + 1])) : (((/* implicit */int) arr_9 [i_1 - 1])))) - (236)))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 2) /* same iter space */
    {
        arr_14 [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_13 [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_12 [i_2] [i_2]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)74))))))) : (((((/* implicit */_Bool) 7666582735348596027LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (17436428652735793383ULL)))));
        arr_15 [i_2] = ((/* implicit */long long int) (!(arr_2 [i_2 + 1] [i_2 + 1])));
    }
    var_17 = ((/* implicit */_Bool) var_2);
}
