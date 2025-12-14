/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165928
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
    for (unsigned short i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        var_18 -= ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
        var_19 ^= ((/* implicit */signed char) 18014398505287680ULL);
        var_20 |= ((/* implicit */unsigned long long int) ((((1318445844U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11753))))) + (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)17)) & (((/* implicit */int) arr_0 [i_0 - 3])))))));
        var_21 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) < (max((((((/* implicit */unsigned int) ((/* implicit */int) var_14))) - (var_16))), (((/* implicit */unsigned int) arr_1 [i_0] [i_0]))))));
    }
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        arr_4 [i_1] [i_1] = (_Bool)1;
        var_22 = ((/* implicit */unsigned long long int) var_12);
        var_23 &= (-(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)127)) && (((/* implicit */_Bool) var_5))))), (arr_2 [i_1]))));
    }
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */unsigned int) ((min((arr_6 [i_2]), (var_7))) ^ (((arr_6 [i_2]) / (arr_6 [i_2])))));
        var_24 *= ((/* implicit */unsigned long long int) var_15);
    }
    var_25 = ((/* implicit */unsigned long long int) var_16);
    var_26 = ((/* implicit */unsigned int) var_5);
    var_27 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_14))));
}
