/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_11 = (arr_1 [i_0]);
        arr_3 [i_0] = arr_2 [i_0];
        arr_4 [i_0] [i_0] = ((~(((28 || (arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_12 [i_0] [i_1] [i_1] = 15;
                    arr_13 [i_1] [i_1] = 1;

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_18 [i_1] [i_1] [i_1] [i_3] [i_3] = (min(((18289498389823722035 ? (arr_17 [i_0] [i_1 + 1] [i_2] [i_3] [i_0] [i_2]) : (arr_5 [i_3] [i_1 - 1] [i_1 - 1]))), -0));
                        var_12 = ((-(max(((-(arr_1 [i_3]))), (arr_11 [i_0] [i_1])))));
                        arr_19 [i_1] [i_1] [i_1] [i_2] [i_3] = (arr_15 [i_1 + 1] [i_1 + 3] [i_0] [i_0]);
                        var_13 = (max(((var_9 ? (((((arr_9 [i_1] [i_1]) == var_5)))) : var_1)), (arr_2 [i_1 + 1])));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 9;i_4 += 1)
    {
        var_14 = (max(var_14, (((var_7 ? 18289498389823722035 : 874693111)))));
        var_15 = (((9245240726944428210 ^ var_0) > (arr_15 [i_4] [i_4] [i_4] [i_4])));
        arr_23 [i_4] |= (arr_20 [i_4 + 2]);
        var_16 = (arr_8 [i_4] [2] [i_4]);

        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            arr_27 [i_4] = (!var_7);
            arr_28 [i_5] [i_4] = 9223372036854775807;
        }
    }
    var_17 = (min(var_17, (((var_1 | ((((((max(var_1, var_2))) || (14833982582491048799 / 17855576168840213145))))))))));
    var_18 = (min((min(1, var_5)), var_5));
    var_19 = ((-(max(9223372036854775807, 1610612736))));
    #pragma endscop
}
