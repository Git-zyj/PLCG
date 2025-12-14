/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182195
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
    var_12 = var_9;
    var_13 = max(((+(((16771572014194686148ULL) - (113981727991408051ULL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (18446744073709551615ULL) : (var_4))))))));
    var_14 &= ((((/* implicit */_Bool) (-(18446744073709551615ULL)))) ? (var_1) : (((var_8) * (15ULL))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                arr_4 [i_1] = arr_3 [i_0 - 1] [i_0 - 2];
                arr_5 [i_1] [i_1] = ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 - 1])) ? (arr_3 [i_0] [i_0]) : (262143ULL)))))) ? (arr_3 [i_0] [i_0 - 2]) : (min((16ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_1])) || (((/* implicit */_Bool) arr_2 [i_1] [i_1]))))))));
                arr_6 [i_1] = var_11;
                arr_7 [i_1] [i_1 - 1] = ((((/* implicit */_Bool) (~(((unsigned long long int) 10475430475461332157ULL))))) ? (((arr_3 [i_1 - 1] [i_1 + 1]) / (arr_3 [i_1 - 1] [i_1 - 2]))) : (max((max((8ULL), (7971313598248219470ULL))), (((((/* implicit */_Bool) arr_3 [i_0] [13ULL])) ? (12478818454751368820ULL) : (0ULL))))));
            }
        } 
    } 
}
