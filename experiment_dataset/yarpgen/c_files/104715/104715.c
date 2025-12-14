/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((((-(229 % var_11)))), var_15));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            arr_8 [i_0] [i_0] [i_0] = ((!(arr_1 [i_1])));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_18 = ((((((arr_2 [i_1]) ? ((-(arr_10 [i_1] [i_1]))) : -0))) ^ -7845975003365357937));
                        var_19 ^= (((arr_14 [i_1 + 2] [i_1] [i_1] [i_1 - 1] [i_1] [i_1 - 3]) ? (((arr_14 [i_1 - 2] [i_1 - 3] [i_1] [i_1] [i_1] [i_1 - 4]) ^ var_2)) : ((((!(arr_14 [i_1 - 1] [i_1] [i_2] [i_1 - 1] [i_1] [i_1 - 3])))))));
                        var_20 = var_15;
                        var_21 = (arr_2 [i_0]);
                    }
                }
            }
            var_22 = (arr_11 [i_0]);
            arr_15 [i_0] [i_0] = (arr_3 [i_0]);
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            var_23 = (max(var_23, (arr_6 [i_0] [i_0] [i_4])));
            var_24 = (max(var_24, (((((var_9 != (arr_13 [i_0] [i_0] [i_0] [10]))) ? var_14 : (arr_17 [i_0] [10]))))));
            var_25 = (max(var_25, (((((var_5 != (arr_18 [i_0] [i_4] [1]))) ? (((var_5 ? (arr_18 [i_0] [i_4] [i_4]) : (arr_18 [i_0] [i_4] [i_4])))) : (((arr_18 [8] [i_4] [i_4]) ? var_6 : var_10)))))));
            var_26 = ((var_10 / ((((arr_16 [i_0] [i_4]) ? ((27 ? var_4 : 3)) : (((!(arr_2 [i_0])))))))));
            arr_19 [i_0] [i_0] = ((7845975003365357937 ? (arr_2 [i_0]) : (arr_0 [i_0])));
        }
        for (int i_5 = 3; i_5 < 8;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 9;i_7 += 1)
                {
                    {
                        var_27 &= ((var_8 ? -9 : var_16));
                        arr_27 [i_6] &= (arr_12 [i_0] [i_0] [i_6] [i_7]);
                        var_28 = ((-(((((var_12 ? var_2 : 12813292996002804921))) ? var_5 : var_3))));
                    }
                }
            }
            var_29 = (min((((var_7 ^ var_12) ? ((10600769070344193678 ? 1 : var_16)) : 3)), (((((!(arr_23 [i_0]))) && var_4)))));
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 4; i_9 < 7;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 10;i_11 += 1)
                    {
                        {
                            var_30 = (((!var_6) % var_13));
                            var_31 = (max(var_31, (arr_0 [i_9])));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_12 = 1; i_12 < 9;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 10;i_13 += 1)
                {
                    {
                        var_32 = (max(var_32, (((~((((!(arr_21 [4] [i_8]))) ? (min(var_12, var_1)) : (min(var_14, 255)))))))));
                        var_33 = (min((((-(var_7 == 1)))), ((+(((arr_3 [i_0]) ? 0 : (arr_6 [i_0] [i_0] [i_13])))))));
                        arr_44 [i_0] [i_0] = (((((arr_0 [i_12 - 1]) % ((((arr_7 [i_0]) ? var_4 : (arr_39 [i_0] [i_0] [i_0] [i_0])))))) >= (((((2251799813684224 ? -1541627585240117284 : 3153543739477298598)) % (1665145967037513955 ^ var_12))))));
                        var_34 = (max(var_34, 1665145967037513955));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 11;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 11;i_15 += 1)
            {
                {
                    var_35 = (arr_41 [i_0] [1] [i_0]);
                    arr_49 [i_0] = var_9;
                }
            }
        }
    }
    #pragma endscop
}
