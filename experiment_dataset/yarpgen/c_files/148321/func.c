/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148321
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
    var_13 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_3))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */short) var_10);
        arr_2 [i_0] = ((/* implicit */short) var_9);
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (+((~(((/* implicit */int) var_0)))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_3 [i_1]))));
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)32)) << (((15068794217419438106ULL) - (15068794217419438090ULL))))) != (((((/* implicit */int) arr_0 [i_1])) & (((/* implicit */int) (signed char)-1)))))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) /* same iter space */
    {
        var_17 = ((_Bool) max((var_3), (((/* implicit */unsigned char) (!((_Bool)1))))));
        var_18 = ((/* implicit */int) min((var_18), (arr_7 [i_2] [i_2])));
    }
}
