/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187116
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
    var_11 = ((/* implicit */unsigned int) var_9);
    var_12 = ((/* implicit */short) var_5);
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        var_13 = ((/* implicit */int) (signed char)14);
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-21937)) ? (48759752931718538ULL) : (((/* implicit */unsigned long long int) 817570416632877649LL))))) ? (65535ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (_Bool)0)))))), (((/* implicit */unsigned long long int) -2022365653349971940LL)))))));
        arr_2 [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_10))) ? ((-(((/* implicit */int) (unsigned short)20501)))) : (arr_1 [i_0])))), (((arr_0 [i_0 - 1]) / (arr_0 [i_0 + 1])))));
        var_15 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((signed char) arr_1 [i_0 + 1]))) : (((((/* implicit */_Bool) 11414011469030508799ULL)) ? (arr_1 [i_0 + 3]) : (arr_1 [i_0 + 2])))));
    }
    var_16 = (-(((/* implicit */int) var_4)));
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */unsigned long long int) var_1))))) && (((/* implicit */_Bool) var_6))));
}
