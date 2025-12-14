/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        var_17 += (arr_1 [i_0 + 1]);
        arr_2 [i_0] = arr_0 [i_0];
        var_18 = ((((min((arr_0 [i_0]), 167))) + (14633126740322573777 < 182)));
        arr_3 [i_0 - 3] = (min(64, 4092));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_7 [i_1] = (arr_6 [i_1]);
        arr_8 [i_1] = ((-(max(var_3, (((-(arr_5 [i_1]))))))));
        var_19 = (max(var_19, ((max(((70 & (((arr_6 [4]) << (84 - 73))))), ((((min((arr_5 [i_1]), 245))) ? ((max((-32767 - 1), -16201))) : 73)))))));
    }
    for (int i_2 = 2; i_2 < 11;i_2 += 1)
    {
        arr_11 [i_2] = (min((((arr_4 [i_2]) ? 10 : 16646144)), (arr_4 [i_2])));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    {

                        for (int i_6 = 2; i_6 < 12;i_6 += 1)
                        {
                            var_20 = (max(var_20, ((min((arr_6 [i_4]), 65535)))));
                            arr_25 [i_2] [i_6 - 1] = 477740634;
                        }
                        var_21 = (((((-64 | (arr_18 [i_5] [i_3] [i_3] [i_2])) / (arr_20 [i_5] [i_5] [i_4] [i_5])))));
                        arr_26 [i_2] [i_3] [i_3] [i_2] [i_4] [i_5] = (((+((((arr_13 [i_2] [i_4] [i_2]) < -492590911))))) * var_15);

                        for (int i_7 = 1; i_7 < 9;i_7 += 1)
                        {
                            arr_29 [i_2 + 2] [i_2 + 2] [i_2] [i_2 + 2] = var_2;
                            var_22 = -1202550573;
                            arr_30 [i_2] [i_2] [i_4] [i_2] = (min(((32753 << (85 - 83))), (arr_21 [i_7 + 1] [i_7 + 1] [i_7] [i_7] [i_7] [i_7 + 1])));
                        }

                        for (int i_8 = 2; i_8 < 11;i_8 += 1)
                        {
                            arr_33 [i_2 + 1] [i_8] [i_2 + 1] [i_5] [i_2] [i_2 + 1] [i_3] = (min((-2147483647 - 1), (-32767 - 1)));
                            arr_34 [i_2] [i_2] [i_5] [i_2] [i_2] = (!(-2147483647 - 1));
                        }
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            var_23 = var_5;
                            arr_37 [i_2] [i_2] [i_4] = (-103 <= 0);
                        }
                        for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
                        {
                            arr_40 [i_3] [i_4] [i_3] |= (!533536938036363333);
                            arr_41 [i_2] [i_3] [i_4] [i_3] [i_5] [i_10] = 2147483647;
                            arr_42 [i_3] [i_2] [i_3] = var_8;
                            var_24 &= (!(arr_24 [i_2] [i_3] [i_4] [i_4] [i_2] [i_3] [i_3]));
                        }
                        for (int i_11 = 0; i_11 < 13;i_11 += 1) /* same iter space */
                        {
                            arr_46 [i_2] [i_2] [i_2] [i_5] [i_11] = 4294967295;
                            var_25 = (max(var_25, ((((4095 != 66846720) ? 255 : (((arr_13 [i_11] [i_3] [i_4]) ? 1 : 3675515605125868713)))))));
                            var_26 = (min(var_26, ((((((2566720448 ? 0 : (arr_9 [i_4])))) * (min((min(var_8, 0)), -var_15)))))));
                            var_27 = (max(var_27, ((((244 ^ 13450) > (((min(43, -1)))))))));
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_12 = 1; i_12 < 1;i_12 += 1)
        {
            for (int i_13 = 3; i_13 < 10;i_13 += 1)
            {
                for (int i_14 = 2; i_14 < 9;i_14 += 1)
                {
                    {
                        var_28 ^= ((-(min(var_5, 105))));
                        var_29 -= 7;
                        arr_54 [i_2] [i_12 - 1] [i_13] [i_13] [i_2] [i_2] = ((min(var_16, ((1728246848 ? var_2 : (arr_9 [i_2 + 1]))))));
                        arr_55 [1] [i_12] [i_13] [i_13] |= (((181 ^ (arr_32 [i_2] [i_12 - 1] [i_14 - 2] [i_14 + 2] [i_13] [i_13] [0]))));
                        arr_56 [i_2] [i_2] [i_13 - 1] [i_14] = (min(var_7, (arr_14 [i_2] [i_2])));
                    }
                }
            }
        }
        arr_57 [i_2] [i_2] = var_5;
    }
    var_30 = var_13;
    var_31 += (!368523960);
    var_32 = (min(0, 209));
    var_33 = var_13;
    #pragma endscop
}
