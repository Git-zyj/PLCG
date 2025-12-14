/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-((~((0 ? var_0 : 1))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_11 = (max(var_11, (((-((((7936 >> (((arr_2 [i_1] [i_1]) - 311398706)))))))))));
                            arr_13 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0] [5] = (max(var_5, (125 % -var_7)));
                            var_12 = (max(var_12, 18446744073709551614));
                        }
                    }
                }
                arr_14 [i_1] [7] = (arr_9 [i_0 - 1]);
                arr_15 [i_0] [i_1] = (min(((max(130, 0))), var_0));

                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    var_13 = (min(var_13, -5));
                    arr_18 [5] [i_0] [i_1] [5] = ((var_0 < ((-(arr_1 [i_1])))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    var_14 = ((var_6 ? 125 : (arr_10 [i_0 - 3] [i_0 - 2])));
                    arr_22 [i_5] [i_1] [i_0 - 2] = (((var_8 ? 4294967295 : (arr_8 [i_5] [i_1] [i_0] [i_0 - 3]))));
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_15 = ((((((~(arr_6 [i_1] [i_1] [2]))))) ? (min((arr_7 [i_0 - 3]), (arr_7 [i_0 - 2]))) : (11 || 1)));
                    var_16 = ((-(max((arr_17 [i_0 - 1] [i_1] [9] [i_6]), (((arr_17 [i_0] [i_1] [i_6] [i_6]) << 1))))));
                }
                var_17 = ((((~((-(arr_12 [10] [i_1] [i_1] [10]))))) ^ ((max((arr_19 [1] [i_0 - 1] [i_0 - 2] [i_0 - 2]), 130)))));
            }
        }
    }
    var_18 = (((-var_3 < var_0) ? ((((var_1 ? 11 : var_8)) >> var_0)) : var_0));
    var_19 = (max(var_19, ((max((~var_3), -122)))));
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                {
                    arr_32 [i_7] [i_8] = (((((var_1 != (((max(127, 255))))))) >> ((((-(~-122))) + 142))));
                    var_20 -= (-((~(arr_29 [i_9] [i_8] [i_7]))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_21 = (arr_28 [i_7]);
                                var_22 = ((arr_31 [i_7] [i_7] [i_7] [1]) + (~5276540298826927859));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
