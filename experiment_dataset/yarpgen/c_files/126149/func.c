/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126149
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
    var_16 = ((/* implicit */unsigned long long int) 1048568);
    var_17 = ((/* implicit */long long int) ((int) var_1));
    var_18 = ((/* implicit */_Bool) var_8);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_19 = ((/* implicit */long long int) ((var_15) <= (((var_15) | (((/* implicit */int) ((-1048569) != (-1048573))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_4);
    }
    for (int i_1 = 2; i_1 < 23; i_1 += 2) 
    {
        arr_6 [i_1 + 2] [21LL] = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) (_Bool)0)), (min((((/* implicit */unsigned long long int) var_13)), (var_11))))) ^ (((/* implicit */unsigned long long int) min((((/* implicit */int) min((((/* implicit */short) arr_5 [i_1 + 2])), (var_14)))), (arr_4 [22LL]))))));
        var_20 = ((/* implicit */long long int) 747730622);
    }
}
