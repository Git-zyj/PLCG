/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125553
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (-2147483647 - 1));
        var_12 *= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_2 [i_0]))))) ^ (max((((/* implicit */int) ((var_10) <= (((/* implicit */int) var_11))))), (var_10)))));
    }
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) var_3);
        arr_8 [i_1] = ((/* implicit */unsigned long long int) var_1);
        var_13 *= ((/* implicit */unsigned long long int) arr_4 [i_1]);
        var_14 |= ((/* implicit */long long int) var_10);
    }
    var_15 = ((/* implicit */int) max((((((/* implicit */_Bool) 35182224605184ULL)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_6)) : (var_2))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_8)) : (16749419755719767702ULL))))), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) (unsigned short)59018)) ? (((/* implicit */unsigned long long int) var_8)) : (9119237682644437413ULL)))))));
    var_16 = var_7;
    var_17 = ((/* implicit */unsigned long long int) var_5);
    var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (min((var_3), (((/* implicit */unsigned long long int) -2147483647)))) : ((+(21ULL))))))));
}
