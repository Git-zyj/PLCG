/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113243
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */short) max((arr_3 [i_0] [(_Bool)1]), (((/* implicit */long long int) (!(((/* implicit */_Bool) 1599206759U)))))));
        var_20 ^= ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) 33546240ULL)) ? (((((/* implicit */_Bool) 16140901064495857664ULL)) ? (7249195777998881411ULL) : (2951352591285805283ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1991152516)))))))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), ((~((~(max((((/* implicit */unsigned long long int) 1991152515)), (17551128253786632318ULL)))))))));
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (137438953471ULL) : (1768173557054818039ULL))) * (min((6112196209443509557ULL), (9036884596602162440ULL)))))) ? (((((/* implicit */unsigned long long int) var_16)) * (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) 1980559183)) : (10302139175401318978ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_14))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-7927))) : (min((arr_3 [(_Bool)1] [(_Bool)1]), (((/* implicit */long long int) arr_0 [i_0])))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 2) 
    {
        var_22 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))) >= (12686692478253401470ULL));
        arr_7 [0] |= ((/* implicit */unsigned int) arr_5 [i_1 + 2] [i_1 + 1]);
        arr_8 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 14866989854071331386ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))) : ((-(125829120ULL)))));
    }
    var_23 = max((((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_6)) ? (var_10) : (var_18))) : (((/* implicit */unsigned long long int) ((unsigned int) 2080374784U))))), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */unsigned long long int) 1317037307U)) + (var_3))))));
}
