/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_0] [i_2] [i_0] [i_0 - 1] = (((((18842 ? 5 : (arr_0 [i_0 - 1])))) ? (min(-85, 1876267273)) : (arr_0 [i_0 - 3])));
                                arr_15 [i_0] [7] [i_2] [i_0] [i_4] = 17179869183;
                            }
                        }
                    }
                    var_14 = ((-(min(((((arr_1 [i_1]) ^ (arr_2 [i_0])))), 18446744056529682432))));

                    for (int i_5 = 1; i_5 < 18;i_5 += 1) /* same iter space */
                    {
                        var_15 = ((-(((~18842) * var_10))));
                        arr_18 [i_5] [i_0] [i_2] [i_0] [i_0] = (((((-(arr_5 [i_0])) | (arr_9 [i_0] [i_2] [i_5])))));
                    }
                    for (int i_6 = 1; i_6 < 18;i_6 += 1) /* same iter space */
                    {
                        var_16 = (min(var_16, ((((-3230627411768896912 ? -1 : var_12))))));
                        arr_23 [i_1] [i_2] [i_0] = (min(var_1, var_6));
                    }
                    for (int i_7 = 1; i_7 < 18;i_7 += 1) /* same iter space */
                    {
                        var_17 = ((60092 ? ((((!(((1 ? -3230627411768896913 : 43130))))))) : (~3230627411768896882)));
                        arr_27 [i_0] = ((-(((!((min(0, -30))))))));
                        var_18 = ((-(max(-3230627411768896909, var_2))));
                    }
                    var_19 += (min(3230627411768896902, (~1)));
                    arr_28 [i_0] [i_0] [i_1] [i_2] |= (min((min(var_12, -1)), 0));
                }
            }
        }
        arr_29 [i_0] = 4294967295;
        var_20 = 15762148689282441413;
    }
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        arr_33 [i_8] = 255;
        var_21 |= (((max((arr_31 [i_8]), ((max(4294967295, 255))))) ^ ((((!(arr_5 [i_8])))))));
        arr_34 [i_8] = (min(1, 15));
    }
    var_22 = -1520206012;
    #pragma endscop
}
