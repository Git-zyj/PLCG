/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_16 = var_0;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_10 [i_2] [i_1] [i_1] = (((((-1423095194 ? -16795 : 1177609728))) ? ((-(max(var_1, -1423095190)))) : ((-67108864 ? (((var_2 ? -1423095182 : 1423095198))) : ((var_10 ? var_3 : var_1))))));
                        var_17 -= var_14;
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    {
                        arr_21 [i_6] [i_6] [i_4] [i_6] = ((var_12 == ((var_4 ? (max(682270799, var_7)) : 1423095209))));

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            var_18 = (!1423095194);
                            var_19 = 1483717486;
                            arr_24 [i_4] [i_5] [i_5] [i_6] [i_4] = (~(~-101318691));
                            var_20 = var_12;
                            var_21 = (~var_2);
                        }
                        var_22 = -var_3;
                        arr_25 [i_4] [i_6] [i_6] [i_4] = (max(-1, 4294967295));
                    }
                }
            }
        }

        for (int i_9 = 2; i_9 < 15;i_9 += 1) /* same iter space */
        {
            var_23 = (((((((var_6 ? var_10 : var_6))) ? (-1423095182 != 1177609753) : (!22894)))) ? ((((max(var_13, -1252581299))) ? (((208346514 ? 1177609708 : var_4))) : (max(10870351121120038288, 25348)))) : (((((max(var_14, 4107425758))) ? (var_0 && var_1) : var_7))));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {
                    {
                        var_24 *= 25348;
                        var_25 -= var_14;

                        for (int i_12 = 0; i_12 < 16;i_12 += 1)
                        {
                            arr_36 [i_12] [i_12] [i_11] [i_10] [i_9 + 1] [i_9 - 2] [i_4] = (~((var_10 ? var_4 : var_1)));
                            arr_37 [i_4] [i_9 - 2] [i_4] [i_11] [3] = ((var_7 ? ((max(57, (max(var_14, var_3))))) : (max((max(var_15, var_6)), (((var_12 ? 32767 : var_8)))))));
                            arr_38 [6] [i_9 - 1] [i_9 + 1] [i_9 - 1] [i_9 + 1] = (((((var_14 ? var_14 : 6437))) ? -22877 : ((var_10 ? var_0 : var_11))));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_13 = 2; i_13 < 15;i_13 += 1) /* same iter space */
        {
            var_26 = 4107425786;
            var_27 = ((-1177609752 ? ((15925211754209050734 ? 1547196469994346228 : 22)) : 528482304));

            for (int i_14 = 0; i_14 < 16;i_14 += 1)
            {
                var_28 = (var_15 ? var_6 : var_8);
                arr_44 [0] [0] [i_14] = var_1;
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 16;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 16;i_16 += 1)
                    {
                        {
                            var_29 += (var_4 ? var_0 : 187541532);
                            arr_49 [i_4] [i_4] [i_14] [i_14] [i_16] = var_11;
                        }
                    }
                }
                var_30 = var_9;
            }

            for (int i_17 = 0; i_17 < 16;i_17 += 1)
            {
                arr_52 [i_17] = (((var_15 ? 4294967295 : var_12)));
                arr_53 [i_4] [8] [i_4] [i_4] = (!32505856);
            }
            for (int i_18 = 0; i_18 < 16;i_18 += 1)
            {
                var_31 = (var_15 ? var_5 : var_13);
                var_32 = var_6;
                var_33 = ((-((3 ? 2484348185 : 32760))));
            }
        }
    }
    var_34 = var_11;
    #pragma endscop
}
