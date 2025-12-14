/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154583
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
    var_16 = ((((/* implicit */_Bool) (short)-21566)) ? (18446744073709551598ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47614))));
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (8270181051462694035ULL))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (((-(var_11))) - (((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_0]))))))))));
        var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (short)-21566))) ? ((-(var_11))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) <= (((/* implicit */int) var_1))))))));
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) var_7))));
    }
    for (long long int i_1 = 0; i_1 < 23; i_1 += 4) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) (+(9502199419910018937ULL)))) ? (((/* implicit */unsigned long long int) var_8)) : ((-(8270181051462694035ULL))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_1])))));
        arr_8 [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_12)), (max(((-(8270181051462694035ULL))), (((/* implicit */unsigned long long int) var_2))))));
    }
}
