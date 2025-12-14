/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134405
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
    var_20 = min((var_5), (((/* implicit */short) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)9337)) : (((/* implicit */int) var_10)))))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) arr_2 [i_0]);
        var_21 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((var_16) & (var_16)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_9))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_1 [i_0]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) (signed char)105);
        arr_5 [i_0] = ((/* implicit */short) arr_1 [i_0]);
        var_22 = ((short) var_11);
    }
    for (short i_1 = 3; i_1 < 22; i_1 += 2) /* same iter space */
    {
        var_23 = max((((((/* implicit */_Bool) arr_8 [i_1 - 1])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned long long int) arr_6 [i_1])));
        var_24 |= ((/* implicit */short) ((((/* implicit */_Bool) (+(18446744073709551610ULL)))) ? (((unsigned int) 5ULL)) : (arr_8 [(short)13])));
    }
    for (short i_2 = 3; i_2 < 22; i_2 += 2) /* same iter space */
    {
        var_25 += ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) | (((/* implicit */int) (short)9337))));
        arr_11 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_10 [i_2])))))))) : (((((/* implicit */_Bool) arr_7 [i_2])) ? (((((/* implicit */_Bool) arr_7 [i_2])) ? (17U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32752))) >= (arr_6 [i_2])))))))));
    }
}
