/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, 1));
    var_14 = (min(var_14, ((((-806 ? var_8 : 86))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_15 = (max(var_15, ((126 ? (min(var_2, 1)) : 1))));
                var_16 = (min(1073741823, (min((~var_6), ((min(-32759, (arr_0 [2]))))))));
            }
        }
    }
    #pragma endscop
}
