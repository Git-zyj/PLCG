/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_19 = ((((((((arr_11 [i_0] [i_0] [1] [1] [0] [i_0]) ? (arr_11 [i_0] [i_0] [i_0] [i_2 + 1] [i_3] [i_3]) : (arr_11 [i_3] [i_2 - 1] [i_1] [i_1 - 2] [i_0] [i_0])))) ? 4197458650194009247 : var_12))) ? (((((!(arr_9 [i_0] [i_1] [i_2] [4] [i_0] [i_1]))) ? var_1 : (arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 2] [9] [2])))) : (arr_0 [i_1]));
                            arr_12 [i_0] [i_1] [i_3] [i_3] = (arr_4 [i_0]);
                            var_20 -= (min((max((arr_1 [i_1] [i_0]), 4197458650194009276)), 14249285423515542368));
                            var_21 *= ((~((max(201, (max(-15924, var_17)))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_22 = 129;
                            var_23 = (min(0, var_7));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 18;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            {
                                var_24 = (((arr_21 [i_7 - 2]) << (!201)));
                                var_25 = (+-201);
                            }
                        }
                    }
                    var_26 = (arr_29 [i_7 - 1] [i_7] [6]);
                }
            }
        }
    }
    var_27 = ((-(((!var_6) ? -var_2 : var_14))));

    for (int i_11 = 0; i_11 < 13;i_11 += 1)
    {
        var_28 = -8903;
        var_29 = ((-(min((arr_29 [i_11] [i_11] [i_11]), (arr_29 [i_11] [i_11] [i_11])))));
    }
    for (int i_12 = 0; i_12 < 22;i_12 += 1)
    {
        var_30 = (arr_35 [i_12]);
        arr_36 [i_12] = (arr_34 [i_12] [4]);
        var_31 &= (min(13289216457011839489, (2 / 8528698814497011553)));
        arr_37 [i_12] = (max(2, (arr_35 [i_12])));
    }
    var_32 = (((((-1 & (max(162, var_9))))) ? 31945 : var_11));
    #pragma endscop
}
