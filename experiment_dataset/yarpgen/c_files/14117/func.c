/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14117
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
    var_10 = ((/* implicit */unsigned short) var_4);
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((((/* implicit */int) var_9)) + (2147483647))) << (((((((/* implicit */int) (signed char)-34)) + (65))) - (31)))))))) ? (1446256803U) : (1446256803U)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_1 [i_0 - 2]) : (((/* implicit */unsigned int) -1165918716))));
        var_13 = ((((/* implicit */_Bool) var_1)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 2]))));
    }
    for (unsigned int i_1 = 1; i_1 < 15; i_1 += 1) 
    {
        var_14 = ((signed char) ((((_Bool) 4100074734U)) ? (((/* implicit */long long int) (-(arr_1 [i_1])))) : (((((/* implicit */_Bool) (short)-26485)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 - 1] [i_1])))))));
        var_15 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 1U)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (6967106925295306215LL)))) : (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) ((max((2626321365U), (arr_5 [i_1 - 1]))) >= (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) | (arr_1 [i_1]))))))));
        var_16 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) max((arr_1 [i_1]), (((/* implicit */unsigned int) var_9))))) ? ((-(arr_5 [i_1]))) : (arr_1 [i_1 + 1])))));
    }
    var_17 = ((/* implicit */signed char) var_1);
}
