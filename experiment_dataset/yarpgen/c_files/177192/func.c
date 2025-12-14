/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177192
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
    var_10 = ((/* implicit */int) ((var_5) ^ (((/* implicit */unsigned long long int) var_7))));
    var_11 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) var_6)), (var_7))) & (var_7)))), (max((((/* implicit */unsigned long long int) min(((short)240), (var_4)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_5)))))));
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 9; i_0 += 3) /* same iter space */
    {
        var_12 |= ((/* implicit */unsigned int) arr_0 [i_0 + 4]);
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(max((arr_1 [i_0 + 1] [i_0 + 1]), (arr_1 [i_0] [i_0])))))) ? (((((/* implicit */_Bool) var_5)) ? ((~(var_7))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)-234)), (arr_0 [(short)5]))))))) : (((/* implicit */long long int) ((/* implicit */int) (short)18366)))));
    }
    for (short i_1 = 2; i_1 < 9; i_1 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */long long int) arr_2 [i_1] [i_1]);
        var_15 = ((/* implicit */int) (~(max((((/* implicit */long long int) arr_3 [i_1 + 1] [i_1 + 2])), (6835277884960391499LL)))));
    }
    var_16 = var_0;
}
