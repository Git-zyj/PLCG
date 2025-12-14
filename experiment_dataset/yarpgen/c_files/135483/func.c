/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135483
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
    for (short i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) (unsigned short)8192)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_2 [i_0] [i_0]))), (max((var_10), (arr_2 [i_0] [i_0]))))), (max((((((/* implicit */_Bool) (short)5138)) ? (((/* implicit */long long int) ((/* implicit */int) (short)5139))) : (arr_0 [i_0]))), (arr_0 [i_0])))));
        arr_4 [i_0] = ((/* implicit */int) min((((((/* implicit */_Bool) (short)-5138)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_10))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (arr_1 [i_0]) : (var_5))))));
        arr_5 [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_8))) & (arr_2 [(unsigned char)3] [i_0])))) ? (((/* implicit */int) ((short) var_2))) : (((/* implicit */int) var_6))))), ((+(((((/* implicit */_Bool) (signed char)-31)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (274877906943ULL)))))));
        var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (arr_1 [i_0]) : (var_5)))) / (min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])))));
    }
    for (short i_1 = 0; i_1 < 10; i_1 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */int) (-(((unsigned int) ((((/* implicit */_Bool) (signed char)-31)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_1])))))));
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((unsigned short) arr_7 [i_1])))));
    }
    var_14 |= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_3)))) ? (((int) ((((/* implicit */_Bool) 2603145353U)) ? (((/* implicit */int) var_4)) : (var_5)))) : (((/* implicit */int) var_6))));
    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) 274877906953ULL))));
    var_16 = ((/* implicit */signed char) ((4294967295U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)26)))));
}
