/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150210
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
    var_13 += ((/* implicit */short) var_8);
    var_14 = ((/* implicit */_Bool) (~(((/* implicit */int) var_10))));
    var_15 -= ((/* implicit */int) var_3);
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */int) (~(((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))) - ((-(4688285918290719158LL)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) max((arr_2 [i_0 - 1]), ((+(arr_2 [i_0 + 2])))));
    }
    for (long long int i_1 = 1; i_1 < 13; i_1 += 3) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_0 [i_1 + 2])) ? (-4688285918290719148LL) : (((/* implicit */long long int) arr_0 [i_1 - 1]))))));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_6 [i_1 + 1]);
        var_16 = ((/* implicit */long long int) var_4);
    }
}
