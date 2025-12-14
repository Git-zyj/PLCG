/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172016
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((+(((/* implicit */int) var_6)))), (((/* implicit */int) (signed char)56))))) ? (min((((/* implicit */int) var_16)), (((((/* implicit */_Bool) (signed char)-92)) ? (((/* implicit */int) (signed char)-31)) : (((/* implicit */int) var_11)))))) : (((/* implicit */int) var_7))));
    var_18 &= ((/* implicit */unsigned char) (((+(((/* implicit */int) var_6)))) <= (((((/* implicit */_Bool) min(((short)-29075), (((/* implicit */short) var_9))))) ? ((-(((/* implicit */int) var_11)))) : (((/* implicit */int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) (unsigned char)255)))))))));
    var_19 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) var_0))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 4; i_0 < 9; i_0 += 1) 
    {
        var_20 &= ((/* implicit */signed char) min((min(((~(((/* implicit */int) arr_0 [i_0])))), ((~(((/* implicit */int) (unsigned char)149)))))), (((/* implicit */int) var_15))));
        arr_2 [i_0] |= max((((/* implicit */short) (unsigned char)177)), ((short)-1427));
        var_21 = ((/* implicit */signed char) (+(((/* implicit */int) max((var_11), (var_0))))));
    }
    for (short i_1 = 2; i_1 < 22; i_1 += 2) 
    {
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 + 2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_4 [i_1 + 2]))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)20570)) : (((/* implicit */int) var_14)))) : ((-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (unsigned char)32))))))));
        var_23 = ((/* implicit */unsigned char) min(((-(((/* implicit */int) max((arr_3 [(unsigned char)14]), (var_1)))))), (min((((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */int) (unsigned char)101)) : (((/* implicit */int) var_7)))), (((/* implicit */int) arr_3 [i_1 - 2]))))));
        var_24 = ((/* implicit */unsigned char) max((max((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) var_4)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) var_16)))))), (((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) ((unsigned char) arr_4 [(short)23]))) : (((/* implicit */int) arr_4 [i_1 - 1]))))));
    }
}
