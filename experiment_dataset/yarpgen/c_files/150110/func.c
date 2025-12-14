/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150110
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
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        arr_3 [i_0] |= ((((((arr_0 [i_0 + 2]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))) && (((/* implicit */_Bool) min(((short)0), (var_1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((unsigned short) var_10))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_10)), (arr_0 [i_0])))) ? (min((arr_0 [i_0]), (arr_0 [i_0]))) : (((arr_0 [i_0]) / (arr_0 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) max((arr_1 [i_0]), (((/* implicit */unsigned int) ((arr_2 [i_0 + 2]) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0 - 1])))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */int) var_3)) + (((/* implicit */int) var_4))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31340))) * (14375227090975999578ULL))) : (((/* implicit */unsigned long long int) ((758542114U) * (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))), (((/* implicit */unsigned long long int) var_1))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) arr_8 [i_1]))));
        arr_9 [i_1] [(unsigned char)12] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_1] [i_1])) >= (arr_8 [i_1])));
    }
    /* vectorizable */
    for (signed char i_2 = 1; i_2 < 23; i_2 += 2) 
    {
        arr_13 [i_2] [i_2] = ((/* implicit */int) ((((((/* implicit */_Bool) var_13)) ? (arr_11 [i_2] [i_2]) : (((/* implicit */unsigned long long int) arr_10 [i_2] [i_2])))) < (((/* implicit */unsigned long long int) arr_10 [i_2 + 1] [i_2 + 1]))));
        arr_14 [(_Bool)1] |= ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) 3536425162U)) ? (((/* implicit */int) (signed char)-56)) : (arr_10 [i_2] [i_2]))));
        arr_15 [i_2] [i_2] = ((/* implicit */int) ((signed char) 3321441725U));
    }
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)15)) / (((/* implicit */int) (unsigned char)24))))) && (((/* implicit */_Bool) (signed char)-116)))) ? (((/* implicit */int) ((unsigned char) ((unsigned int) var_5)))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (var_4)))))))));
}
