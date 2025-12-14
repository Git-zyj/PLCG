/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = var_1;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [9] [i_1] [i_1] [i_0] = (24 % -4294967276);
                    arr_10 [i_1] = var_1;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] [i_3] = (((((4294967276 ? var_5 : (arr_11 [i_3] [i_3])))) == (var_10 / var_2)));
        arr_15 [i_3] [13] = ((((arr_12 [i_3]) != (arr_12 [i_3]))));
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
    {
        arr_18 [i_4] = (((((!((min(var_9, var_8)))))) >> (var_1 - 158)));
        var_15 = (max(var_1, (arr_16 [13] [6])));
    }
    var_16 = ((((((min(var_2, var_12)) * (var_5 == var_0)))) ? var_6 : var_8));
    var_17 = var_2;
    #pragma endscop
}
