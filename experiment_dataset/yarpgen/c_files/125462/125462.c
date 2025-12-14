/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (~-63);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        var_11 = var_4;
                        var_12 = ((((min((arr_5 [i_0 - 1] [i_0 + 1]), var_7))) * var_2));

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_13 = ((-26460 ? (min((((arr_1 [i_2] [i_0]) ? var_8 : 24216)), (((var_3 ? var_6 : 24216))))) : (((-((var_7 ? var_7 : 152)))))));
                            var_14 -= (min(((max((arr_11 [i_3] [i_3 + 1] [i_3] [i_3] [i_3 - 1] [i_3]), (arr_11 [i_3] [i_3 + 1] [7] [i_3 + 2] [i_3 + 2] [i_3])))), ((~(arr_11 [i_3] [i_3 + 2] [i_3] [i_3 + 2] [i_3 + 2] [i_3])))));
                            var_15 |= ((~(max(3384549235, (~1)))));
                        }
                        for (int i_5 = 3; i_5 < 21;i_5 += 1)
                        {
                            var_16 = ((-1 ? ((~(~var_8))) : (min((~38), ((-1 ? var_8 : (arr_15 [12] [i_1] [i_1] [i_1] [i_1])))))));
                            var_17 = var_5;
                        }
                        for (int i_6 = 2; i_6 < 20;i_6 += 1) /* same iter space */
                        {
                            var_18 *= var_1;
                            var_19 = (((-128 != 255) != var_8));
                        }
                        for (int i_7 = 2; i_7 < 20;i_7 += 1) /* same iter space */
                        {
                            var_20 = (arr_12 [i_1] [i_7]);
                            var_21 = -3705966156859563054;
                            var_22 = ((var_5 ? ((var_8 ? (arr_6 [i_0 - 1] [i_2] [i_7 + 1]) : var_1)) : 39));
                        }
                        var_23 = ((+((-(((arr_14 [i_1] [i_1] [i_2] [i_1] [i_1] [i_3]) ? var_8 : var_8))))));
                    }
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        var_24 = (max((((!((min((arr_22 [i_0] [i_1] [4] [i_1]), (arr_21 [i_1]))))))), 109));
                        var_25 = arr_10 [i_0 - 2] [i_1] [i_2] [i_2];
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            {
                                var_26 = ((-2092475112 - ((var_6 ? (((arr_11 [i_0] [i_1] [3] [i_1] [i_9] [i_10]) ? (arr_26 [i_2] [i_2]) : 67076096)) : 65526))));
                                var_27 = ((109 ^ (~-10042)));
                                var_28 = ((~((min((arr_3 [i_10] [i_10] [i_2]), 7168)))));
                                var_29 = var_8;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
