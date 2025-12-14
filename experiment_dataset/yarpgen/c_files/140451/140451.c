/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {

                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        var_14 = -9000760779447512521;
                        var_15 = (arr_1 [i_0]);
                    }
                    for (int i_4 = 3; i_4 < 12;i_4 += 1)
                    {
                        var_16 *= var_0;

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_17 = (((arr_0 [i_1 + 1] [i_1]) >= (62420 + 0)));
                            var_18 ^= (arr_9 [1] [i_2] [4]);
                            var_19 += ((1 ? (arr_9 [i_0 + 1] [i_1 + 1] [4]) : 160393696));
                            var_20 = (min(var_20, (arr_14 [12] [i_2] [i_4 - 1] [i_5])));
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_21 = (min(var_21, (244 & 195)));
                            arr_18 [i_0] [1] [i_2] [i_4] [i_1] = ((((arr_7 [i_0] [i_1] [i_4 - 1] [i_6]) ? 32945 : var_12)));
                            var_22 = ((-(((arr_10 [i_1] [i_2 - 1] [i_1] [i_6]) >> (((arr_8 [i_0] [i_1] [i_2]) - 59998))))));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                        {
                            var_23 |= 61;
                            var_24 = (max(var_24, ((((195 / (arr_1 [i_4])))))));
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                        {
                            arr_24 [i_0] [i_1] [i_1] [6] [1] [i_8] = (65518 + 15);
                            var_25 += (arr_8 [i_0] [i_1] [i_0]);
                            arr_25 [i_1] [i_1] [i_2] [i_4] [i_8] = (((arr_8 [i_2 + 2] [i_2 + 2] [i_2 + 1]) ^ (arr_8 [i_2 + 2] [i_2 + 2] [i_2 + 1])));
                        }
                        arr_26 [i_0] [i_1] [i_2] = (arr_11 [i_4 - 1] [i_2 + 3] [i_2 + 3] [i_0 - 1] [i_0] [i_0]);
                    }
                    var_26 = (~1);
                    arr_27 [i_1] [i_1] [i_1] = (i_1 % 2 == zero) ? ((((-6 + 2147483647) >> (((arr_5 [i_0] [i_1] [i_1] [i_1]) - 19192))))) : ((((-6 + 2147483647) >> (((((arr_5 [i_0] [i_1] [i_1] [i_1]) - 19192)) - 9750)))));
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    arr_31 [i_1] [i_1] = max((max((max((arr_4 [i_0 + 1] [i_1] [i_1] [i_1]), 189)), 61)), (max((min(18, 65518)), 30980)));
                    arr_32 [1] [1] |= (arr_0 [i_1 + 1] [i_1 + 1]);
                }
                var_27 = (arr_15 [i_0] [i_0 + 1] [i_0 + 1] [i_0] [2]);
            }
        }
    }
    var_28 = var_7;
    var_29 = ((((min((!var_0), (max(60, var_1))))) ^ ((((var_1 ^ var_13) != var_2)))));

    /* vectorizable */
    for (int i_10 = 4; i_10 < 12;i_10 += 1)
    {
        var_30 &= (arr_33 [i_10]);
        arr_37 [1] = ((-(arr_34 [i_10])));
        var_31 = (((((arr_36 [i_10]) ? (arr_35 [i_10]) : 240)) != (arr_36 [1])));
    }
    for (int i_11 = 0; i_11 < 20;i_11 += 1)
    {
        var_32 = 160393696;
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            for (int i_13 = 3; i_13 < 19;i_13 += 1)
            {
                {
                    arr_46 [i_11] [i_13] = (min(60, 1079849504));
                    arr_47 [i_13] [i_12] [i_13] = ((53165 / (min(var_2, (!0)))));
                }
            }
        }
        var_33 = max(65518, (arr_42 [i_11] [i_11] [i_11]));
    }
    var_34 = (~var_6);
    #pragma endscop
}
