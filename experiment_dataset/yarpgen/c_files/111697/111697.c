/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [8] = (((((((((arr_0 [i_0]) >= (arr_2 [i_0])))) >= var_6))) != ((min((arr_0 [i_0]), (arr_2 [10]))))));
        arr_4 [i_0] = (((arr_0 [i_0]) ? ((max(var_16, (arr_0 [i_0])))) : var_6));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 = 47;
                                var_20 &= ((-27498 ? 524287 : 209));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_20 [9] [16] [i_1] [i_1] [i_0] = (arr_6 [i_6 + 1]);
                                var_21 = ((var_10 && ((((0 ? (arr_0 [i_1]) : (arr_9 [17] [3] [i_1] [i_1]))) == (arr_18 [i_0] [10] [i_6 + 1] [5] [9])))));
                                arr_21 [i_0] [10] [i_2] [15] [i_0] = ((0 ? 65526 : 8));
                            }
                        }
                    }
                    var_22 = max((((((24798 ? 0 : (arr_19 [5] [i_1] [2] [i_1] [i_1])))) ? ((max(var_3, 209))) : var_7)), (~var_14));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                {
                    var_23 = (-49 * var_3);
                    arr_27 [i_0] = ((((((-(arr_19 [i_0] [i_0] [12] [4] [14]))))) ? (18446744073709551615 <= 24772) : (arr_17 [15] [15] [i_0])));
                    var_24 = (min(((var_5 ? (var_10 / var_5) : (arr_26 [i_0] [i_0]))), ((((arr_17 [i_7 - 1] [i_7 + 1] [i_7 + 1]) / -32767)))));
                }
            }
        }
        var_25 += (arr_14 [9] [11] [11]);
    }
    var_26 = var_4;
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 17;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 16;i_10 += 1)
        {
            {
                arr_33 [i_9] [i_9] [2] = (((((((arr_24 [2]) ? 32752 : (arr_13 [18] [7] [i_9] [i_9] [i_9]))))) >> ((((((((arr_22 [i_10]) ^ 0))) ? var_6 : (arr_18 [i_9] [8] [i_9] [4] [13]))) - 18446744073709523228))));
                arr_34 [i_9] = ((var_3 ? (arr_24 [i_10 - 2]) : (((max((arr_22 [i_10 - 2]), (arr_22 [i_10 + 1])))))));
                arr_35 [0] [i_10] = (max((((((var_6 ? var_17 : (arr_7 [6] [18])))) ? (arr_32 [i_10 - 2] [14] [i_9]) : (((((arr_24 [12]) || (arr_28 [i_9]))))))), 16));
                arr_36 [4] [i_10] [4] = ((-((((arr_16 [12] [3] [i_10 - 2]) < (arr_16 [i_10] [i_10] [i_10 - 2]))))));
            }
        }
    }
    var_27 = (((~(~var_2))));
    #pragma endscop
}
