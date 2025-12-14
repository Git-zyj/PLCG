/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13792
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
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_20 ^= ((/* implicit */int) ((((/* implicit */_Bool) -1828595678)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65528))) : (max((((/* implicit */unsigned int) 81689600)), (max((arr_1 [i_0]), (arr_1 [i_0])))))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_0 [0U])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) arr_1 [i_0])))), (min((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_0 [6ULL])))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_1 [i_0])))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))))) : (((((/* implicit */_Bool) ((int) arr_0 [i_0]))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) arr_1 [i_0])))) : (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_0 [i_0])))))));
        arr_3 [i_0] = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((int) arr_0 [i_0]))), ((-(arr_1 [i_0])))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((short) arr_0 [i_0]))), (arr_1 [i_0])))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (min((arr_0 [i_0]), (arr_0 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])))))));
    }
    var_21 = var_3;
    var_22 = ((/* implicit */int) ((unsigned int) var_3));
}
