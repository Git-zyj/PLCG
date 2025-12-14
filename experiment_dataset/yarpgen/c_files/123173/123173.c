/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_2] &= var_8;
                    var_16 = -19915;
                }
            }
        }
        arr_10 [i_0] |= ((!(arr_4 [i_0])));

        /* vectorizable */
        for (int i_3 = 3; i_3 < 15;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                arr_16 [i_3] [i_3] = (arr_14 [i_0]);
                var_17 = (max(var_17, (arr_4 [i_4])));
                arr_17 [i_3] = ((-(arr_11 [i_0] [i_3] [i_3 - 2])));
                var_18 = (max(var_18, 1));
            }
            for (int i_5 = 1; i_5 < 13;i_5 += 1)
            {
                arr_22 [i_3 - 3] [i_3] [i_3 + 1] = var_3;
                arr_23 [i_0] [i_3] [i_5 + 3] = (arr_20 [i_3]);
                arr_24 [14] [i_3] [i_5 + 2] = 3193;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 0;i_7 += 1)
                    {
                        {
                            var_19 = 32767;
                            var_20 |= (arr_30 [i_0]);
                            arr_32 [i_0] [i_3] = (arr_27 [i_0] [i_3 - 2] [i_3] [i_5 + 2] [i_6] [i_7]);
                            var_21 = (max(var_21, var_12));
                            arr_33 [i_3] [i_3] [i_3 - 2] [i_3] [i_3] [i_3] [i_3] = (~(((!(arr_5 [i_0] [i_0])))));
                        }
                    }
                }
            }
            arr_34 [i_3] [i_3 - 2] = ((-(arr_3 [i_3 - 3] [i_3 + 1])));
            var_22 = var_8;
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    {
                        arr_40 [i_3] [i_8 + 1] [i_9] = (~18271628529721372612);
                        var_23 = (min(var_23, ((((arr_31 [i_3] [i_3 + 1] [i_3 + 1] [1] [14] [i_3 - 3] [i_3]) & var_8)))));
                        var_24 = (arr_29 [i_3 - 3] [i_3] [i_3 - 2] [i_3] [i_8 - 1]);
                    }
                }
            }
            arr_41 [i_0] [i_3] [i_3 - 3] = (arr_30 [i_0]);
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            var_25 = ((!(arr_29 [i_0] [i_10] [i_0] [i_0] [i_0])));
            arr_44 [i_0] [i_0] [i_0] |= (arr_26 [i_10] [i_10] [i_10] [i_0]);
            var_26 = (arr_20 [i_10]);
            var_27 |= (!(arr_18 [i_0] [i_0] [i_0] [i_0]));
            var_28 = (~var_13);
        }
    }
    var_29 &= var_12;
    var_30 = (min(var_30, ((((max(-var_7, -16648931790651670602)) > var_6)))));

    for (int i_11 = 1; i_11 < 22;i_11 += 1)
    {
        var_31 = -var_2;
        arr_47 [i_11] [i_11] = ((-(max((((!(arr_46 [i_11])))), var_10))));
    }
    #pragma endscop
}
