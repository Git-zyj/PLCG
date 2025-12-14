/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119030
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) /* same iter space */
        {
            arr_5 [i_1] [i_0] [i_0] = ((/* implicit */int) var_10);
            var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) -1178020003675060065LL))));
            var_15 |= ((/* implicit */long long int) (unsigned short)28078);
        }
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) /* same iter space */
        {
            var_16 = ((/* implicit */signed char) arr_8 [i_0] [(short)6] [i_2]);
            arr_9 [i_2] [i_2] = ((((/* implicit */_Bool) arr_4 [i_2])) ? (arr_4 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)37))));
        }
        arr_10 [4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (max((3289420964855372265ULL), (((/* implicit */unsigned long long int) 1366623458))))));
        var_17 = ((/* implicit */unsigned short) var_5);
    }
    var_18 = ((/* implicit */long long int) var_5);
    var_19 = ((/* implicit */int) var_5);
    var_20 += ((/* implicit */unsigned int) var_0);
}
