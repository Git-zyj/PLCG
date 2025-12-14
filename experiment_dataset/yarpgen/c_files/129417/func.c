/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129417
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (short)7174)) : (((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) (short)7174)))))));
        var_18 = var_6;
        arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (short)14336)) != (((((/* implicit */_Bool) arr_2 [(unsigned char)15])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (short)-7174))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 4; i_1 < 15; i_1 += 4) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) % (((/* implicit */int) var_3))))) ? (arr_2 [i_1 - 2]) : (((/* implicit */long long int) ((/* implicit */int) (short)7174)))));
        arr_9 [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-7179))));
        var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)7170)) && (((/* implicit */_Bool) var_13)))) ? (((/* implicit */int) (unsigned short)65511)) : (((/* implicit */int) (!(((/* implicit */_Bool) -856655676)))))));
        var_20 = ((((/* implicit */_Bool) arr_2 [i_1 - 4])) ? (((/* implicit */int) (unsigned short)65489)) : (((/* implicit */int) arr_6 [i_1 - 4] [i_1 - 2])));
    }
    var_21 = ((/* implicit */signed char) var_9);
    var_22 &= ((/* implicit */_Bool) var_16);
    var_23 = ((/* implicit */unsigned short) var_11);
}
