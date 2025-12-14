/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141807
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
    var_10 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((11606576441170702811ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)139))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 4; i_0 < 9; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [10])) + (((/* implicit */int) (short)240))))) < (arr_0 [i_0 - 3])));
        var_11 *= ((/* implicit */int) (!((!(((/* implicit */_Bool) -361244604))))));
        var_12 = ((/* implicit */short) arr_0 [(short)6]);
        arr_3 [i_0] = ((/* implicit */long long int) (~(var_9)));
        var_13 += ((/* implicit */long long int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) arr_1 [i_0 - 1]))));
    }
    for (unsigned char i_1 = 4; i_1 < 9; i_1 += 2) /* same iter space */
    {
        var_14 = max((min((var_5), (((/* implicit */int) (signed char)49)))), ((-(((/* implicit */int) var_6)))));
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (unsigned short)32256))));
    }
}
