/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!var_13);
    var_18 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_19 += arr_2 [i_0];
                arr_4 [i_0] [i_0] [23] = ((!(((~(arr_1 [23] [i_1]))))));
                arr_5 [i_0] = (~4009662653398982591);
                arr_6 [20] = (arr_3 [i_1 + 4] [i_1] [i_1]);
            }
        }
    }

    for (int i_2 = 4; i_2 < 10;i_2 += 1)
    {
        var_20 -= ((!((!(arr_0 [i_2] [i_2])))));
        arr_11 [i_2 - 2] = 91;
    }
    for (int i_3 = 1; i_3 < 16;i_3 += 1)
    {
        var_21 ^= ((-(arr_2 [i_3 + 1])));

        for (int i_4 = 4; i_4 < 16;i_4 += 1) /* same iter space */
        {
            var_22 ^= (arr_13 [i_3 + 1]);
            arr_16 [i_4] [i_4 - 4] = ((!(~4294967291)));
            arr_17 [i_4] [i_3] [i_4] = 5059200148083132116;
            var_23 |= ((-(arr_2 [i_3 - 1])));
        }
        for (int i_5 = 4; i_5 < 16;i_5 += 1) /* same iter space */
        {
            var_24 -= ((!(((-(arr_12 [i_5] [i_5 - 4]))))));
            arr_22 [1] [13] = ((~(arr_19 [i_3 + 2])));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 0;i_7 += 1)
                {
                    {
                        arr_30 [1] [i_3 - 1] [i_5] [1] [i_6] [i_7] = ((!(arr_24 [i_5 - 2] [i_5 + 2] [i_7 + 1])));
                        var_25 = -92;
                    }
                }
            }
            arr_31 [0] [i_5] = (arr_21 [1] [i_5 + 1]);
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 4; i_9 < 14;i_9 += 1)
            {
                {

                    for (int i_10 = 1; i_10 < 17;i_10 += 1)
                    {
                        var_26 -= 7186253332309911353;
                        arr_40 [i_10] [i_3] [i_8] [i_8] [i_3] [13] = -1807752853;
                        arr_41 [4] = (~4439502633324596585);
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        var_27 |= 157;
                        var_28 = (~6725127490867806131);
                        arr_44 [i_3] [i_8] [15] [i_11] [i_3] = (~4294967278);
                        var_29 = 4009662653398982591;
                    }
                    var_30 = (max(var_30, (+-4294967291)));
                    arr_45 [1] [5] [i_8] [i_9] = (arr_15 [i_9 - 4] [i_3 + 2] [i_9 - 4]);
                }
            }
        }
        arr_46 [i_3 + 1] = (arr_24 [i_3 - 1] [i_3] [i_3]);
        arr_47 [i_3] = arr_29 [i_3] [i_3 + 2] [i_3];
    }
    for (int i_12 = 0; i_12 < 23;i_12 += 1)
    {
        var_31 = (max(var_31, -26791));
        /* LoopNest 2 */
        for (int i_13 = 2; i_13 < 22;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 23;i_14 += 1)
            {
                {
                    arr_57 [i_13] [i_14] [i_13 + 1] = (arr_52 [i_12] [i_13 - 1]);
                    var_32 -= 35;
                }
            }
        }

        for (int i_15 = 0; i_15 < 23;i_15 += 1)
        {
            arr_61 [i_12] = (arr_50 [i_12]);
            arr_62 [i_15] [i_12] [i_12] = (!121);
            arr_63 [18] = 14007241440384955031;
        }
        for (int i_16 = 2; i_16 < 22;i_16 += 1) /* same iter space */
        {
            var_33 = (arr_50 [1]);
            arr_66 [i_12] = 99;
        }
        for (int i_17 = 2; i_17 < 22;i_17 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_18 = 3; i_18 < 21;i_18 += 1)
            {
                for (int i_19 = 2; i_19 < 20;i_19 += 1)
                {
                    for (int i_20 = 3; i_20 < 22;i_20 += 1)
                    {
                        {
                            arr_76 [i_12] [i_17] [i_20] [i_12] [i_20] = (arr_49 [i_17 + 1]);
                            arr_77 [i_18 - 3] [i_18] [i_20] [i_18] = ((~(((!(arr_0 [i_17 - 2] [i_17 - 2]))))));
                        }
                    }
                }
            }
            arr_78 [i_17] [i_12] = ((-(((!(arr_72 [i_17 + 1] [i_17 - 1] [i_17] [i_17 - 1] [i_17 - 1]))))));
        }
    }
    #pragma endscop
}
