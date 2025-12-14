/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151111
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
    var_18 &= var_14;
    var_19 += ((/* implicit */signed char) ((var_10) ? (((((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_12))))) ? (((var_4) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_14)))) : ((~(((/* implicit */int) var_2)))))) : (((/* implicit */int) var_3))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_12)) : ((~(((/* implicit */int) var_17))))));
        arr_4 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0 + 1]))));
        var_20 += ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) arr_2 [(_Bool)1] [(_Bool)1])))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1] = min(((!(((/* implicit */_Bool) arr_2 [i_1] [i_1])))), (((((/* implicit */int) min((var_0), (var_12)))) > (((/* implicit */int) var_1)))));
        arr_9 [i_1] = ((/* implicit */_Bool) (~((+(((/* implicit */int) arr_7 [i_1]))))));
        var_21 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_16)) * (((/* implicit */int) (signed char)93))))) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((/* implicit */int) min((var_17), (((/* implicit */signed char) arr_6 [i_1] [i_1])))))))) ? (((/* implicit */int) ((_Bool) arr_0 [i_1]))) : ((~((+(((/* implicit */int) var_4))))))));
    }
    for (signed char i_2 = 2; i_2 < 17; i_2 += 1) 
    {
        arr_13 [i_2] [i_2] = ((signed char) max((((((/* implicit */int) arr_10 [i_2 + 2])) | (((/* implicit */int) arr_11 [i_2])))), (((/* implicit */int) (!(arr_10 [i_2 - 2]))))));
        arr_14 [(signed char)16] &= ((/* implicit */_Bool) (~(((((/* implicit */int) arr_0 [i_2 - 2])) ^ (((/* implicit */int) arr_0 [i_2 - 2]))))));
        arr_15 [i_2] = ((/* implicit */_Bool) arr_2 [i_2] [i_2]);
    }
    var_22 = ((signed char) var_12);
}
