/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129101
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
    var_20 = ((/* implicit */_Bool) ((unsigned short) min((((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)107))) : (0ULL))), (18446744073709551615ULL))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_21 |= min((min((((/* implicit */unsigned int) ((int) var_6))), (min((arr_0 [i_0 - 1] [i_0 - 1]), (arr_0 [i_0 - 1] [i_0 - 1]))))), (arr_0 [i_0] [i_0 - 1]));
        var_22 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))))) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0]))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) (unsigned char)114)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_1 [4])))) : (min((0ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_16))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_6)) : (arr_0 [i_1] [(_Bool)1]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)3490))))))))));
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) arr_2 [(short)4]))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_24 |= ((/* implicit */short) (+(((/* implicit */int) ((_Bool) var_16)))));
        var_25 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) (short)15360))) ? (((/* implicit */int) arr_6 [i_2] [i_2])) : (((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (_Bool)1))))));
        var_26 = ((/* implicit */unsigned char) 2897022984481655663LL);
    }
    var_27 = ((/* implicit */unsigned char) 94713281U);
}
