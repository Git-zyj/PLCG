/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109487
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
    for (unsigned int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1]))) > (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (var_15)))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) min((((((-931070523) + (-266772705))) + (((-266772705) + (((/* implicit */int) (unsigned char)71)))))), (((((/* implicit */_Bool) (+(arr_2 [i_0])))) ? (((/* implicit */int) ((unsigned char) arr_1 [i_0]))) : (((/* implicit */int) arr_1 [i_0 + 2]))))));
    }
    for (int i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        arr_9 [1U] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_15)))) || (((/* implicit */_Bool) arr_8 [i_1] [i_1]))))) + (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_5 [(signed char)0])) : (((/* implicit */int) arr_5 [i_1]))))));
        var_18 += ((((/* implicit */int) arr_5 [i_1])) | (((((/* implicit */int) arr_7 [i_1] [i_1])) ^ (((/* implicit */int) arr_8 [i_1] [i_1])))));
        arr_10 [i_1] = (-(((/* implicit */int) ((short) 3404007815U))));
        arr_11 [i_1] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */int) max((arr_8 [i_1] [i_1]), (((/* implicit */short) arr_7 [(unsigned char)18] [i_1]))))) + (((/* implicit */int) arr_7 [i_1] [i_1])))) < (((((/* implicit */_Bool) 890959491U)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_6 [i_1])), (arr_5 [i_1]))))))));
    }
    var_19 = ((/* implicit */short) var_16);
}
