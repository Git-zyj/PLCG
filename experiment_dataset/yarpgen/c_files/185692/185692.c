/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((max(-5777933133880509961, var_16))) || (var_0 && var_4))) && (!var_1)));

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_5 [i_0] = ((+(min((var_13 | 1), (var_11 ^ 33779)))));
            var_21 = (max(var_21, var_13));
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_22 ^= var_0;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {
                        var_23 = (min(var_23, (((((((-26363 ? 834576606 : -834576607)) + ((~(arr_2 [i_0] [i_0])))))) ? ((min((((arr_9 [i_0] [i_2] [17]) && (arr_1 [i_4]))), (((arr_10 [10] [10] [5] [i_3] [10]) || (arr_6 [i_0])))))) : (((var_6 && ((max((arr_7 [i_3] [i_2] [i_0]), var_7))))))))));
                        arr_14 [1] [i_3] [i_4] = (((((-834576606 < ((1 * (arr_8 [i_3])))))) * (arr_8 [i_0])));
                    }
                }
            }
        }
        arr_15 [i_0] [13] = ((((var_8 ^ (arr_2 [i_0] [i_0]))) != ((((arr_9 [i_0] [i_0] [i_0]) < ((max(var_10, (arr_7 [i_0] [7] [i_0])))))))));
        arr_16 [17] = 1;
        var_24 = ((((((var_7 ? -1739803985 : 130)))) / (min((arr_12 [3] [9] [i_0] [i_0]), (arr_12 [i_0] [i_0] [i_0] [i_0])))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
    {
        arr_19 [i_5] [i_5] = ((!((0 || (arr_17 [19])))));
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    {
                        var_25 = var_15;
                        var_26 = (((var_2 | 15) | (arr_13 [i_5] [i_5] [i_7] [i_7 - 1])));
                        arr_29 [i_6] = (((var_18 >= var_7) << (((arr_2 [i_7 - 1] [i_6 - 1]) - 70))));
                    }
                }
            }
        }
        var_27 += ((1739804000 * (((arr_7 [i_5] [10] [i_5]) / var_17))));
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                {
                    arr_37 [8] [8] [4] [i_11] &= (((((var_7 > (arr_13 [i_11] [i_10] [i_11] [i_10]))))) & (var_15 ^ var_10));
                    arr_38 [i_9] [i_9] = ((-((var_11 << (var_13 - 570074627)))));
                }
            }
        }
    }
    var_28 = var_12;
    #pragma endscop
}
