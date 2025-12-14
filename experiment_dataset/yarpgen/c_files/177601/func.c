/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177601
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
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((-(((/* implicit */int) (short)-1))))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0))));
        arr_2 [i_0] [(unsigned char)3] = ((/* implicit */short) min((((((((/* implicit */int) var_8)) + (2147483647))) >> (((((/* implicit */int) ((short) var_10))) + (22954))))), (((((/* implicit */_Bool) ((7800111898093531053ULL) << (((3535683507004604867ULL) - (3535683507004604814ULL)))))) ? (((/* implicit */int) ((16382U) == (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) : (((((/* implicit */int) var_6)) + (((/* implicit */int) var_1))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */int) ((((var_11) & (((/* implicit */long long int) ((4294950928U) | (4294950928U)))))) < (((/* implicit */long long int) (~(var_5))))));
        var_14 *= ((/* implicit */signed char) min((max((4294950928U), (((/* implicit */unsigned int) arr_3 [i_1] [i_1])))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_1])))))));
    }
    for (unsigned int i_2 = 2; i_2 < 14; i_2 += 3) 
    {
        var_15 &= ((/* implicit */long long int) ((arr_7 [i_2]) << ((((~(min((((/* implicit */unsigned int) var_8)), (var_12))))) - (2071423491U)))));
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((unsigned long long int) (+(arr_8 [(_Bool)1])))))));
        arr_9 [(short)13] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) (+((-(((/* implicit */int) var_0)))))))));
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (((~(((/* implicit */int) ((signed char) var_8))))) >> (((((/* implicit */int) var_9)) - (28859))))))));
    }
    var_18 *= ((/* implicit */short) (((-(((((/* implicit */int) var_6)) / (((/* implicit */int) var_0)))))) & (((int) (~(((/* implicit */int) var_7)))))));
}
