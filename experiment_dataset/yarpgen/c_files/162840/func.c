/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162840
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
    var_16 = ((/* implicit */signed char) min((4907359882806479988LL), (((/* implicit */long long int) (unsigned short)11238))));
    var_17 = ((/* implicit */unsigned int) var_1);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_14)) / (var_0)))) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_2 [i_0])), (var_2))))))) ? (((/* implicit */int) ((((((/* implicit */int) (unsigned short)11241)) < (-1669464248))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_5)))))))) : (((/* implicit */int) (unsigned short)64752))));
        var_19 = ((/* implicit */int) (-(var_10)));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_1]) : (var_7))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) : (-11LL))))));
        var_20 = ((/* implicit */unsigned int) min((var_20), (arr_5 [i_1] [i_1])));
    }
}
