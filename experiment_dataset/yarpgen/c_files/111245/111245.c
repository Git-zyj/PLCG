/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (~var_9);

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_15 = (((!var_11) ? var_5 : (arr_4 [i_1 + 2])));
                        var_16 -= (arr_1 [i_0]);
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    {
                        var_17 = var_4;

                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            var_18 |= ((-((~((min(-221, 82)))))));
                            var_19 -= (((arr_6 [i_0] [i_0] [i_0]) > -205));
                            var_20 |= (var_11 || 18446744073709551606);
                        }
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            var_21 = (max(var_21, ((((!var_9) ? ((((arr_15 [i_0] [i_0 - 3] [i_0 + 1]) ? var_6 : (arr_16 [i_0 - 1] [i_0 - 2] [i_0 - 3])))) : (arr_17 [i_0] [i_4] [i_5] [i_6] [i_6] [1]))))));
                            var_22 = (((((arr_17 [i_0 + 1] [i_0 - 1] [i_0 - 2] [i_0 - 3] [i_0 - 1] [i_0 - 2]) ? (arr_17 [i_0 - 3] [i_0 - 3] [i_0 - 2] [i_0 - 2] [i_0 + 1] [i_0 - 2]) : (arr_17 [i_0 - 2] [i_0 - 1] [i_0 - 3] [i_0 + 1] [i_0 - 3] [i_0 - 3]))) | ((var_10 ? 1931171714 : (arr_17 [i_0 - 2] [i_0 - 2] [i_0 - 3] [i_0 + 1] [i_0 - 1] [i_0 - 1])))));
                            var_23 = ((((!((((arr_14 [i_0] [i_4] [i_5] [i_4]) ? var_4 : 249))))) ? var_9 : (5588 * 0)));
                        }
                        arr_23 [1] [1] [1] [i_6] [1] [6] = ((~(arr_2 [i_6])));
                        var_24 ^= ((((max((1741614310 || var_12), ((0 << (-111 + 129)))))) % (min(-2, (18446744073709551602 < var_7)))));
                        var_25 = max(-1558793506, 25);
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            for (int i_10 = 4; i_10 < 9;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    {
                        arr_34 [i_0] [2] [8] [i_11] [10] = (arr_20 [i_11] [i_0]);
                        var_26 = (max(var_26, (((((arr_17 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_10]) | (((arr_14 [i_0] [i_0] [6] [i_11]) % -2))))))));
                        var_27 = (max(var_27, (((-1558793523 ? ((-221 ? var_13 : 124)) : (arr_20 [i_11] [8]))))));
                    }
                }
            }
        }
    }
    var_28 = var_8;
    #pragma endscop
}
