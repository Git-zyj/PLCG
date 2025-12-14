/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_9, (~0)));
    var_20 = var_15;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_21 = (((arr_0 [4] [4]) ? var_2 : (((((0 ? 1966080 : 144)) < (!0))))));
        arr_2 [i_0] &= (((193 * -30684) * (var_15 >= var_11)));
        arr_3 [i_0] = (~(~var_7));
        var_22 = (min(((((576460752303423487 > 1) > -127))), ((((max(var_10, (arr_1 [i_0])))) ? ((~(arr_1 [i_0]))) : (((~(arr_0 [i_0] [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
        {
            var_23 = var_2;
            arr_10 [1] [i_2] = ((((var_4 < (arr_9 [i_1] [i_1] [i_2])))));
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    {
                        var_24 = ((~(~1)));
                        var_25 = (var_13 ? ((min(var_2, var_6))) : ((max(((var_6 ? (arr_12 [i_1] [i_1]) : 20378)), 89))));
                        var_26 = var_3;
                    }
                }
            }
            arr_21 [i_1] = (((((-330479022 ? 3 : -11413))) ? ((((arr_13 [i_1]) && -330479022))) : 62));
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    {
                        arr_28 [2] [i_3] &= var_8;
                        arr_29 [i_1] [i_1] [5] [i_1] = (max((((arr_27 [i_6 + 2] [i_7] [i_7] [i_7] [i_7] [i_7]) / (arr_27 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_7]))), ((((arr_17 [i_6 - 1] [i_6 - 1] [i_6]) / (arr_17 [i_6 + 1] [i_7] [i_1]))))));
                        var_27 = (max(var_3, ((((min(var_9, var_13)) > (arr_15 [i_7]))))));
                        arr_30 [i_1] = var_11;
                        arr_31 [i_1] [1] [i_1] [1] [i_1] = var_4;
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        {
                            arr_41 [i_1] [10] [i_1] [i_8] = 17121550667774603171;
                            var_28 = var_5;
                        }
                    }
                }
            }
        }
        arr_42 [i_1] [3] = (min(1, 330479016));
    }
    #pragma endscop
}
