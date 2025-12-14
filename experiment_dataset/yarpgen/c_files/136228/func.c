/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136228
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
    var_18 -= ((/* implicit */long long int) var_10);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned int) (short)15464);
                arr_6 [i_0] [i_0] [(unsigned short)4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
                var_20 = var_17;
                var_21 -= ((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) arr_0 [4ULL])), ((-(9223372036854775807LL))))), (arr_3 [(_Bool)1] [(_Bool)1])));
                var_22 = min((9223372036854775807LL), (9223372036854775807LL));
            }
        } 
    } 
    var_23 = min((min((((/* implicit */long long int) max(((_Bool)1), (var_4)))), (var_9))), (((/* implicit */long long int) var_7)));
    var_24 = ((/* implicit */_Bool) 9223372036854775807LL);
    var_25 = ((/* implicit */signed char) var_14);
}
