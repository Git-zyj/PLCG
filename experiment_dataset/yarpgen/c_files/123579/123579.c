/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (~0);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_15 = (max(var_15, ((((((var_11 / (arr_3 [16] [i_1])))) * 2474572726)))));
                        arr_13 [i_0] [i_3] = 12366;
                        arr_14 [22] [21] [i_2] [i_3] [i_2] = 1;
                        var_16 = (min(var_16, (((83 <= (~-78))))));
                        arr_15 [17] [15] [i_3] = (5 || 10);
                    }
                }
            }
        }
        var_17 = (max(var_17, 12361));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    var_18 = (max(25166, 198));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_19 = (min(var_19, (((max(var_10, (-107 / 118)))))));
                                var_20 = (max(var_20, ((max(((((max(13025, -12376))) ? (1 - 52487) : 251)), -252)))));
                                var_21 = (min(var_21, -28865));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            {
                                arr_30 [i_4] [i_8] [i_5] [i_5] [13] [i_4] = -1820394562;
                                arr_31 [i_4] [i_4] [7] [i_5] [i_8] [i_9] [16] = (~1);
                            }
                        }
                    }
                    var_22 ^= ((12371 ? (1 / 1) : (~-89)));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                {
                    var_23 = (max(var_23, 25));
                    var_24 = (min(var_24, ((min(75, 124)))));
                    var_25 += var_11;
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 24;i_12 += 1)
    {
        arr_38 [9] |= (max(237, -65));
        var_26 = (min(var_26, (((2474572726 ? -75 : -31652)))));
        arr_39 [i_12] = var_1;
    }
    for (int i_13 = 0; i_13 < 22;i_13 += 1)
    {

        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 22;i_17 += 1)
                    {
                        {
                            var_27 ^= ((52508 ? 2919267402 : 9212244740326457194));
                            arr_53 [i_14] [i_14] [i_15] = (3037325062 & 71);
                        }
                    }
                }
            }
            var_28 = (arr_49 [i_14] [i_14] [i_14] [i_14]);
            arr_54 [i_14] [i_14] = (arr_49 [i_14] [i_13] [i_14] [1]);
            var_29 = 1050213178;
        }
        var_30 = (52498 ^ 1);
        var_31 = (0 <= 110);
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 1;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 1;i_19 += 1)
            {
                {
                    var_32 = (max(var_32, ((max(-28938, (~13024))))));
                    arr_61 [i_18] [i_18] [i_19] = (arr_32 [i_13]);
                }
            }
        }
    }
    for (int i_20 = 0; i_20 < 21;i_20 += 1)
    {
        /* LoopNest 2 */
        for (int i_21 = 0; i_21 < 21;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 1;i_22 += 1)
            {
                {
                    var_33 -= 13037;
                    var_34 = (2 * 14430);
                    var_35 = (min(76, ((124 ? (arr_10 [i_20] [i_21] [i_20] [i_22] [1] [i_22]) : 0))));
                }
            }
        }
        var_36 = (arr_62 [i_20] [i_20]);
        arr_71 [i_20] = (arr_66 [i_20] [i_20]);

        for (int i_23 = 0; i_23 < 21;i_23 += 1)
        {
            arr_74 [i_20] [2] &= 2233554671;
            arr_75 [10] [i_20] [1] = 2093936906;
            /* LoopNest 2 */
            for (int i_24 = 4; i_24 < 20;i_24 += 1)
            {
                for (int i_25 = 1; i_25 < 18;i_25 += 1)
                {
                    {
                        var_37 = (max(var_37, (123 <= 18)));
                        var_38 -= var_2;
                    }
                }
            }
            arr_80 [i_20] [i_20] [i_20] = 57;
        }
        /* vectorizable */
        for (int i_26 = 0; i_26 < 0;i_26 += 1)
        {
            arr_83 [i_26] = (!1);
            var_39 -= (!26);
            var_40 = (min(var_40, (~59)));
        }
        for (int i_27 = 0; i_27 < 1;i_27 += 1)
        {
            var_41 = (max(20, 0));
            var_42 = -28939;
        }
    }
    /* LoopNest 2 */
    for (int i_28 = 0; i_28 < 14;i_28 += 1)
    {
        for (int i_29 = 0; i_29 < 14;i_29 += 1)
        {
            {
                var_43 = (-29031 ? 2093936904 : 470508025);

                for (int i_30 = 2; i_30 < 12;i_30 += 1)
                {
                    arr_93 [i_30] [i_29] [i_28] = ((-5 ? 1 : ((28935 ? (1 << 1) : ((max(3606, var_11)))))));
                    var_44 = var_9;
                }
            }
        }
    }
    #pragma endscop
}
