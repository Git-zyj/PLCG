/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184051
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
    var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-13))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        arr_2 [i_0] [i_0 + 2] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) (signed char)81)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)11))) : (18446744073709551612ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26667))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (short)-14748))))));
        arr_3 [i_0] = ((signed char) ((arr_0 [i_0 - 1] [i_0 + 2]) - (((/* implicit */long long int) arr_1 [i_0] [i_0 - 2]))));
    }
    var_19 = ((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) ((unsigned char) 0U))), (var_1)))));
    var_20 = ((/* implicit */int) var_7);
}
