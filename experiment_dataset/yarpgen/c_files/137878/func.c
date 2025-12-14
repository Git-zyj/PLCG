/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137878
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
    var_16 = ((/* implicit */unsigned int) var_7);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1435547874U))));
        var_18 = arr_2 [i_0] [(short)9];
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14; i_1 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) ((arr_1 [i_1] [i_1]) << (((var_2) - (2419509368U)))));
        arr_5 [9LL] [i_1] &= ((((/* implicit */long long int) arr_2 [i_1] [i_1])) & (arr_1 [11U] [11U]));
        var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned int) -438399180)) : (var_6))) | (((/* implicit */unsigned int) (-(arr_4 [i_1]))))));
        var_21 = ((/* implicit */unsigned long long int) arr_4 [i_1]);
    }
    var_22 = (-(((/* implicit */int) var_5)));
    var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-1)))))));
}
