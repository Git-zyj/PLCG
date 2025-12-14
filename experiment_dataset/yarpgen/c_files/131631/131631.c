/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_11 = var_5;
        var_12 = (402653184 <= 12580510105075428051);
        arr_3 [i_0] [i_0] = (((~(arr_1 [i_0] [i_0]))));

        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            arr_7 [i_0] = (((((arr_6 [i_0] [i_1 + 2]) - 47459)) == ((((((arr_5 [i_0] [i_0]) << (((arr_2 [i_0]) - 59652))))) ? (~var_6) : var_5))));
            arr_8 [i_0] [i_0] [i_0] = ((((min(12580510105075428037, (arr_2 [i_1 - 2])))) ? (arr_2 [i_1 - 2]) : (arr_2 [i_1 - 1])));
            var_13 = ((!(arr_1 [i_1 - 1] [i_1 + 1])));
            arr_9 [i_1] = arr_0 [i_1 + 2];
        }
        var_14 = (((~(~402653181))));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_15 = (+((min((arr_4 [i_2] [i_2] [i_2]), (arr_4 [i_2] [i_2] [i_2])))));
        var_16 = (-(arr_1 [i_2] [i_2]));
        var_17 = ((!((max(67, 69)))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
    {
        var_18 = (((arr_2 [i_3]) >> (((arr_2 [i_3]) - 59657))));
        arr_17 [i_3] = (((arr_13 [i_3] [i_3]) ? (arr_13 [i_3] [i_3]) : (arr_13 [i_3] [i_3])));

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {

            for (int i_5 = 2; i_5 < 9;i_5 += 1)
            {
                var_19 = (arr_2 [i_3]);
                var_20 = (12580510105075428045 + var_5);
                var_21 = ((1007411441 ? var_0 : (((arr_21 [i_3] [i_3] [i_5] [i_3]) ? (arr_11 [i_5]) : 24410))));
            }
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 9;i_8 += 1)
                    {
                        {
                            var_22 = (((arr_6 [i_3] [i_4]) ? ((var_9 ? (arr_2 [i_3]) : (arr_30 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))) : (arr_12 [i_8 - 1])));
                            var_23 = ((-3228679201174507268 ? 1877943572 : 1457809988));
                        }
                    }
                }
                arr_31 [i_3] [i_4] [i_6] [i_4] = (((arr_25 [i_3] [i_4] [i_6] [i_6]) == (arr_0 [i_3])));
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 7;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        {
                            arr_37 [i_3] [i_3] = ((var_6 - (arr_22 [i_3] [i_3] [i_3] [i_3])));
                            var_24 = ((59605 ? (arr_24 [i_3] [i_9] [i_6] [i_6]) : (arr_30 [i_3] [i_9] [i_9] [i_9] [i_9] [i_3])));
                        }
                    }
                }
            }
            for (int i_11 = 1; i_11 < 9;i_11 += 1)
            {
                var_25 = (1313332207 / 5912);
                var_26 = (((arr_24 [i_3] [i_4] [i_3] [i_11 - 1]) / (~var_1)));
            }
            arr_40 [i_3] [i_3] [i_3] = ((59596 + (arr_28 [i_3] [i_4] [i_3])));
        }
        for (int i_12 = 1; i_12 < 9;i_12 += 1)
        {
            var_27 = (!(arr_6 [i_3] [i_3]));
            var_28 = (((arr_14 [i_12 - 1] [i_12]) ? (((!(arr_15 [i_3])))) : -1290152573));
            arr_45 [i_3] = ((205 - (arr_13 [i_3] [i_12 - 1])));

            for (int i_13 = 3; i_13 < 8;i_13 += 1)
            {
                arr_48 [i_3] [i_3] [i_3] = (((arr_28 [i_12 + 1] [i_12 - 1] [i_13 - 1]) * (arr_28 [i_12 - 1] [i_12 + 1] [i_13 + 1])));
                var_29 = 1007411441;
            }
            for (int i_14 = 1; i_14 < 7;i_14 += 1)
            {
                var_30 = (arr_11 [i_12 + 1]);
                arr_52 [i_3] [i_3] = (arr_41 [i_3]);
            }
        }
        arr_53 [i_3] = (((arr_23 [i_3] [i_3] [i_3] [i_3]) ? (arr_2 [i_3]) : (arr_23 [i_3] [i_3] [i_3] [i_3])));

        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            var_31 = var_3;
            var_32 = (arr_15 [i_3]);
            arr_56 [i_15] [i_15] [i_3] = 5941;
        }
    }
    #pragma endscop
}
