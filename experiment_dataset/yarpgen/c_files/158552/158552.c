/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_11 ^= arr_0 [8];
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_12 &= (-(!-119));
                        var_13 = ((((max(var_10, (arr_7 [i_0 + 1] [i_0 + 1] [i_2] [i_1 + 2])))) ? (7461 || 124) : (min(((var_9 ? var_3 : 63)), -var_5))));
                        arr_9 [i_0] [0] [i_0] [i_3] = ((-(max(195, -12148928464727086259))));
                        arr_10 [i_0] [i_2] [i_1] [i_0] = (((~1152903912420802560) == (arr_2 [i_0] [i_0])));
                    }
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 20;i_4 += 1) /* same iter space */
    {
        arr_14 [12] = ((((var_8 ? (arr_7 [13] [i_4] [i_4] [i_4 + 1]) : 196)) % (((arr_2 [14] [i_4 - 1]) ? (arr_12 [i_4]) : (!108)))));
        arr_15 [i_4] [i_4] = (~(((arr_4 [i_4 + 1] [i_4 + 1]) ? (-2147483647 - 1) : var_6)));
        var_14 = ((((!(((var_0 ? 17348821515819394982 : 123)))))) > (arr_8 [20] [20] [i_4]));
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            {

                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {

                    for (int i_8 = 1; i_8 < 14;i_8 += 1)
                    {
                        arr_24 [i_5] [i_5] [7] = (((!var_8) ? (max(123, -2042317024)) : (!1)));
                        arr_25 [i_7] [i_7] [2] [i_7] [i_8 + 2] |= (((((var_0 ? (arr_7 [i_5 + 1] [i_5] [i_5 + 1] [i_5]) : (arr_13 [i_6])))) || (var_1 || var_3)));
                        var_15 += (arr_5 [i_5] [0]);

                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            arr_30 [i_9] [i_5] [i_5] [i_5] [i_5] = (~var_3);
                            arr_31 [i_5] [13] [i_5] [i_8 + 2] [i_9] = ((!((max(var_0, (arr_6 [i_5 + 2] [i_5 + 1] [i_5]))))));
                            arr_32 [i_5] [i_8 + 1] [i_8] [i_8] = (var_10 != var_0);
                        }
                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            arr_35 [i_10] [i_8] [i_5] [i_5] [11] [i_5] = ((~(((arr_5 [i_5] [i_5 + 1]) ? (arr_5 [i_5] [i_5 + 1]) : 234))));
                            arr_36 [i_5] [i_8 + 3] [i_7] [i_6] [i_5] = 248;
                            var_16 = (min(var_16, ((((arr_5 [i_7] [i_7]) > ((~((max(195, -48))))))))));
                        }
                    }
                    var_17 = var_8;
                    arr_37 [1] [i_5] [i_5] = (arr_29 [i_5 + 2] [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5] [2]);
                }
                var_18 = ((arr_28 [i_5] [i_5] [11] [i_6] [i_5] [i_5]) < (arr_28 [i_5] [i_5] [i_5] [i_5] [i_5] [8]));
                var_19 = (max(var_19, ((max(((max(((133 ? var_10 : -63)), 131))), (max((12387258699408883168 - 4002), (arr_21 [i_5] [i_6]))))))));
            }
        }
    }
    var_20 = var_7;
    #pragma endscop
}
