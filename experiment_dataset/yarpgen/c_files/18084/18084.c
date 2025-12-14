/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(1252778615, var_6));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_19 = (min(var_19, 15490869297248079300));
                        var_20 &= (arr_2 [i_2]);
                        var_21 = 1252778599;
                        var_22 = -1252778604;
                        arr_10 [i_0] [i_0] [i_2] [i_3] = (((arr_5 [19]) ? (arr_8 [i_0] [14] [i_2] [i_1 + 3]) : (arr_4 [i_1 - 1] [i_1 + 2] [14])));
                    }
                }
            }
        }
        var_23 = (arr_4 [i_0] [i_0] [3]);
    }
    #pragma endscop
}
