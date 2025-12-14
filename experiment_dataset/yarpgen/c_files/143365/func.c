/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143365
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
    var_20 += ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) (signed char)4)), (var_0))), (((/* implicit */long long int) (+(((/* implicit */int) var_7)))))));
    var_21 -= ((/* implicit */signed char) var_9);
    var_22 = ((/* implicit */long long int) var_13);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_23 = ((/* implicit */unsigned long long int) (+(var_2)));
        var_24 -= ((/* implicit */signed char) arr_0 [i_0]);
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 10; i_1 += 3) 
    {
        var_25 = arr_4 [i_1 - 1];
        var_26 = ((/* implicit */_Bool) min((var_26), (((((/* implicit */_Bool) arr_5 [i_1 - 1])) || (arr_0 [i_1 - 1])))));
    }
}
