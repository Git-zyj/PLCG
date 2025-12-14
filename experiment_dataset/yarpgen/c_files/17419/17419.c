/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((max(var_10, var_9))) % ((var_0 ? ((0 ? 4294967295 : -17)) : var_7))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_16 = (((((0 ? 3876358072 : (arr_0 [i_3 - 3])))) ? (arr_0 [i_3 - 3]) : (!var_0)));
                                var_17 = (min(var_17, ((((((((((min(16, (arr_9 [i_0] [2] [0] [i_3]))))) != ((var_3 * (arr_6 [i_4] [i_1] [i_2]))))))) < (((((1 | (arr_1 [i_3] [i_3])))) ? 13 : (arr_0 [i_2]))))))));
                                var_18 = (max((var_0 / var_14), ((~((1 ? 124 : var_12))))));
                                var_19 = (max(var_19, ((((((min(-3018567466226156483, (arr_5 [i_0 - 2])))) ? var_14 : (arr_12 [i_2] [i_1] [i_2] [i_2] [i_2 - 1] [i_4])))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 9;i_6 += 1)
                        {
                            {
                                var_20 = (((((~(min((arr_18 [i_0] [9] [i_0] [7]), 3957944364))))) ? ((var_1 ? (arr_8 [i_5] [i_5] [i_2 + 2]) : (arr_17 [i_1 - 2] [1]))) : ((556429832 ? 41 : 556429832))));
                                var_21 = (max(var_21, (arr_11 [i_6 + 1] [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6 - 1])));
                                var_22 -= ((!(((arr_12 [i_5] [i_5] [i_5] [i_5 - 3] [i_6 + 1] [i_6]) && (arr_9 [i_0 + 1] [4] [i_5 - 1] [i_6 - 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            {
                                var_23 = (max(((min(((0 ? 8694 : -1839602966353703706)), (arr_32 [i_7] [i_7] [i_8] [i_9] [i_8] [i_7])))), (((((arr_31 [i_11] [i_8] [i_9] [i_11] [i_11]) ? (arr_24 [i_7] [1] [i_11]) : 337022931)) * (((var_6 ? -22353 : var_0)))))));
                                var_24 += -var_3;
                                var_25 += ((~(~47551)));
                            }
                        }
                    }
                    var_26 = (min(((47551 ? (arr_32 [i_7] [i_8] [i_9] [i_7] [i_9] [i_9]) : 2813264911487420633)), (((17984 * (242 + 17985))))));
                    var_27 = (min(var_27, ((((min((arr_25 [i_8]), (-32767 - 1))))))));
                }
            }
        }
    }
    #pragma endscop
}
