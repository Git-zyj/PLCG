/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_1] &= (!1828180993869872142);
                    var_14 = (max(var_14, (((var_13 ? (~24117) : 255)))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_15 += ((!(arr_9 [i_1 - 2])));
                                arr_15 [i_3] [i_3] [i_3] [i_3] [i_2] = (arr_8 [i_0] [i_0] [2]);
                            }
                        }
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            arr_19 [i_5] [i_0] = 16;
            arr_20 [i_0] [i_0 + 4] [i_0] = (arr_4 [i_0] [i_0 + 4]);
            arr_21 [i_0] |= (41418 > 1);
            var_16 = -41420;
            arr_22 [2] [i_5] [i_5] = (2480263956 <= 216301958);
        }
        for (int i_6 = 2; i_6 < 22;i_6 += 1)
        {
            var_17 *= (!1814703329);

            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                var_18 = (max(var_18, ((((arr_9 [i_0 + 4]) < (arr_1 [i_0]))))));
                arr_27 [i_6] [i_6 - 2] [22] [17] = (arr_13 [i_7] [i_7] [6] [i_0] [6] [i_0 + 1]);
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        {
                            var_19 = (~24117);
                            arr_32 [24] [i_6] [i_7] [i_6] [i_9] [i_0] [1] = ((~(arr_23 [i_6 + 2] [i_0])));
                            var_20 = ((arr_5 [i_0 + 3] [i_6 + 3] [i_6 + 1]) ? (arr_5 [i_0 + 4] [i_6] [i_6 - 2]) : (arr_5 [i_0 - 2] [i_6] [i_6 + 1]));
                        }
                    }
                }
                var_21 |= -69;
                var_22 -= (1814703329 - 24139);
            }
            arr_33 [i_0] [i_0] [i_0] = var_0;
        }
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            var_23 += (((arr_2 [i_0 - 2]) ? 24117 : var_9));
            var_24 = (~-114);
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 25;i_12 += 1)
                {
                    {
                        arr_41 [i_12] [i_10] = (((((-(arr_4 [17] [17])))) / (~15311111718151976847)));
                        var_25 = (max(var_25, -1275705734));
                    }
                }
            }
            arr_42 [i_10] [i_0] |= ((1814703340 ^ (((((arr_29 [i_0] [i_0] [i_10] [i_10]) != (arr_5 [i_0] [i_10] [i_10])))))));
        }
        var_26 = (((arr_29 [i_0 + 3] [i_0] [i_0 - 2] [i_0]) ? (arr_29 [i_0 - 1] [i_0] [i_0 - 2] [i_0 - 2]) : (arr_29 [i_0 - 2] [i_0] [i_0 + 2] [i_0])));
        var_27 = (min(var_27, ((((arr_4 [i_0 + 1] [i_0 + 3]) - 0)))));
        arr_43 [17] [i_0] = (((arr_13 [i_0 + 3] [i_0] [i_0 + 4] [i_0] [i_0 + 1] [i_0]) % (arr_17 [i_0 - 1])));
    }
    var_28 = var_12;
    #pragma endscop
}
