/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += var_1;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [i_0] = (((max((((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))), ((((arr_0 [1]) % -4050050375670133703))))) <= ((max((((52750 >> (-1381790707 + 1381790725)))), -4050050375670133704)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        var_15 = var_8;
                        var_16 = ((-(((arr_9 [i_3] [20] [i_3 - 1] [24]) - ((2108235691 ? var_11 : (arr_10 [22] [i_1] [i_2] [i_3 - 1] [i_3])))))));
                        var_17 = -1583403685;
                    }
                    var_18 &= ((((max((arr_9 [i_1] [1] [1] [i_0]), (arr_10 [2] [6] [i_0] [6] [i_2 - 1])))) ? (arr_2 [i_0] [i_2 - 1]) : ((((max(var_1, 1))) ? ((((arr_0 [i_0]) % -1596755170738476697))) : ((72057594037927935 >> (((arr_2 [i_1] [i_1]) - 18152506445184764253))))))));
                }
            }
        }
        var_19 = (arr_8 [4] [4] [i_0]);
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 20;i_6 += 1)
            {
                {
                    arr_21 [i_4] [i_6 + 2] = ((((((arr_18 [i_6 + 3] [i_5] [i_6 + 3]) & 1))) ^ 6364561918851669264));
                    var_20 = (arr_17 [i_4]);
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 22;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    {
                        var_21 = (max((max((arr_28 [21] [i_8 - 1] [i_4] [i_9]), (arr_28 [i_8] [i_8 - 2] [i_8] [i_8]))), (((var_6 < (arr_28 [i_9] [i_8 - 3] [i_8 - 3] [i_9]))))));
                        var_22 = ((-(arr_26 [6] [i_8] [i_9])));
                        var_23 = 0;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 3; i_10 < 22;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                {
                    arr_35 [8] [i_10 - 2] [i_4] = ((-var_3 ? ((min(var_12, -917622752))) : (max(var_1, var_2))));
                    /* LoopNest 2 */
                    for (int i_12 = 4; i_12 < 21;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 23;i_13 += 1)
                        {
                            {
                                arr_41 [i_13] [i_4] [i_12] [i_10] [i_13] = var_5;
                                var_24 ^= (((max((arr_8 [i_11] [i_12 - 1] [i_12 + 2]), (arr_16 [i_11] [i_12 - 1])))) | -4490057067833791918);
                                var_25 = var_5;
                            }
                        }
                    }
                    arr_42 [i_4] = (max(((max((arr_37 [i_4] [i_10 - 3] [i_11] [i_4] [i_10] [i_4]), (arr_9 [i_11] [i_4] [17] [i_11])))), (min(var_7, (arr_5 [i_4] [i_10 - 3])))));
                    var_26 *= arr_19 [i_11] [22] [i_10] [i_4];
                }
            }
        }
        arr_43 [i_4] = (max((~1), (((((~(arr_37 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])))) ? (arr_18 [i_4] [i_4] [i_4]) : var_5))));
    }
    #pragma endscop
}
