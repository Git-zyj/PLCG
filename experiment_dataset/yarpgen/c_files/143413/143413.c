/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (!var_9)));
    var_18 = (min(var_18, var_2));

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = ((max(11947, 1)));
        arr_3 [4] [14] |= (((((6144 ? 9450918683515922315 : 9450918683515922324))) || var_15));
        arr_4 [8] |= ((var_2 * (-1 ^ var_13)));

        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            var_19 |= var_1;
            arr_7 [i_0] = (max(((8995825390193629284 * (arr_0 [i_0]))), (var_16 > 4848273855213377415)));
            var_20 = (max(var_20, (arr_5 [i_1] [i_0])));
            arr_8 [i_0] = var_1;
            arr_9 [i_1] [i_1] [i_1] |= (min((((var_1 ? (arr_5 [i_0 - 3] [i_0 - 2]) : (arr_5 [i_0 + 1] [i_0 - 3])))), var_7));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
            {
                arr_15 [i_3] [i_0] [i_0] [4] = (!1);
                var_21 = var_13;
                var_22 = (min(var_22, (1839682557733605568 | 2490137404)));
            }
            for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 22;i_6 += 1)
                    {
                        {
                            var_23 = (12152686022998897022 && var_9);
                            var_24 = (min(var_24, (((6294058050710654608 ? (-32767 - 1) : var_16)))));
                            arr_24 [i_0] = (arr_6 [i_0]);
                        }
                    }
                }
                var_25 = (var_15 - var_3);
                arr_25 [i_0] = 7;
            }
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            arr_34 [i_8] [i_8] [i_8] [12] [i_8] |= 8995825390193629305;
                            var_26 |= var_1;
                        }
                        arr_35 [i_8] [i_2] |= var_16;
                        var_27 = (max(var_27, (((!(!var_6))))));
                    }
                }
            }
            var_28 = (max(var_28, var_7));
        }
    }
    for (int i_10 = 2; i_10 < 10;i_10 += 1)
    {
        arr_38 [i_10] [i_10 + 1] |= (((max(var_15, (max(1564163572719392859, -8)))) - (((arr_1 [6]) * ((var_2 ? var_10 : 18446744073709551615))))));
        var_29 |= (min(var_2, (max(var_9, -90))));
        var_30 = var_10;
    }
    for (int i_11 = 1; i_11 < 16;i_11 += 1)
    {
        arr_41 [5] [i_11] = ((35667 < (((!var_6) ? (((var_2 ? (arr_18 [2]) : -30))) : 2311654078))));
        arr_42 [17] [i_11] = (!1);
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 15;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 18;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 18;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 18;i_15 += 1)
                        {
                            {
                                arr_53 [i_13] [i_13] [i_13] [i_13] [i_12] = ((var_12 && ((min(18446744073709551609, (arr_10 [4] [i_11 - 1]))))));
                                arr_54 [i_11] [i_12] [i_11] = ((var_13 ? var_9 : 27827));
                                var_31 = (((((var_1 <= (!var_16)))) / var_10));
                            }
                        }
                    }
                    var_32 |= 14534928484554464195;
                    var_33 |= ((var_13 == (8995825390193629316 <= 12152686022998897008)));
                }
            }
        }
        arr_55 [i_11 - 1] = ((!((!(arr_6 [0])))));
    }
    #pragma endscop
}
