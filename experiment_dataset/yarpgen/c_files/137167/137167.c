/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] = (((((((((arr_2 [i_0]) ? var_10 : (arr_0 [i_0])))) ? -30988 : ((-30990 ? -30974 : (arr_0 [i_0])))))) ? ((min(14350, 51194))) : (((max(7214900067755462108, (arr_3 [i_0] [i_0] [i_0])))))));

                for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_2] [6] [i_0] = var_17;
                                var_20 = (max(var_20, (((55720 ? (((arr_9 [i_3 + 1] [i_3 - 1] [i_4] [i_3]) ? (arr_9 [i_3 + 1] [i_3 + 2] [i_4] [i_4]) : (arr_9 [i_3 - 1] [i_3 + 2] [i_4] [6]))) : (arr_8 [i_3 + 2] [i_3 + 2] [i_3] [i_3 + 2] [i_3 - 1] [5]))))));
                            }
                        }
                    }
                    var_21 = (min((((min((arr_9 [i_2] [i_2] [i_0] [i_1]), 77)))), 14354));

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        arr_16 [10] [i_1] [2] [i_1] |= (max((min((max((arr_8 [i_0] [i_0] [i_1] [4] [4] [8]), 4294967282)), 127)), 127));
                        var_22 = ((((min(((min((arr_11 [i_2] [i_2]), -91))), (max(94, (arr_14 [5] [i_2] [i_1] [i_0])))))) ? 18446744073709551604 : (((((max((arr_14 [i_0] [i_1] [9] [i_5]), -111))) ? (arr_1 [i_0]) : 14344)))));
                        arr_17 [i_0] [i_1] = (min(var_0, 98));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_23 = var_6;
                        arr_22 [i_0] = (max((max(((1 ? 6296850214287896927 : 10460029572811848572)), 23354)), (~379360285)));
                        var_24 = (((arr_5 [i_2]) ? (!32767) : ((max((max(9800, (arr_18 [i_0] [i_2] [i_6]))), (arr_18 [10] [i_1] [i_1]))))));
                        arr_23 [i_0] [i_6] [1] [i_0] = (((arr_12 [i_0]) ? ((max((arr_12 [i_0]), var_0))) : (arr_12 [i_1])));
                        var_25 = (arr_2 [i_0]);
                    }
                }
                for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                {
                    arr_27 [i_0] [i_1] [7] [i_1] = (((var_10 ? (arr_1 [i_0]) : (arr_12 [i_0]))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            {
                                var_26 -= ((max(-104, 23371)));
                                arr_32 [i_0] [i_0] = (arr_30 [1] [i_1] [i_7] [i_8] [i_8]);
                                arr_33 [6] [i_1] [i_7] [1] [i_8] [i_9] |= 3530501981400363638;
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = var_15;
    #pragma endscop
}
