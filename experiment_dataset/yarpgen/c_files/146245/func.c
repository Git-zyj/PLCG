/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146245
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
    for (int i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        var_16 |= ((/* implicit */unsigned long long int) (-(arr_0 [i_0] [i_0])));
        var_17 = ((/* implicit */unsigned char) -908139690);
    }
    for (short i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((((/* implicit */int) arr_3 [6] [6])) >= (((((/* implicit */_Bool) arr_1 [i_1])) ? (-1806331443) : (arr_0 [i_1] [i_1]))))) ? ((+(((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_2 [i_1]))))) ? (((/* implicit */int) arr_3 [(_Bool)1] [(_Bool)1])) : (((arr_3 [(short)4] [(short)4]) ? (var_4) : (((/* implicit */int) arr_2 [i_1])))))))))));
        var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((var_0) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) var_1)))), (((/* implicit */int) arr_2 [i_1]))))) && (((/* implicit */_Bool) ((short) arr_3 [(_Bool)0] [(short)0])))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        var_20 = ((/* implicit */short) arr_1 [i_2]);
        var_21 *= ((long long int) ((((/* implicit */unsigned long long int) var_12)) < (arr_4 [i_2] [i_2])));
    }
    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((unsigned char) var_14)))));
}
