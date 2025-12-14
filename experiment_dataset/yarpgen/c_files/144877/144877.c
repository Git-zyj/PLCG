/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_20 = var_3;
        var_21 = ((((min(var_4, (((arr_2 [7]) ^ 176))))) ? ((((((arr_3 [i_0]) / var_0)) % (arr_1 [i_0])))) : var_10));

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            var_22 = -2500274949738828222;
            arr_6 [i_0 - 1] [i_1] [i_1] = var_13;
            var_23 = var_6;
            var_24 = ((-(~3957973509)));
            var_25 = ((((min(var_16, (arr_1 [i_0 - 1])))) - var_0));
        }
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    arr_11 [6] [6] [i_3] = (((min(((var_8 << (var_2 - 103))), 35454)) >> (((arr_3 [i_0 + 1]) + 707))));
                    arr_12 [i_0] [i_0] [i_0] = 2528534551;
                }
            }
        }
        var_26 *= (((-32767 - 1) ? 7287 : (-127 - 1)));
    }
    for (int i_4 = 1; i_4 < 24;i_4 += 1)
    {
        var_27 = var_11;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {
                    arr_21 [i_6] [i_4] [i_4] [i_6] |= (((185 << (((min(var_10, 30082) - 30061))))));
                    arr_22 [i_4] [i_5] [i_5] [i_4] = (min((arr_16 [i_4 + 1]), ((((536870912 ? var_8 : (arr_17 [i_5] [i_5] [i_5])))))));
                    arr_23 [i_5] [i_6] [i_6] [i_5] = var_16;
                }
            }
        }
        var_28 |= var_17;
    }
    for (int i_7 = 3; i_7 < 13;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                {
                    arr_30 [i_7] = (((min(var_8, var_18))));
                    arr_31 [i_7] [i_8] = (min((((((min((arr_1 [i_8]), var_19))) ? (arr_10 [i_7]) : var_14))), 536870916));
                    var_29 = (((((min(1, 480)))) ? (arr_1 [i_7]) : (min(var_17, (((arr_19 [3] [15] [3] [i_8]) / -15662))))));
                }
            }
        }
        var_30 = var_8;
        arr_32 [i_7 - 3] = 3758096384;
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        var_31 = (536870916 >> 0);
        arr_36 [i_10] = 1;
        var_32 = (((min(587045691, -1992215514))));
    }
    var_33 = -var_16;
    var_34 |= var_16;
    var_35 &= ((~(1 * -1692133308)));
    #pragma endscop
}
