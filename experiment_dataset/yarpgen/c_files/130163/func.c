/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130163
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
    var_13 = ((var_3) - (((/* implicit */unsigned int) (-2147483647 - 1))));
    var_14 = ((/* implicit */int) var_0);
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((unsigned short) max((var_8), (((/* implicit */long long int) (unsigned char)0))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        arr_3 [(short)9] [(short)9] = ((/* implicit */unsigned short) ((((/* implicit */long long int) min((((((/* implicit */_Bool) (short)-21162)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_7)))), (((/* implicit */int) (signed char)70))))) / (((((/* implicit */_Bool) min((arr_1 [(short)9] [i_0]), (((/* implicit */unsigned long long int) arr_2 [i_0]))))) ? (arr_0 [i_0 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 1])))))));
        var_16 = ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 - 1]))) : (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_0 [i_0 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 1]))))));
    }
}
