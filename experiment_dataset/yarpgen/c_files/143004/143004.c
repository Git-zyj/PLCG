/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_10 = 2903508589793019358;
        var_11 *= (((((arr_0 [i_0]) - (arr_1 [i_0] [i_0]))) - ((((arr_1 [i_0] [i_0]) ^ (arr_1 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_12 = max((((!(((-(arr_2 [24] [i_1]))))))), (arr_2 [2] [2]));

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_13 = (((((-((3057600725 ? (arr_6 [i_1] [i_1]) : var_9))))) ? (((~(arr_5 [i_1] [i_2])))) : (min(6456650129204656677, 1237366571))));

            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            var_14 = (((((arr_8 [i_4] [i_1] [i_1] [i_4]) | var_6)) < (((((arr_8 [i_4] [i_1] [i_1] [i_3]) || (arr_8 [i_5] [i_1] [i_1] [i_4])))))));
                            var_15 = (max(var_15, (((((((arr_4 [i_3]) ? (arr_4 [i_3]) : 2903508589793019358))) ? (arr_4 [i_2]) : (((var_8 * (arr_4 [i_3])))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 23;i_7 += 1)
                    {
                        {
                            var_16 |= (((arr_2 [i_2] [i_7 + 1]) ? (~16384) : (arr_12 [24] [16])));
                            var_17 = (max(((-68 ? 626733563 : (arr_4 [i_1]))), (!127)));
                            var_18 = ((var_4 - ((var_3 ? 10 : (arr_17 [i_2] [i_2] [14] [i_1] [23])))));
                            var_19 -= (arr_9 [i_3] [i_3] [i_2]);
                            arr_21 [13] [i_2] [i_1] [i_6] [i_1] = (max(((var_2 ? ((2903508589793019383 ? 56 : var_8)) : (~var_2))), (arr_20 [i_7 - 1] [2] [i_7 - 1] [1] [i_1])));
                        }
                    }
                }
                arr_22 [i_1] [i_3] = (((((2903508589793019358 ? 31 : 2183))) ? (arr_7 [i_3]) : ((var_4 ? (arr_7 [i_3]) : (arr_7 [i_3])))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        {
                            arr_28 [i_1] [i_1] [i_3] = 26;
                            var_20 = (max(var_20, ((((arr_15 [i_1] [i_1] [20] [i_1] [i_1] [i_8]) - (((((var_5 ? 0 : 1778007781))) ? (((~(arr_3 [i_2])))) : 1485812134276566760)))))));
                        }
                    }
                }
                var_21 = ((max(var_2, (arr_8 [i_3] [i_1] [i_1] [i_1]))));
            }
            /* vectorizable */
            for (int i_10 = 1; i_10 < 24;i_10 += 1)
            {
                arr_31 [i_1] [i_1] [i_1] = ((!(arr_4 [i_1])));
                var_22 = (min(var_22, var_8));
            }
        }
    }
    var_23 = (((~var_5) ? var_7 : ((min((~var_3), (~8576296465340220917))))));
    var_24 = (16 >> 1);
    #pragma endscop
}
