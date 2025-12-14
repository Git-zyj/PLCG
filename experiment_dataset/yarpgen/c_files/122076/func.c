/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122076
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
    var_19 = var_16;
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 24; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (min((arr_1 [i_0 - 2] [i_0]), (max((((/* implicit */unsigned long long int) var_15)), (var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 345174312))))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_1 [i_0 - 1] [i_0]) & (arr_1 [i_0 - 4] [i_0 - 4])))) ? (((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0])) ? (arr_1 [i_0 - 2] [i_0]) : (arr_1 [i_0 - 4] [i_0 - 4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) -345174312))))));
        arr_3 [i_0] [i_0 - 4] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_4)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)255))))) : (min((arr_1 [i_0] [5ULL]), (((/* implicit */unsigned long long int) var_8))))))) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)-2721)))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) (unsigned char)1))));
    }
    for (int i_1 = 4; i_1 < 24; i_1 += 1) /* same iter space */
    {
        var_22 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_0 [i_1 - 1])))))) <= (min((var_1), (arr_0 [i_1 + 1])))));
        arr_8 [i_1] = arr_4 [(short)11] [(unsigned char)7];
    }
}
