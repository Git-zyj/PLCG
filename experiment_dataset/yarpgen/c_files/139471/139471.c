/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;
    var_14 = (max(var_14, var_1));
    var_15 = (((var_6 ? var_0 : var_2)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_11 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1] = (((arr_9 [i_0] [i_0] [i_0]) ? (arr_8 [i_0] [i_0]) : (arr_7 [i_0] [i_1] [i_1] [i_0])));
                            var_16 = (arr_4 [i_0]);
                            var_17 -= ((((((arr_4 [i_3]) ? (arr_1 [i_0]) : (((arr_1 [i_2]) ? (arr_7 [i_3] [3] [i_1] [i_0]) : (arr_4 [i_1 - 1])))))) ? (arr_5 [i_1 - 1] [i_2] [i_1 - 1]) : ((~(arr_10 [i_2 - 2] [i_1 - 1] [i_1 + 1])))));
                            arr_12 [i_3] [i_2] = (((arr_0 [i_2 + 1]) ? ((((((arr_6 [i_0] [i_0] [i_0]) ? (arr_3 [i_3]) : (arr_3 [i_3])))))) : -7608910301185090838));
                            arr_13 [i_1] = ((((((arr_6 [i_3] [i_1 - 1] [i_0]) ? (arr_6 [i_1] [i_1 + 1] [i_1 + 1]) : (arr_6 [i_1 + 1] [i_2 + 1] [i_1 + 1])))) ? ((((((-7608910301185090838 ? 1 : -7608910301185090856))) ? (arr_7 [i_1 + 1] [1] [i_1 + 1] [1]) : ((~(arr_7 [i_3] [i_2] [i_1 + 1] [i_0])))))) : (arr_9 [i_1 + 1] [i_1] [i_1 + 1])));
                        }
                    }
                }
                arr_14 [i_0] [10] = (-(arr_4 [i_1 - 1]));
                var_18 += ((((((arr_7 [i_1 + 1] [18] [i_1] [i_0]) ? (((arr_6 [i_1 + 1] [i_0] [i_0]) ? (arr_9 [i_0] [i_0] [i_0]) : (arr_8 [i_0] [i_1 - 1]))) : (arr_9 [i_1] [i_1] [i_1 - 1])))) ? (arr_5 [11] [i_1] [i_0]) : (((((arr_9 [i_0] [5] [i_1 + 1]) ? (arr_6 [i_0] [1] [2]) : (arr_9 [i_0] [i_0] [i_0])))))));

                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    var_19 = (arr_10 [i_0] [i_1 - 1] [i_4]);

                    for (int i_5 = 3; i_5 < 18;i_5 += 1)
                    {
                        var_20 = (arr_19 [i_0] [i_1 + 1] [i_4]);

                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            arr_24 [i_0] [i_1 - 1] [i_5 - 1] [i_6] = (((!((((arr_20 [i_0] [i_1] [i_4] [i_4] [i_5 + 2] [i_6]) ? (arr_17 [i_5 - 2] [19] [i_1 + 1] [i_0]) : (arr_15 [i_1])))))));
                            arr_25 [i_4] [i_5 - 2] [i_4] [i_0] = (arr_20 [i_0] [i_0] [i_0] [20] [11] [i_0]);
                        }
                    }
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        var_21 += -5408966896595793492;
                        arr_28 [i_7] = (~0);
                        var_22 = (min(var_22, (arr_5 [i_0] [i_1 - 1] [i_4])));
                        arr_29 [i_7] = (((arr_5 [i_1] [i_1 + 1] [i_1]) ? (((arr_5 [i_1] [i_1 - 1] [i_1 + 1]) ? (arr_5 [i_1 + 1] [i_1 - 1] [i_1]) : (arr_5 [i_1] [i_1 + 1] [12]))) : (((arr_5 [i_1 - 1] [i_1 - 1] [i_1 + 1]) ? (arr_5 [i_1 + 1] [i_1 - 1] [i_1 - 1]) : (arr_5 [i_1 + 1] [i_1 - 1] [i_1 - 1])))));
                    }
                }
            }
        }
    }
    var_23 += 87;
    #pragma endscop
}
