/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103239
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) ((long long int) 1655257061320601547LL))) || (((/* implicit */_Bool) 9223372036854775807LL)))));
        var_10 = arr_2 [i_0];
        var_11 = max((min((9971656608880938718ULL), (((/* implicit */unsigned long long int) (short)19235)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_1), (((/* implicit */signed char) arr_1 [i_0] [i_0]))))) <= (((/* implicit */int) var_2))))));
        var_12 += ((/* implicit */long long int) max((var_0), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)-56)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)27)))) << (((((/* implicit */int) arr_0 [i_0])) + (56))))))));
        var_13 = ((/* implicit */int) arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 21; i_1 += 3) /* same iter space */
    {
        var_14 += ((/* implicit */short) arr_6 [i_1 - 1] [i_1 - 1]);
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)60746)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [20LL]))) : (802277721U)))) / (-9223372036854775792LL))))));
        arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) - (((/* implicit */int) (signed char)27))))) ? (((/* implicit */unsigned long long int) arr_6 [i_1 + 1] [i_1])) : (((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1]))) : (16876575652274289833ULL)))));
    }
    for (short i_2 = 1; i_2 < 21; i_2 += 3) /* same iter space */
    {
        var_16 = ((var_7) / (min((arr_12 [i_2 + 1]), (var_7))));
        var_17 = ((/* implicit */short) min((((/* implicit */unsigned int) max((arr_6 [i_2 - 1] [i_2 + 1]), (((/* implicit */int) (unsigned char)198))))), (arr_10 [i_2 + 1])));
    }
    var_18 = ((/* implicit */unsigned long long int) (-(((var_4) ? (((/* implicit */int) (short)31160)) : (max((var_3), (((/* implicit */int) var_5))))))));
}
