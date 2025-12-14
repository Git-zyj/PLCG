/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = ((!((min(var_14, var_1)))));
                                var_21 = (((-(((arr_1 [i_4] [i_1]) ? (arr_8 [i_0] [i_1] [i_1] [i_3] [i_3]) : (arr_0 [i_0]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_22 = (arr_5 [i_5] [i_5]);
                                var_23 -= (min((((1 < 3525644699018404967) ? (!-3525644699018404967) : (arr_0 [i_2]))), (min(var_10, (arr_12 [i_0] [i_0] [i_0 - 2] [i_0])))));
                                var_24 = (min(var_24, (((~(((var_19 >= 3525644699018404993) & (min(var_14, -3525644699018404967)))))))));
                                var_25 = (!0);
                                var_26 = (~1834419054016697816);
                            }
                        }
                    }
                }
            }
        }
        var_27 = min((arr_7 [i_0] [2]), (((33554368 & var_12) ^ (min(var_17, (arr_3 [i_0] [i_0 - 1] [i_0]))))));
    }
    for (int i_7 = 2; i_7 < 17;i_7 += 1)
    {
        var_28 = 1;
        var_29 = (((((((arr_16 [i_7]) < var_1))) <= -1)));
        var_30 = (max(var_1, 1083494421264739871));
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 15;i_9 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 15;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            var_31 = (var_3 >= 14201610270474406656);
                            var_32 = (-(min((arr_25 [i_8] [i_9 + 2] [i_10 - 1]), (arr_15 [i_9 - 1] [i_10 + 1]))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 13;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 16;i_13 += 1)
                    {
                        {
                            var_33 = (arr_31 [i_13] [i_13] [i_8] [i_9] [i_8]);
                            var_34 ^= ((~(4294967292 || var_16)));
                            var_35 = -5509325583227047371;
                            var_36 = (((((var_15 <= -7792171035706065744) + (arr_24 [i_8] [i_8] [i_12] [i_13])))) ? 1 : (((~18446744073709551607) % (4679489599010657682 + 4245133803235144937))));
                        }
                    }
                }
            }
        }
    }
    var_37 += (((max(var_13, var_12))));
    #pragma endscop
}
