/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!var_9);
    var_11 = (max(((min(((0 ? var_9 : var_4)), var_9))), (max(((min(var_7, 1))), (min(1, -33477933603038540))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((1685943924 ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0])));
        var_12 -= var_6;
        var_13 = var_4;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    var_14 += (arr_7 [i_0] [i_0] [i_0] [i_0]);
                    arr_8 [i_0] [i_1] [i_1] [i_2] = (-786016479 | 1);
                    arr_9 [i_1] [i_2] = (arr_7 [i_2] [i_2 - 3] [i_2] [i_2]);
                }
            }
        }
        arr_10 [i_0] = (((arr_1 [i_0] [i_0]) * (arr_1 [i_0] [i_0])));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
    {
        var_15 = var_3;
        var_16 &= (max((((arr_0 [i_3]) ? var_6 : 1)), (min(((-(arr_7 [i_3] [i_3] [i_3] [i_3]))), (arr_3 [i_3])))));
    }
    #pragma endscop
}
