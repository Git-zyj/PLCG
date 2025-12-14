/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11282
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
    for (int i_0 = 1; i_0 < 11; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned short) 9223372036854775807LL));
        var_14 += ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((-9223372036854775807LL), (((/* implicit */long long int) var_2))))))))));
    }
    for (int i_1 = 1; i_1 < 11; i_1 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */long long int) ((unsigned long long int) min((9223372036854775807LL), (((/* implicit */long long int) 267707554U)))));
        var_16 = min((((/* implicit */int) ((unsigned char) 4294967289U))), ((-(((/* implicit */int) ((var_0) < (((/* implicit */int) var_7))))))));
        arr_7 [i_1] = ((/* implicit */unsigned short) ((signed char) (!(((/* implicit */_Bool) 356147384)))));
    }
    var_17 = ((/* implicit */short) min((((/* implicit */unsigned int) var_13)), (min((((/* implicit */unsigned int) (_Bool)1)), (max((1724658630U), (((/* implicit */unsigned int) var_0))))))));
    var_18 = ((/* implicit */unsigned long long int) var_6);
}
