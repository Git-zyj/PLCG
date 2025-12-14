/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156512
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
    var_20 = ((/* implicit */_Bool) var_4);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_6 [(short)12] = 9LL;
                var_21 -= ((/* implicit */unsigned long long int) var_18);
                var_22 = ((/* implicit */short) ((((576320014815068160LL) ^ (((/* implicit */long long int) arr_5 [i_0 + 1] [i_0 - 1] [i_0 + 1])))) / (576320014815068158LL)));
                var_23 = var_5;
                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_3 [i_0] [i_0 - 1] [i_1]) / (arr_5 [i_0 + 1] [i_0 + 1] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (min((((/* implicit */long long int) arr_1 [i_0 - 1])), (var_14)))));
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) var_7);
}
