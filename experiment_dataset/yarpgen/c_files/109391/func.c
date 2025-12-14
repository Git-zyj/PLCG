/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109391
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
    for (long long int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            {
                var_19 = (-9223372036854775807LL - 1LL);
                arr_5 [6LL] [i_1] [i_1] = 9223372036854775790LL;
                arr_6 [i_1] = 9223372036854775804LL;
            }
        } 
    } 
    var_20 = -7980850448908475274LL;
    var_21 = 9223372036854775807LL;
}
