/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186800
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
    for (unsigned long long int i_0 = 4; i_0 < 12; i_0 += 2) /* same iter space */
    {
        var_13 -= arr_1 [i_0 + 4];
        arr_2 [i_0] = ((/* implicit */_Bool) var_7);
        arr_3 [(short)6] |= var_10;
    }
    for (unsigned long long int i_1 = 4; i_1 < 12; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_2 = 1; i_2 < 14; i_2 += 2) 
        {
            arr_9 [i_1] = ((/* implicit */short) ((arr_8 [i_2 + 2] [i_2] [i_1]) <= (((/* implicit */unsigned long long int) min((((/* implicit */int) max(((_Bool)0), ((_Bool)1)))), (((((/* implicit */int) arr_4 [i_1] [i_2 + 1])) & (((/* implicit */int) var_4)))))))));
            var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) : (((((/* implicit */_Bool) var_6)) ? (arr_7 [i_1 - 1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1])))))))) ? (((((((/* implicit */_Bool) -1972673566)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2 + 1] [i_1] [i_1]))) : (arr_5 [i_2]))) | ((~(var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1)))))));
        }
        arr_10 [i_1] = ((/* implicit */unsigned long long int) ((short) (+(arr_8 [i_1] [i_1] [i_1]))));
        arr_11 [i_1 - 4] [i_1 - 4] |= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_6 [i_1] [3] [i_1])), (var_3)))) ? (((/* implicit */int) var_10)) : ((-(((/* implicit */int) arr_4 [i_1] [i_1]))))))) != ((((_Bool)1) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-439)))))));
    }
    var_15 = ((/* implicit */_Bool) var_0);
    var_16 &= ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) ((var_3) >> (((/* implicit */int) var_10)))))))), (((int) max((((/* implicit */unsigned long long int) var_2)), (var_6))))));
    var_17 *= min((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-23228)) || (((/* implicit */_Bool) 1119917514)))))))));
}
