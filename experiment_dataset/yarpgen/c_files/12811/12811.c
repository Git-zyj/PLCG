/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_12 = (((127748650 ? 65535 : var_4)));
        var_13 = -1444126412;
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            {
                arr_6 [0] [i_2] = (arr_2 [i_2]);
                arr_7 [i_1] [i_2] = min(((max(var_0, var_11))), var_3);
                var_14 = (arr_3 [i_2]);
                arr_8 [i_1] [i_1] [i_1] = ((max(1444126411, 6404409182256981826)));
            }
        }
    }
    #pragma endscop
}
