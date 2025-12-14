/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    var_10 = (arr_7 [i_2] [15] [14] [i_2]);
                    arr_8 [i_2] = 4294967295;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_11 |= ((10081253360756621514 ? (58161 > 18390327632873497613) : (26760 == -45069564)));
                                arr_15 [16] [17] [19] [i_2] [i_1] [i_2] = (((arr_9 [0] [i_1] [i_2] [i_2 - 2] [i_4]) | 1));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        arr_18 [i_2] [i_1] = ((1 ? 1 : (arr_7 [19] [i_2 - 1] [i_2] [i_2])));
                        var_12 = (var_5 ? (arr_10 [i_1] [i_2] [i_2] [i_2 - 2]) : 2147483647);

                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            var_13 = ((((((arr_14 [i_6] [i_6] [i_6] [i_6] [i_6]) ? 2147483647 : 160))) ? (-896911061 || 1) : var_5));
                            arr_21 [i_0] [i_5] [i_2] = ((~(arr_20 [i_6] [22] [i_2] [i_1] [i_0])));
                        }
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            arr_25 [i_7] [1] [i_2] [i_5] [i_7] &= (((235 && var_0) ? (((var_9 ? var_9 : var_9))) : var_7));
                            var_14 = 3;
                            var_15 = var_2;
                            arr_26 [i_2] = ((17665 ? 17240313043506902348 : var_1));
                            var_16 = (arr_19 [i_0] [i_5] [i_7]);
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            {
                                arr_33 [i_0] [i_2] [i_0] [i_0] [3] [9] [i_0] = ((arr_14 [i_2 + 2] [19] [i_2] [i_2] [i_2]) ? (arr_20 [9] [i_2 - 1] [21] [i_8 - 1] [0]) : (arr_29 [i_2 - 1] [i_2] [i_8 + 1] [i_8 - 1] [i_8]));
                                var_17 = var_6;
                                var_18 = (((arr_9 [i_9] [17] [i_9] [i_8] [i_8 - 2]) ? var_8 : var_9));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_10 = 2; i_10 < 23;i_10 += 1)
                {
                    arr_36 [i_0] [i_1] [i_10] [0] = (33030144 / var_0);
                    var_19 = (arr_22 [18]);
                }
                var_20 = (min(((~(-1526391080 ^ var_4))), (min(((max(var_8, 17665))), ((2025841783 ? 65535 : var_1))))));
            }
        }
    }
    var_21 = (((var_5 ? -938427916 : var_6)));
    #pragma endscop
}
