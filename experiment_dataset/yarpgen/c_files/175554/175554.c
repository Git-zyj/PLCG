/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_2] = (0 + 32654);
                    var_17 = ((-2122360945 ? -2122360945 : 2122360944));
                }
            }
        }

        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            arr_9 [6] |= ((-102 ? 3733216393528567605 : ((0 ? 325757611968414923 : 42709))));
            var_18 += ((-var_0 ? 49771 : (1 == var_8)));
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            var_19 = ((((var_3 ? 3906361200 : var_5))) ? (~var_1) : 16383);
            var_20 = (((!-2122360949) ? (18446744073709551607 && 0) : (-2147483647 - 1)));
        }
        arr_12 [i_0] = var_6;
        var_21 = (((var_3 == var_3) ? ((1 ? 0 : 5927389188874792169)) : 1));
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            {

                for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                {
                    var_22 = (((((-((var_6 ? var_4 : 10028107815820971327))))) ? (min(5587623650645887698, 1)) : (((var_5 ? 12288 : 1)))));
                    var_23 = ((25537 ? 50715 : 0));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            {
                                var_24 = 32;
                                var_25 ^= ((var_9 ? ((var_15 ? 1112369707 : var_9)) : -7406));
                                var_26 |= ((~((14173 ? 1 : -4894813867423389041))));
                            }
                        }
                    }
                    var_27 = (((63448 && 2147483647) >= ((32755 ? 554481443956268890 : 65523))));
                }
                for (int i_11 = 0; i_11 < 20;i_11 += 1) /* same iter space */
                {
                    var_28 = 5587623650645887698;
                    arr_32 [i_5] [i_6] [1] = -438;
                    var_29 = (((10358 ? 51054 : 1)));
                }
                /* LoopNest 3 */
                for (int i_12 = 3; i_12 < 18;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 16;i_14 += 1)
                        {
                            {
                                arr_39 [i_12] [i_12] [i_12] [i_13] [14] [i_14] [i_12] = var_15;
                                var_30 = var_10;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
