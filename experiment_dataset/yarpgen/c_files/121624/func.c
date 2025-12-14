/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121624
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_13 = ((/* implicit */short) var_7);
        var_14 -= ((/* implicit */long long int) 2108271718);
    }
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) var_1))));
    /* LoopSeq 2 */
    for (long long int i_1 = 3; i_1 < 20; i_1 += 4) 
    {
        var_16 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_4 [i_1]), (arr_4 [i_1 + 2]))))) | (min((((/* implicit */unsigned int) (unsigned char)4)), (3061760573U))))));
        var_17 -= ((/* implicit */unsigned char) ((int) ((signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) arr_3 [0]))))));
        arr_5 [i_1] = ((/* implicit */long long int) arr_4 [i_1]);
        arr_6 [i_1] = ((/* implicit */unsigned long long int) (~(min(((~(((/* implicit */int) (unsigned char)252)))), ((+(((/* implicit */int) var_5))))))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)234)) & (((/* implicit */int) (unsigned char)248))))) ? (var_11) : (arr_9 [i_2])));
        arr_11 [i_2] [i_2] = ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [(_Bool)1]))))) <= (((((/* implicit */_Bool) var_11)) ? (arr_9 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2]))))));
        arr_12 [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)243)) / (((/* implicit */int) var_3)))) < (((/* implicit */int) arr_4 [i_2]))));
    }
}
