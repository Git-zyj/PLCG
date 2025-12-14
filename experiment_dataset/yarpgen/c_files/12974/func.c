/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12974
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
    var_14 = ((/* implicit */unsigned long long int) var_7);
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) 4294959104U)) ? (17232160703794099830ULL) : (18446744073709551615ULL)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_4 [(signed char)6] = ((/* implicit */unsigned int) var_2);
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (arr_1 [i_0 + 1]) : (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */unsigned int) max((((arr_3 [i_0] [5ULL]) ? (((/* implicit */int) arr_3 [i_0] [i_0 + 1])) : (((/* implicit */int) arr_3 [(signed char)9] [i_0])))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_0 [3U]))))))) : (max((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (arr_2 [i_0]))), (((((/* implicit */_Bool) arr_1 [7LL])) ? (((/* implicit */unsigned int) var_0)) : (arr_2 [i_0])))))));
    }
    var_17 = var_1;
}
