/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (!var_1);
    var_15 = var_11;

    for (int i_0 = 1; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_16 = (max(var_16, var_10));
        arr_3 [i_0] [i_0] = 1;
        arr_4 [i_0] = (((((((min(9428232264068009597, 63488))) ? (min(9018511809641542013, 155)) : (arr_1 [i_0])))) && 1));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1 - 1] [i_1 + 2] = ((((~(arr_1 [1])))) > -var_5);
        var_17 = ((~(arr_2 [i_1 + 2])));
        arr_8 [i_1 - 1] = 1;
        arr_9 [i_1] [i_1] = (127 || -177);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_18 &= ((!(arr_5 [i_2] [i_2])));
        var_19 = (max(var_19, 9018511809641542011));
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 12;i_4 += 1)
            {
                {
                    var_20 = -1073741824;
                    var_21 = (arr_11 [i_4 - 1] [i_3]);
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        var_22 = ((-(max((arr_6 [i_5]), (arr_6 [i_5])))));
        var_23 = (max((arr_5 [i_5] [i_5]), (!-1)));
    }
    var_24 = (((-20675 != ((1 ? var_9 : 98304)))));
    var_25 = ((((68719476735 && 15) ? 1 : ((max(var_7, var_3))))));
    #pragma endscop
}
