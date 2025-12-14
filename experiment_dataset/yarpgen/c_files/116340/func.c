/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116340
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4042))) : (var_10))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_14) : (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))))))));
        var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) + (4824420093648479371ULL)));
        var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_0 [i_0]), (arr_0 [i_0])))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (signed char)24)))) > (min((((/* implicit */int) arr_0 [i_0])), (var_4)))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned short)4048))))));
    }
    for (signed char i_1 = 1; i_1 < 18; i_1 += 4) 
    {
        arr_6 [i_1] = (-(((/* implicit */int) arr_4 [i_1])));
        var_19 = ((/* implicit */unsigned short) arr_3 [i_1 + 1]);
        var_20 *= ((/* implicit */unsigned long long int) (+(min((((/* implicit */unsigned int) min((arr_5 [i_1] [i_1]), (arr_5 [i_1] [i_1])))), (min((4294967295U), (((/* implicit */unsigned int) var_13))))))));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((int) (signed char)-99))) ? (((arr_5 [i_1] [i_1]) ? (((/* implicit */int) arr_4 [18LL])) : (((/* implicit */int) arr_3 [i_1])))) : (((/* implicit */int) (!(arr_4 [i_1])))))), (((/* implicit */int) ((signed char) arr_5 [i_1] [i_1 + 1])))));
    }
    var_21 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_15))))) == (var_3))) ? (((/* implicit */unsigned long long int) (+(var_6)))) : (var_14)));
}
