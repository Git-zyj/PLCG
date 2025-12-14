/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= var_10;
    var_19 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, ((((~(arr_2 [1] [i_0 + 1])))))));
                    var_21 = -var_11;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_22 = 94;
                                var_23 += (arr_15 [i_2 - 2] [8] [i_2 - 2] [i_2 - 2] [i_2 - 3]);
                                var_24 -= (~var_12);
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_25 = (~24007);
                        var_26 = (~255);
                        var_27 = ((~((~(arr_16 [i_0 - 2] [i_0] [i_0] [i_2 + 1] [i_2 - 3] [5])))));
                        var_28 = (max(var_28, 1602677537));
                        arr_18 [i_0] [i_0 + 1] [i_0 + 1] [i_1] [i_0] [i_1] = -113;
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                    {
                        var_29 = (~var_7);
                        var_30 += (arr_0 [i_0 - 2]);
                        var_31 += (!var_14);
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
                    {

                        for (int i_8 = 3; i_8 < 17;i_8 += 1)
                        {
                            var_32 = -24007;
                            var_33 = (!var_13);
                            var_34 = ((-(arr_26 [4] [i_2] [i_8 - 3] [i_8] [i_2] [i_8])));
                            var_35 = -64423;
                            arr_29 [i_8] [i_0] [i_0] [i_0] [i_0] = -1602677558;
                        }
                        for (int i_9 = 1; i_9 < 17;i_9 += 1)
                        {
                            var_36 -= (!1602677549);
                            arr_33 [i_0] [13] [11] [i_0] [12] [11] = (!var_3);
                            var_37 = -13459;
                        }
                        for (int i_10 = 2; i_10 < 17;i_10 += 1)
                        {
                            var_38 = (arr_26 [i_0] [i_1] [i_1] [i_2] [i_0] [i_10 + 1]);
                            var_39 += var_16;
                        }
                        for (int i_11 = 1; i_11 < 17;i_11 += 1)
                        {
                            var_40 = ((~(arr_12 [i_11 - 1] [i_2 - 1] [i_2 + 1] [i_0 - 1])));
                            var_41 = (!var_8);
                            arr_38 [i_0] [i_2 + 2] [i_0] [13] [i_11] [i_7] [i_0] = -42;
                        }
                        arr_39 [i_0] [17] [i_0] [i_2] = var_13;
                    }
                }
            }
        }
    }
    var_42 = (max(var_42, (((!(!var_4))))));
    #pragma endscop
}
