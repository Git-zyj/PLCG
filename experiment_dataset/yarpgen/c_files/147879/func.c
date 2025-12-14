/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147879
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
    for (int i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned long long int) ((arr_1 [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
        var_14 = ((/* implicit */unsigned short) var_10);
        var_15 = ((((/* implicit */_Bool) ((unsigned int) arr_1 [i_0]))) ? (min((arr_1 [i_0]), (arr_1 [i_0]))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1] [i_1])) & (((/* implicit */int) arr_3 [i_1]))));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1])) | (((/* implicit */int) arr_3 [i_1]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((long long int) arr_2 [i_1] [i_1])) : (((((/* implicit */_Bool) -1852338764)) ? (8744322699385152271LL) : (-8744322699385152261LL))))))));
    }
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3240944464059164598ULL)) ? (((int) ((long long int) -8744322699385152271LL))) : (((/* implicit */int) var_11))));
}
