/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127041
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
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        var_19 += ((/* implicit */_Bool) arr_1 [i_0]);
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0] [i_0])) << (((max((((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((/* implicit */int) arr_0 [i_0] [i_0 + 3])) : (((/* implicit */int) arr_0 [i_0] [i_0])))), (((/* implicit */int) var_4)))) - (49)))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)3)) ? (((/* implicit */int) (unsigned char)84)) : (((/* implicit */int) (unsigned char)172)))), (((/* implicit */int) (!(var_15))))))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_0 [i_0] [i_0 + 3]))))))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_17)) && (var_0)))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        arr_6 [i_1] = arr_4 [i_1 + 1];
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) arr_5 [i_1] [i_1]);
        var_20 ^= ((/* implicit */short) var_2);
        var_21 = ((/* implicit */signed char) arr_4 [i_1]);
    }
    var_22 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)138)) : (((/* implicit */int) var_14)))) / (((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (var_10)))))) - (((/* implicit */int) (_Bool)1))));
}
