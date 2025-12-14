/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150962
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
    var_15 = ((/* implicit */unsigned long long int) ((unsigned char) min(((-(var_7))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) & (var_2)))))));
    var_16 = (~(var_6));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_17 = ((short) (~(var_2)));
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_2 [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))));
        arr_4 [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [20ULL] [20ULL])) ? (arr_1 [i_0]) : (arr_1 [i_0]))) == (((/* implicit */int) arr_2 [i_0]))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 19; i_1 += 2) 
    {
        var_19 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_6 [i_1 + 1])))) ? (((/* implicit */int) (_Bool)1)) : ((+(-1234818144)))));
        arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-22)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 1]))))) && (((/* implicit */_Bool) arr_5 [i_1 + 1]))));
    }
}
