/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145460
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
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */_Bool) ((((max((arr_2 [i_1 - 1] [(unsigned char)2]), (arr_2 [i_1 + 2] [i_1 + 2]))) + (9223372036854775807LL))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 + 3] [i_1 + 3])))))));
                var_14 = ((/* implicit */int) 809044745368044646ULL);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) var_4))));
}
