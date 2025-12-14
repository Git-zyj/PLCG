/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((1603 / 8039619048702581370) ? var_2 : (min(((4294967295 ? var_11 : 1)), ((var_10 / (-32767 - 1)))))));
    var_13 += ((((((29 / 68) ? (var_2 / var_1) : (((min(var_9, var_2))))))) ? (((min(3191907990, var_11)))) : ((-1 * ((min(1, var_11)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_2] [i_0] = 1;
                    arr_10 [i_2] [i_2] [i_2] [i_2] = ((1 & (arr_4 [i_2])));
                    var_14 = var_1;
                    arr_11 [i_2] [6] [i_2] = -9104535300400492596;
                    var_15 = (max(var_15, (~var_0)));
                }
            }
        }

        for (int i_3 = 1; i_3 < 8;i_3 += 1)
        {
            var_16 = ((!(arr_6 [i_0])));
            arr_14 [i_0] [i_3 + 3] = (arr_8 [i_3] [i_3 + 2] [i_3] [i_3]);

            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                var_17 = ((var_10 & (~var_10)));
                var_18 = var_1;
                arr_17 [i_4] [i_3 + 3] [i_3] [i_0] = (((arr_7 [i_3 + 1] [i_3 + 1] [i_3 + 3] [i_3 + 2]) ? var_11 : (arr_7 [i_3 + 1] [i_3 + 4] [i_3 + 3] [i_3 + 1])));
                var_19 &= (((arr_1 [i_3 + 2] [i_3 - 1]) ? (arr_6 [i_3 + 3]) : 0));
            }
        }
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            var_20 = (max(var_20, ((((1 | 0) ? (arr_13 [i_0] [i_5]) : var_2)))));
            var_21 |= (((arr_19 [i_0] [i_5] [i_5]) ? (~3457862859) : (arr_2 [i_0])));
            var_22 = (max(var_22, ((-var_8 ? -46 : ((-(arr_16 [i_0])))))));
            var_23 = (((arr_0 [i_0]) ? (arr_20 [i_0]) : var_9));
            var_24 = (~18410715276690587648);
        }
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            var_25 *= (arr_15 [i_0] [i_6] [i_0] [i_0]);
            var_26 = ((((((arr_22 [i_0] [i_0]) ? 1 : 4))) ? 1819 : (arr_20 [i_0])));
            var_27 += (arr_12 [i_6]);
            var_28 ^= ((5833644909086105702 ? (arr_16 [i_6]) : (arr_3 [i_0] [i_0] [i_0])));
        }
    }
    var_29 = ((((min(-2746802214321643295, -704360875))) && var_3));
    #pragma endscop
}
