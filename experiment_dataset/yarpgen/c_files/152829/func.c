/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152829
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
    var_20 = ((/* implicit */_Bool) var_7);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 4; i_0 < 18; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_15)), ((~(18446744073709551615ULL)))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [i_0 + 2])), (((unsigned int) var_18))))) && (((arr_1 [i_0 + 2] [i_0 + 2]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3ULL))))))))));
    }
    var_22 = var_14;
}
