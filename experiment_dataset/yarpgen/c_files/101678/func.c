/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101678
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
    var_11 = ((/* implicit */int) var_4);
    var_12 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (unsigned short)37402)), (9223372036854775807LL)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] &= ((/* implicit */long long int) 575717119U);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_1 [i_0 - 1]), (arr_1 [i_0 + 1])))) ? (((/* implicit */int) min((arr_0 [i_0 - 1]), (arr_0 [i_0 + 1])))) : ((+(((/* implicit */int) arr_0 [i_0 + 2]))))));
        arr_4 [i_0] [i_0 + 1] = ((/* implicit */short) (-9223372036854775807LL - 1LL));
        var_13 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [i_0])) : (var_6))))), (((((((/* implicit */int) arr_1 [i_0 + 1])) + (((/* implicit */int) (short)-2870)))) / ((-(var_0)))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)231)), (-9223372036854775807LL)))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1]))) < (var_9))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)231))) : (562915593682944LL)))) : (((((/* implicit */_Bool) -562915593682945LL)) ? (17669604887768885000ULL) : (((/* implicit */unsigned long long int) -2125747128))))));
    }
    var_14 = var_10;
}
