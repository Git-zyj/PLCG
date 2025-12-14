/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137711
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_10 = arr_1 [i_0];
        var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) (-(((/* implicit */int) (signed char)0)))))));
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 9; i_1 += 3) 
    {
        var_12 = ((/* implicit */signed char) (-(((((/* implicit */int) arr_4 [i_1])) * (((/* implicit */int) var_5))))));
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (+(((var_3) / (((/* implicit */int) var_2)))))))));
    }
    /* vectorizable */
    for (short i_2 = 2; i_2 < 9; i_2 += 4) 
    {
        var_14 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (unsigned short)5493))) ? (((((/* implicit */_Bool) (unsigned short)5493)) ? (((/* implicit */int) (unsigned short)5493)) : (((/* implicit */int) (unsigned short)5764)))) : (((((/* implicit */int) var_6)) + (((/* implicit */int) arr_6 [i_2] [(unsigned short)3]))))));
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_6 [i_2 - 2] [i_2 - 1])) : (((/* implicit */int) arr_6 [i_2 + 3] [i_2 + 3]))));
    }
    var_16 = ((/* implicit */unsigned char) (-(1250641360U)));
    var_17 = ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1))))) + (((/* implicit */int) var_6)));
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) 1705224819U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2))) : (4294967295U)))));
}
