/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151639
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
    var_15 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-1))) <= (-4512769652400819186LL))))) <= (4119957378317432201LL)))), (var_12)));
    var_16 = ((/* implicit */long long int) ((unsigned int) var_0));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 14; i_0 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */short) var_10);
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) arr_1 [i_0 + 3] [i_0 + 1])) <= (-5LL)));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) ((arr_2 [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 3])))));
    }
    /* vectorizable */
    for (long long int i_1 = 3; i_1 < 14; i_1 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2516321120U)) ? (((/* implicit */long long int) 1895554923U)) : (-29LL))))));
        var_19 = arr_7 [i_1];
        var_20 = ((/* implicit */long long int) arr_8 [i_1 - 3]);
    }
}
