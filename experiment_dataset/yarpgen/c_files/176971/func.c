/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176971
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */long long int) arr_0 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 9; i_1 += 3) /* same iter space */
    {
        arr_5 [i_1 - 1] = ((/* implicit */unsigned int) ((((arr_2 [i_1 - 1]) + (9223372036854775807LL))) >> (((695002166U) - (695002141U)))));
        var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned int) -363774373)) / (arr_0 [i_1 + 1] [i_1 - 1])));
    }
    for (signed char i_2 = 1; i_2 < 9; i_2 += 3) /* same iter space */
    {
        arr_8 [i_2] [i_2 + 1] = ((/* implicit */signed char) ((short) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_2)) : (var_1))), (((/* implicit */unsigned long long int) (-(arr_4 [i_2])))))));
        var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((short) max((arr_7 [i_2]), (arr_0 [i_2] [i_2]))))), (((4294967288U) * (arr_0 [i_2 - 1] [i_2 + 1])))));
        arr_9 [i_2] = ((/* implicit */long long int) max((var_1), (((/* implicit */unsigned long long int) 3955679793U))));
        var_19 = ((/* implicit */unsigned short) arr_6 [i_2 - 1] [i_2 - 1]);
    }
    var_20 = ((/* implicit */signed char) max((var_12), (((/* implicit */unsigned int) ((var_1) != (((/* implicit */unsigned long long int) (-(var_7)))))))));
}
