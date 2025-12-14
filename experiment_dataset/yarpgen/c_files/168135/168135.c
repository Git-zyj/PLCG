/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((-(min(-7292980403775547884, 7292980403775547861)))))));
    var_15 = (min(((((min(-4975264598303283179, var_9))) ? -var_1 : -var_0)), var_6));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_16 -= ((-(arr_0 [i_1 + 2])));
                    var_17 = (((arr_1 [i_2 - 2]) ? (min((min(var_8, 1658367448)), var_7)) : (((arr_0 [i_1 + 2]) ? ((var_9 ? var_10 : var_9)) : (arr_1 [i_1 - 2])))));
                }
            }
        }
    }
    #pragma endscop
}
