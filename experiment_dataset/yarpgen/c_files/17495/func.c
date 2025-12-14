/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17495
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
    var_11 = ((/* implicit */short) ((((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) & (var_6)))))) >> (((((((((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) + (9223372036854775807LL))) >> (((var_5) - (6409224584051269601LL))))) - (5236486538913119730LL)))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) arr_2 [i_0]))))) - (((18446744073709551608ULL) + (18446744073709551611ULL))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) + (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))));
        var_13 |= var_9;
    }
    for (long long int i_1 = 0; i_1 < 12; i_1 += 1) /* same iter space */
    {
        var_14 = arr_4 [(unsigned char)3] [i_1];
        var_15 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_0 [i_1] [i_1])))) | (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) arr_1 [i_1]))))));
        arr_6 [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_1] [i_1])) | (((/* implicit */int) arr_5 [(signed char)5]))));
        arr_7 [i_1] &= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) + (((((/* implicit */_Bool) max((var_6), (((/* implicit */int) arr_1 [i_1]))))) ? (var_5) : (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_1])) / (((/* implicit */int) arr_2 [i_1])))))))));
    }
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_1)), (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((18446744073709551582ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
    var_17 = ((/* implicit */int) var_7);
    var_18 = ((/* implicit */int) var_0);
}
