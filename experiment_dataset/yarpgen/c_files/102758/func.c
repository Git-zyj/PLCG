/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102758
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_13 = ((/* implicit */signed char) (short)-1);
        var_14 = ((/* implicit */unsigned short) min((((/* implicit */short) ((_Bool) arr_2 [i_0] [i_0]))), (((short) arr_2 [i_0] [i_0]))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */int) (signed char)-65)) : (((/* implicit */int) arr_0 [i_0]))))));
    }
    for (signed char i_1 = 3; i_1 < 9; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */int) var_11);
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_5 [i_1 + 2])) : (((/* implicit */int) (signed char)-65))))) ? (((((/* implicit */int) arr_5 [i_1 + 3])) / (((/* implicit */int) (signed char)67)))) : (((/* implicit */int) ((short) (signed char)60))))))));
        var_16 = ((/* implicit */unsigned short) ((int) (((((+(((/* implicit */int) var_11)))) + (2147483647))) >> (((((/* implicit */int) arr_4 [i_1 - 3])) + (117))))));
    }
    for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        var_17 = ((/* implicit */unsigned short) (signed char)-40);
        var_18 = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)59)) == (((/* implicit */int) arr_5 [(short)11])))) ? (((((/* implicit */int) (signed char)72)) ^ (((/* implicit */int) arr_5 [i_2])))) : (((/* implicit */int) (signed char)-65))));
        var_19 = (signed char)-60;
    }
}
