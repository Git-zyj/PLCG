/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_12 = (min((((~(arr_4 [i_1 - 1])))), ((var_9 & (arr_4 [i_1 - 1])))));
                                var_13 = ((-((((~576460752303423232) <= (min(1827703225, 4164160898178061838)))))));
                                var_14 = ((((((arr_8 [i_1 - 1] [i_1 - 1] [i_2 - 1] [i_3]) > (arr_8 [i_1 - 1] [i_1 - 1] [i_2 - 1] [i_4])))) ^ var_10));
                                var_15 &= (min((max(1540227073, (arr_0 [i_4] [16]))), 12));
                            }
                        }
                    }
                }
                var_16 -= (-(min(var_10, (arr_2 [i_1]))));
                var_17 = ((((-(arr_4 [i_1 - 1]))) == (arr_4 [i_1 - 1])));
                var_18 = (arr_10 [1] [i_1 - 1] [i_0] [i_0]);
            }
        }
    }

    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {

        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            var_19 = (((((min(var_3, (arr_11 [i_5] [i_5] [i_5] [i_5] [i_6] [i_5])))) ? (arr_9 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1]) : (((min((arr_3 [16]), (arr_4 [i_5]))))))));
            var_20 = (((arr_15 [i_5]) ^ (((((arr_12 [i_6]) || 1))))));
        }
        var_21 = 174449910;
        var_22 = ((111 << (174449921 - 174449920)));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_23 = (max((((var_3 <= ((-26372 + (arr_0 [i_7] [i_7])))))), 51959));
        var_24 = (max(var_24, 1));
        var_25 = ((-(min((((arr_7 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) ? var_1 : (arr_15 [i_7]))), var_6))));
        var_26 = ((((((arr_0 [i_7] [i_7]) - (arr_0 [i_7] [i_7])))) ? ((max(1, var_9))) : 0));
        var_27 = (arr_11 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]);
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 11;i_8 += 1)
    {
        var_28 = 2772216202813498954;
        var_29 = ((arr_9 [i_8 - 2] [i_8 + 1] [4] [4]) ? (arr_9 [i_8 + 3] [i_8 + 3] [i_8] [i_8]) : (arr_9 [i_8 + 3] [i_8 + 1] [i_8] [10]));
    }
    for (int i_9 = 0; i_9 < 16;i_9 += 1)
    {
        var_30 = (min((arr_8 [1] [i_9] [i_9] [i_9]), ((var_3 ? (arr_12 [i_9]) : ((var_9 ^ (arr_0 [i_9] [i_9])))))));
        var_31 = (min(var_31, (((0 | ((((1 ? (arr_10 [4] [i_9] [i_9] [i_9]) : 49441)))))))));
    }
    var_32 = (min(var_32, ((((((var_11 ? var_9 : var_7)) - 3584))))));
    #pragma endscop
}
