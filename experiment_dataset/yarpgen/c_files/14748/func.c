/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14748
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) 249098228U);
        var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) 144044819331678208LL)) && (((/* implicit */_Bool) (short)10197)))))))), (var_15)));
    }
    for (long long int i_1 = 1; i_1 < 22; i_1 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) (-(((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_1 + 1]))) : (var_15)))));
        arr_5 [i_1 - 1] = ((/* implicit */long long int) var_9);
        var_22 = ((/* implicit */unsigned char) ((long long int) (!(((/* implicit */_Bool) arr_1 [i_1 + 1])))));
    }
    for (long long int i_2 = 1; i_2 < 22; i_2 += 3) /* same iter space */
    {
        arr_8 [i_2 + 1] [i_2 - 1] = ((/* implicit */short) max((((((/* implicit */int) var_10)) >> ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775782LL))) + (47LL))))), ((-(((/* implicit */int) (unsigned char)13))))));
        var_23 = ((/* implicit */signed char) 130023424);
    }
    var_24 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned char)57)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) >> (((((/* implicit */int) var_2)) - (29)))))) : (max((var_17), (((/* implicit */unsigned int) var_2))))))));
}
