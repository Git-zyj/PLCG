/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] [i_0] |= 18165393927686900899;
        arr_4 [i_0] [i_0] = var_5;
    }

    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_9 [4] |= 7743410980799884375;
        arr_10 [2] |= (max(38583, var_9));
        arr_11 [4] |= ((((((-32767 - 1) ? 246 : 13659027956296207507))) ? (((-127 - 1) ? 0 : 4088)) : var_8));
        var_16 = (((((6305 ? var_10 : 246))) ? (max(2147483647, var_8)) : ((1 ? 250 : (-2147483647 - 1)))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 6;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        arr_21 [i_1] [i_2] [i_2] [i_2] [i_1] [i_2] = (max(65535, -16));
                        arr_22 [i_4] [i_2] [i_2] [i_1] |= (min((((((0 ? 2147483647 : 0))) ? var_6 : ((min(var_9, 0))))), 0));
                        var_17 = var_6;
                    }
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 18;i_5 += 1)
    {
        arr_25 [i_5] [i_5] = (max(21909, ((max((max(1, var_8)), var_2)))));
        var_18 = (((((-67 ? 1 : 8912013580708762999))) ? ((16193173869575299176 ? var_11 : 65531)) : ((var_14 ? var_2 : var_14))));
    }
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        arr_28 [i_6] = (min(var_2, var_5));
        var_19 = ((((((((3472747661 ? var_5 : 9046333618114938694))) ? 1599 : 1715488824643471321))) ? 45154 : (((((var_14 ? var_1 : var_9))) ? ((4857300024770579839 ? 128 : 0)) : ((var_11 ? 0 : var_0))))));
        arr_29 [i_6] = ((-1 ? ((0 ? (((-20066 ? -5027680174238448109 : var_13))) : ((0 ? var_1 : var_11)))) : 65525));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_20 = (((((33664 ? -33 : ((var_12 ? 23033 : 9223372036854775792))))) ? (max((max(20, 7745344528600906260)), var_1)) : -1715690271));
        var_21 = (min(var_21, var_2));
        var_22 |= (((min(0, 9116149484368345766))) ? (((16893225200837614624 ? 4156002838 : 1))) : 0);
    }
    #pragma endscop
}
