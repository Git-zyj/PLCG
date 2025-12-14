/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (~266338304)));
    var_17 = 711274369;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 = ((((37 ? (arr_1 [i_0]) : (arr_1 [i_0]))) / ((((((var_12 ? (arr_2 [i_0]) : var_9))) || (var_5 == 121))))));
        arr_3 [i_0] = ((+((var_11 ? (arr_2 [i_0]) : (arr_2 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    arr_10 [i_1] [2] = (var_4 ? (((((arr_8 [i_0] [14] [4] [4]) ? 29788 : (arr_0 [i_1 + 1] [i_2]))) % (((77 ? (arr_9 [i_2] [i_0] [0] [i_0]) : var_9))))) : var_9);

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        var_19 = var_14;
                        var_20 = (max(var_20, var_4));
                        var_21 ^= (((((-(max(var_11, 164))))) ? (((arr_9 [i_0] [9] [11] [i_0]) ? var_4 : var_2)) : (!var_6)));
                        arr_13 [i_1] [i_1] [i_1] [i_1] = ((((min((arr_9 [i_3 + 1] [13] [i_3 + 1] [i_3 + 1]), var_11))) ? (((var_2 ? var_4 : var_10))) : (min((arr_8 [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 1]), var_5))));
                    }
                    var_22 = (min(var_22, (((var_7 ? (((!77) ? (arr_6 [1] [1] [i_2 - 4]) : (arr_5 [10]))) : (arr_11 [8]))))));
                }
            }
        }
        var_23 = (min(var_23, -var_4));
        var_24 |= 18181;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 9;i_6 += 1)
            {
                {
                    var_25 = ((!(~var_9)));
                    arr_22 [i_6] [i_6] [i_6] = (((arr_17 [i_6 + 1] [i_5]) ? var_15 : var_8));
                }
            }
        }
        var_26 = var_15;
        arr_23 [i_4] = (27948 && var_5);
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    var_27 ^= ((-1110713670 ? (((-1110713682 ? 10 : var_7))) : var_3));
                    arr_28 [i_7] = 1110713683;
                }
            }
        }
        var_28 ^= (arr_2 [i_4]);
    }
    var_29 = (((var_7 ? 47231 : var_0)));
    var_30 = ((((((17615250499928190309 / -122) * (1525 * -11027)))) && -68719476736));
    #pragma endscop
}
