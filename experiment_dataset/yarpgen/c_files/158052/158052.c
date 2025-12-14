/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 14043;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, -115));
                                var_21 &= (~51493);
                            }
                        }
                    }
                    var_22 -= (!var_11);
                }
            }
        }
        var_23 = (max(var_23, ((((var_9 ? (arr_2 [i_0] [i_0]) : 14043))))));
        var_24 = ((-27524 == (max((((var_12 >> (-27524 + 27539)))), (arr_8 [i_0] [4] [1] [i_0])))));
        arr_12 [5] = (arr_10 [i_0] [i_0] [i_0]);
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        var_25 ^= ((1459998745 < (((~(arr_15 [i_5] [i_5]))))));
        var_26 = (min(58799, var_1));
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_27 = ((~(~3)));
                    var_28 |= (~var_18);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 18;i_9 += 1)
                        {
                            {
                                var_29 = (max(var_29, var_14));
                                var_30 = (~var_18);
                                var_31 = (max(var_31, 58813));
                                var_32 += ((-(!23)));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 13;i_10 += 1)
    {
        var_33 = (max(var_33, ((((~58799) ? (((4030092020 ? -25903 : 255))) : ((-23 ? 4 : (arr_23 [0] [8] [i_10] [i_10]))))))));
        var_34 = -32751;
        var_35 = ((~(!25886)));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                {
                    var_36 = (!1339006862);
                    var_37 = (min(((((arr_14 [i_10] [i_10]) ? 40657 : (arr_14 [i_10] [i_10])))), 4151748030));
                }
            }
        }
    }
    for (int i_13 = 3; i_13 < 10;i_13 += 1)
    {
        var_38 ^= (37 % var_14);
        arr_41 [i_13] = ((-((min(var_4, 35522)))));
        var_39 ^= 21040;
        arr_42 [1] = ((~(1 ^ 44480)));
    }
    var_40 = var_2;
    var_41 = var_0;
    #pragma endscop
}
