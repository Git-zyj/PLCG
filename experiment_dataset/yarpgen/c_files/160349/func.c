/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160349
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_16 &= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (var_11)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_0 [i_0])))) ? (min((((/* implicit */unsigned long long int) (short)29623)), (var_9))) : (((/* implicit */unsigned long long int) ((arr_1 [i_0] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_0 [i_0])))))))));
        var_17 = ((((/* implicit */_Bool) (+(arr_0 [i_0])))) ? (min((((/* implicit */unsigned long long int) var_12)), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) % (var_11))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11U)) ? (var_14) : (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
        var_18 = (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_0 [i_0])) / (var_8)))) && (((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) 4294967277U)))))))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (_Bool)1))) >> (((((((/* implicit */_Bool) 4294967284U)) ? (arr_4 [i_1]) : (arr_4 [i_1 + 1]))) - (607264639U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((var_1) | (((/* implicit */unsigned int) arr_2 [i_1] [i_1]))))))) : (((min((var_10), (((/* implicit */unsigned long long int) var_1)))) - (((/* implicit */unsigned long long int) (((_Bool)0) ? (arr_2 [i_1 + 1] [i_1 + 1]) : (arr_2 [i_1] [i_1]))))))));
        var_20 = arr_4 [i_1];
        arr_5 [i_1] [i_1 + 1] = ((/* implicit */_Bool) arr_3 [i_1]);
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */short) ((((/* implicit */int) arr_7 [i_2] [i_2])) <= (arr_2 [i_2] [i_2])));
        var_22 = ((((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) 293152929U))))) >> (((((/* implicit */int) arr_3 [i_2 + 1])) - (6985))));
        var_23 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_2] [i_2]))))) ^ (((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (15053246202656517671ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2])))))));
    }
    var_24 = ((/* implicit */unsigned long long int) var_7);
    var_25 = ((/* implicit */int) var_4);
}
