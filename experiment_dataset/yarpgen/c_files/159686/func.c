/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159686
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
    var_12 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_11)), (((unsigned int) (!(((/* implicit */_Bool) var_1)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned short) ((short) ((short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
        var_14 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [10])) ? (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0])))) : (((((/* implicit */_Bool) arr_1 [4ULL])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [12]))))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) ((unsigned short) ((long long int) arr_1 [(signed char)12]))))));
        var_15 -= ((/* implicit */unsigned char) max((((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [(_Bool)1])))))))), (arr_1 [(signed char)8])));
    }
    var_16 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) ((unsigned long long int) var_5))) ? (max((var_4), (((/* implicit */unsigned int) var_2)))) : (((unsigned int) var_4)))));
    var_17 = ((/* implicit */int) ((_Bool) ((unsigned long long int) (!(var_10)))));
    /* LoopSeq 1 */
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        arr_4 [i_1] [i_1] = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */int) min((arr_3 [i_1]), (arr_0 [i_1])))) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_1 [(_Bool)1])) : (((/* implicit */int) arr_1 [14ULL])))))));
        var_18 |= ((/* implicit */_Bool) arr_0 [i_1]);
    }
}
