/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121400
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
    for (long long int i_0 = 2; i_0 < 7; i_0 += 4) /* same iter space */
    {
        var_11 = ((/* implicit */int) max((var_11), (((((/* implicit */_Bool) min(((unsigned char)175), ((unsigned char)109)))) ? (((/* implicit */int) ((unsigned char) arr_2 [i_0 - 1]))) : ((+(((/* implicit */int) var_4))))))));
        var_12 = ((/* implicit */signed char) arr_3 [i_0 - 1]);
    }
    /* vectorizable */
    for (long long int i_1 = 2; i_1 < 7; i_1 += 4) /* same iter space */
    {
        var_13 &= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)147)) + (((/* implicit */int) (unsigned char)151))));
        arr_7 [i_1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 - 2]))) / (arr_5 [(short)9] [i_1 - 1]));
        var_14 = ((/* implicit */short) (((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)151)))));
    }
    var_15 = ((/* implicit */int) max((var_15), (max((((/* implicit */int) var_5)), (var_1)))));
}
