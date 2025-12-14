/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_14 - var_14);

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_16 = (min(((var_2 ? var_0 : var_6)), (var_3 | var_6)));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 = (~1);
                    var_18 = (!6686);

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_3] = ((var_5 ? 2062342110 : var_3));
                        var_19 = (((((58849 ? var_8 : var_2))) ? ((var_11 ? 48 : 6562120915919789379)) : 133169152));
                        arr_11 [i_0] [i_0] [0] [i_3] [i_3] = (50989 - var_5);
                        arr_12 [i_0] [8] [i_0] [i_0] [i_0] = ((20396 != (1 % var_4)));
                    }
                    var_20 = (min(var_7, (((var_14 != 1) >> (((var_6 * 4252392901) - 1185278866))))));
                    arr_13 [i_0] [i_0] [i_0] = -4158855888673044387;
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        arr_17 [i_4] = var_12;
        arr_18 [i_4] [i_4] = ((!(((-4158855888673044387 ? var_14 : 4294967248)))));
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {

                for (int i_7 = 2; i_7 < 17;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 4; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_21 = (min(((4294967248 ? 32767 : var_5)), (var_4 % var_10)));
                                var_22 = ((4294967248 ? ((((4294967223 ? 2280763104 : -1)) & (((var_2 ? var_5 : 1))))) : ((min((148 != 6562120915919789373), var_13)))));
                            }
                        }
                    }
                    arr_33 [i_5 - 1] [i_6] [i_6] = ((56 % ((~(min(-710271101, var_4))))));

                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        arr_36 [i_10] = 1;
                        arr_37 [i_10] [i_6] [i_6] [i_6] = (min(1, var_11));
                    }
                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        var_23 = 3533818155;
                        arr_40 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((311849273 % (-var_3 < 1)));
                        var_24 = (~var_9);

                        for (int i_12 = 2; i_12 < 16;i_12 += 1)
                        {
                            arr_44 [i_5 - 1] [i_5 - 1] [i_7] [i_5 - 1] [i_12] = ((!(((var_6 ? 195 : 1633889581)))));
                            arr_45 [i_6] [i_12] [i_6] = var_12;
                            arr_46 [i_5] [i_6] [i_12] [i_12] = (((var_7 / 1) * (var_3 / 1786918732)));
                            var_25 = (((36 / 811913318) ? (!-1786918733) : (!10214)));
                            arr_47 [i_12] [i_6] [i_7 - 2] [1] [i_12] [i_12] = ((((((var_10 ? 1 : 1)))) || (~-1786918738)));
                        }
                    }
                    var_26 = (((!var_8) <= (min(0, 65528))));
                }
                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    var_27 = var_5;
                    var_28 = (139 < 1);
                }
                var_29 = ((var_3 & var_5) ? (~1) : (1 != 6562120915919789397));
                arr_50 [11] [14] = 1;
            }
        }
    }
    #pragma endscop
}
