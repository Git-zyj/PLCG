/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128349
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2708196598U)) ? ((~(((((/* implicit */_Bool) var_14)) ? (var_13) : (((/* implicit */int) var_9)))))) : (((((/* implicit */_Bool) var_8)) ? ((-(((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) 471346023001178679LL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_10))))))));
    var_16 = min((189697807U), (((/* implicit */unsigned int) (signed char)41)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_17 = ((/* implicit */_Bool) (~(arr_0 [i_0])));
        var_18 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)(-127 - 1)))));
        arr_2 [i_0] &= ((/* implicit */unsigned int) ((int) ((arr_0 [i_0]) - (((/* implicit */unsigned int) 2147483647)))));
        arr_3 [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)71)))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_19 = ((((/* implicit */unsigned long long int) (-2147483647 - 1))) == (168488529397184923ULL));
        arr_6 [i_1] = 899654052U;
        var_20 = ((signed char) ((unsigned char) -7714364396368087674LL));
    }
}
