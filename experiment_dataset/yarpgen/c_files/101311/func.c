/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101311
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
    var_10 = ((/* implicit */unsigned int) (((~(((3355877501239706951ULL) >> (((var_0) - (263041699))))))) >> ((((-(((/* implicit */int) var_4)))) + (24)))));
    var_11 = ((/* implicit */long long int) ((signed char) ((long long int) var_9)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) ((unsigned int) 2LL)))) && (((/* implicit */_Bool) var_2))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */_Bool) 36028797018963967LL)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */short) (+(((unsigned int) (+(((/* implicit */int) var_4)))))));
        var_13 = ((/* implicit */unsigned long long int) ((((int) 262143U)) < (((/* implicit */int) arr_1 [i_0]))));
    }
}
