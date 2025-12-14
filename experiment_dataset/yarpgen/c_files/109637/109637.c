/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!(((var_8 / var_2) > (-7977946998435567153 > 1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] |= min((min((arr_2 [i_1] [i_1 - 1] [i_0]), var_5)), ((((((arr_3 [i_1 + 1] [i_1]) + 2147483647)) >> (-8948759980120433991 + 8948759980120434002)))));
                arr_6 [i_1] [i_0] [i_0] = ((((((min(1876933584, -1))) ? (min(4971616157220381273, -8575201601503548340)) : 8191)) < ((min(1739941248, -1739941253)))));
            }
        }
    }
    #pragma endscop
}
