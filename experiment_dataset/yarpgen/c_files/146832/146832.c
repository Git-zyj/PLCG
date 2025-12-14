/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_11 = (min(var_7, (max(var_4, 5))));
        var_12 = var_10;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_13 = var_1;
                        var_14 = (arr_0 [i_0 - 2]);
                        var_15 = (5 && 74);
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 0;i_4 += 1)
    {
        arr_11 [i_4] = (((-74 + 2147483647) << (1 - 1)));
        var_16 = (min(var_16, var_0));
        var_17 = (max(56, 2378116483643100950));
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        arr_14 [i_5] |= ((var_4 | (~-1320158848)));
        var_18 = var_10;

        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 1; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 23;i_9 += 1)
                    {
                        {
                            var_19 = (min(var_19, (((min(164, 63))))));
                            arr_24 [i_5] [i_5] [i_5] [i_5] [i_5] = var_3;
                            var_20 = ((-var_6 ? 167563530 : (((max(4, -75))))));
                            arr_25 [i_5] [i_5] [i_5] |= (arr_16 [i_8] [i_6]);
                            arr_26 [i_5] [i_6] [i_7 - 1] = 229;
                        }
                    }
                }
            }
            var_21 = (arr_21 [i_5] [i_5] [i_5]);
        }
        var_22 = (arr_23 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]);
    }
    for (int i_10 = 0; i_10 < 21;i_10 += 1)
    {
        var_23 *= 13234;
        arr_29 [i_10] = ((min(-var_4, ((13188922221458530995 << (((arr_27 [i_10]) - 1670689069)))))));
        arr_30 [i_10] [i_10] = (2378116483643100960 * var_6);
        var_24 = (min((min((max(var_4, var_8)), -74)), (((~(arr_15 [i_10]))))));
        arr_31 [i_10] [i_10] |= var_8;
    }
    var_25 = (max(2, var_4));
    #pragma endscop
}
