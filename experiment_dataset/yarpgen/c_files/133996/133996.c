/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_14 = 2048;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_15 = (max(var_15, (((max((arr_5 [i_0] [i_0] [1]), (arr_3 [i_0] [i_0 - 4] [i_0]))) >> (var_9 + 10)))));
                            var_16 = ((2048 ? 2048 : -2049));
                            var_17 = arr_5 [20] [i_0] [i_2 + 2];
                        }
                    }
                }
                var_18 = (max(var_18, (arr_6 [i_0] [i_1] [i_1] [i_0 + 1])));

                for (int i_4 = 1; i_4 < 21;i_4 += 1)
                {
                    var_19 = (arr_1 [i_1] [i_4 + 1]);
                    arr_12 [i_1] [i_0] = (arr_2 [14] [i_4 - 1] [i_4 + 1]);
                    arr_13 [1] [i_1] = (arr_6 [i_1] [i_1] [i_1] [i_1]);
                    arr_14 [i_0 + 1] [i_0 - 1] [i_0] [i_0] = (max((arr_9 [i_4 - 1] [i_0 - 4] [9] [i_1]), ((max((arr_5 [i_4 + 1] [i_0 - 1] [i_4]), (arr_5 [i_4 - 1] [i_0 + 1] [i_4]))))));
                }
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                arr_24 [i_5] [10] [i_5] [i_6] [i_7] = -2042;
                                arr_25 [i_0] [i_1] [i_5] [i_6] [i_1] [i_5] [i_7] = (arr_21 [i_0 - 1] [i_0 - 2] [i_0 - 2]);
                            }
                        }
                    }
                    var_20 = (i_5 % 2 == zero) ? ((((((-2049 != (arr_23 [i_0 - 4] [i_0 - 3] [i_1] [i_5] [i_5])))) << (((max((arr_19 [i_5] [i_1] [i_0]), (arr_23 [i_5] [i_5] [i_0] [i_1] [i_5]))) - 3039265801229355631))))) : ((((((-2049 != (arr_23 [i_0 - 4] [i_0 - 3] [i_1] [i_5] [i_5])))) << (((((max((arr_19 [i_5] [i_1] [i_0]), (arr_23 [i_5] [i_5] [i_0] [i_1] [i_5]))) - 3039265801229355631)) - 4016697381724264070)))));
                }
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    var_21 = (max(var_21, 2059));
                    var_22 = (min(var_22, ((((((var_11 >> (((arr_11 [i_0 - 2] [i_0 - 2] [i_0 - 3]) - 6986))))) ? (max(var_2, 2040)) : ((((arr_11 [i_0 - 4] [i_0 - 1] [i_0 - 3]) ? 2042 : (arr_11 [i_0] [i_0 - 1] [i_0 - 2])))))))));
                }
            }
        }
    }
    var_23 |= (min(((var_5 ? (var_4 * var_0) : (~-2048))), ((((-2043 ? var_3 : var_7))))));
    #pragma endscop
}
