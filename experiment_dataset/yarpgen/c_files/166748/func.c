/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166748
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
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (unsigned char)55))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_12)))))));
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((((((/* implicit */_Bool) var_8)) ? (arr_1 [i_0]) : (arr_1 [i_0]))) <= (var_17))) ? ((-(((/* implicit */int) (unsigned char)207)))) : (((/* implicit */int) ((((/* implicit */long long int) ((int) var_10))) <= (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) var_0)) : (arr_1 [i_0])))))))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        var_22 = ((/* implicit */unsigned short) ((unsigned int) arr_5 [i_1]));
        arr_6 [i_1] = ((((/* implicit */_Bool) (unsigned char)209)) ? (((/* implicit */int) (unsigned char)48)) : (((/* implicit */int) (unsigned char)57)));
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((long long int) (unsigned char)44)))));
        arr_7 [i_1] = ((/* implicit */signed char) var_4);
        var_24 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_3 [i_1]))));
    }
    for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        var_25 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_2])) ? (((((/* implicit */_Bool) (unsigned char)184)) ? (var_8) : (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2])))));
        var_26 += ((/* implicit */unsigned int) ((long long int) (unsigned char)65));
    }
}
