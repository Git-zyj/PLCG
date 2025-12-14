/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0 + 2] [i_0] = (arr_0 [i_0 + 2] [i_0 - 1]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = (13143734818963500516 == var_1);
                    var_19 = (min(var_19, (((var_11 < ((1 ? 130 : -4)))))));
                    var_20 &= (13143734818963500490 - 119);
                    arr_10 [i_0] = ((0 > ((125 ? (arr_0 [i_0] [14]) : var_10))));
                }
            }
        }
    }
    var_21 = var_5;
    #pragma endscop
}
