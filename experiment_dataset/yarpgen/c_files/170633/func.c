/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170633
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-((~(698941864U))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((4025547951U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))) ? (((/* implicit */int) max((((/* implicit */short) arr_1 [i_0] [i_0])), (var_0)))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) arr_0 [i_0])))))))), (min((((/* implicit */long long int) ((arr_1 [i_0] [i_0]) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_6))))), (((long long int) arr_1 [i_0] [i_0]))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((signed char) min((max((698941883U), (((/* implicit */unsigned int) arr_0 [i_0])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */_Bool) arr_6 [i_1] [i_1]);
        var_11 = (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1]))) & (7U))));
        arr_9 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_1])) != (((/* implicit */int) arr_5 [i_1]))));
    }
    var_12 = ((/* implicit */unsigned char) ((signed char) ((var_7) ^ (((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)96)), (3596025449U)))))));
}
