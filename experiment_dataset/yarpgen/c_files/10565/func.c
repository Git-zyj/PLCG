/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10565
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        var_13 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_0]))))) / (arr_3 [i_0 - 1] [i_0 - 2])));
        var_14 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0])) * (((((/* implicit */_Bool) 15)) ? (((/* implicit */int) (_Bool)0)) : (-2147483637)))));
        var_15 += ((signed char) arr_3 [i_0 - 1] [i_0 - 1]);
        var_16 += ((/* implicit */unsigned char) ((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4339)))));
    }
    var_17 = ((/* implicit */int) var_11);
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((var_6) >> (((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (unsigned short)61197)))))))));
}
