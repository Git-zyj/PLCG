/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123493
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
    var_10 = ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (var_0))) ^ (((/* implicit */int) var_9))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((-1156274958) / (((/* implicit */int) var_9)))) : (((/* implicit */int) var_8))));
        var_12 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */int) var_2)) - (2147483647)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)9))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (8191ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_0]))))))) : ((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_1 [i_0])))))));
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) | ((+(arr_1 [i_0]))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_0) - (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((arr_1 [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7614)))))));
    }
    for (int i_1 = 3; i_1 < 18; i_1 += 1) 
    {
        arr_8 [i_1] [i_1] = (-(((/* implicit */int) ((unsigned char) min((arr_6 [i_1]), (arr_6 [i_1]))))));
        arr_9 [(signed char)2] &= ((/* implicit */unsigned int) var_8);
        var_14 += ((/* implicit */_Bool) ((unsigned long long int) arr_5 [8U] [i_1]));
    }
    var_15 = ((signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((unsigned short) var_2))) : ((-(942825270)))));
    var_16 = ((/* implicit */_Bool) (~(max((((/* implicit */int) var_3)), ((~(((/* implicit */int) var_2))))))));
}
