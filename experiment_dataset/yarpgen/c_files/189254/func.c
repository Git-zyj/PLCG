/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189254
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */int) var_7)) << (((((/* implicit */int) var_10)) + (95)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((signed char) ((((/* implicit */int) var_5)) | (((/* implicit */int) (signed char)-39))));
        var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
    }
    for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((-(((/* implicit */int) arr_6 [i_1])))) & (((/* implicit */int) (signed char)-18))))) ? (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_4 [i_1])))) : ((-((+(((/* implicit */int) var_4))))))));
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) (signed char)-88)))))) ? (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_6 [i_1])))) : (((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_6 [i_1]))))));
        var_14 = (signed char)17;
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((((/* implicit */_Bool) (signed char)-124)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_4 [i_1])))) : (((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)120))))))));
    }
}
