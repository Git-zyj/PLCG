/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 = (((((var_10 ? 1 : 62256))) - (max(4128770444444189893, (arr_1 [i_0])))));
        arr_2 [i_0] [i_0] = var_4;
        arr_3 [i_0] = (arr_0 [i_0]);
        arr_4 [i_0] [i_0] &= (((((var_9 && var_4) && ((min((arr_1 [i_0]), (arr_0 [i_0])))))) || ((((max(-1, var_9))) && (arr_1 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_7 [i_1] = (var_10 ^ 2147483647);
        arr_8 [i_1] = (((arr_1 [i_1]) ? (((var_3 ? 704793354 : -3))) : -var_7));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = ((2 ? var_12 : 2));
        var_14 = (arr_0 [i_2 - 1]);
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_15 = (max(var_15, var_5));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    arr_20 [i_3] [i_4] = ((arr_18 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1]) & (((arr_19 [i_3] [i_4] [12]) ? 2147483647 : (-32767 - 1))));
                    var_16 += ((32765 + (arr_19 [5] [i_3 - 1] [i_3 - 1])));
                }
            }
        }
        arr_21 [i_3] = -121;
    }
    var_17 = (max(var_17, var_3));
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 20;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            {
                arr_28 [i_6] [i_7] = ((+((((arr_19 [16] [i_7] [i_6 - 1]) <= (arr_10 [i_6]))))));
                var_18 += ((4 || (arr_16 [i_6] [21] [i_6 + 1])));
            }
        }
    }
    #pragma endscop
}
