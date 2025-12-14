/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165606
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */short) min((1073610752), (((/* implicit */int) arr_2 [i_1 + 1] [i_1]))));
                var_11 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((int) arr_3 [0ULL] [i_1]))) < (((unsigned long long int) 18206992618114431204ULL)))) ? (((((/* implicit */_Bool) arr_1 [12LL] [12LL])) ? (((int) arr_2 [i_1] [i_1])) : (var_9))) : (((/* implicit */int) (short)32752))));
            }
        } 
    } 
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-2107)) * (((/* implicit */int) (signed char)64)))))))) % (((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) var_2))))))))));
}
