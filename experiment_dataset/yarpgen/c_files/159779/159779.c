/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((var_5 + 2147483647) << (var_6 - 11112922792988918760)));
    var_16 = ((var_11 ? var_12 : ((((-93 ? var_5 : 92))))));
    var_17 = (((((93 ? 0 : -5810))) ? (max((~var_7), var_1)) : (!var_12)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1 + 4] [i_2] = ((-1484970289 ? (((arr_5 [i_0]) ? var_7 : (arr_4 [i_0] [i_0] [i_2]))) : ((~(arr_6 [i_0] [i_1] [3] [4])))));
                    var_18 = (min(var_18, (((((var_6 ? (arr_1 [16]) : (arr_0 [i_2] [i_1]))) != ((-93 ? 9 : var_8)))))));
                    var_19 = var_9;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_0] [i_3] [i_4] = 8225303522209133769;
                                arr_17 [i_4] [i_3] [i_0] [i_3] [i_0] = var_6;
                                var_20 = (min(var_20, var_8));
                                var_21 = (((arr_10 [i_3] [5] [i_2] [5]) ? (arr_10 [i_0] [i_0] [i_2] [i_1 + 4]) : var_3));
                            }
                        }
                    }
                    var_22 = (((arr_0 [i_1] [i_0]) ? ((0 ? -93 : 0)) : (arr_2 [i_1 + 1] [i_1 + 4])));
                }
            }
        }
        arr_18 [i_0] = (arr_1 [i_0]);
        arr_19 [i_0] &= (var_6 == 1484970295);
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
    {
        arr_24 [i_5] = ((((-1484970289 ? (~var_7) : var_7)) < var_1));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    {
                        var_23 = (((var_7 || var_12) == (((((arr_20 [i_6]) < (~1484970298)))))));
                        var_24 = (max(var_11, ((var_4 ? var_0 : (((~(arr_22 [i_8]))))))));
                        arr_33 [i_5] [i_5] = arr_25 [i_6] [1];
                        arr_34 [i_7] = (arr_31 [i_5] [i_5] [21] [i_5] [i_5] [11]);
                    }
                }
            }
        }
        var_25 = (min((min(((2809997006 ? var_14 : var_14)), (((var_11 ? var_5 : var_2))))), (var_5 == 65528)));
        arr_35 [i_5] [i_5] = (((((-58198 ? (((arr_23 [i_5]) + var_2)) : ((max(var_5, (arr_20 [i_5]))))))) ? ((~(arr_28 [i_5] [17] [i_5] [17]))) : (min((!-21022), var_10))));
    }
    for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_10 = 4; i_10 < 20;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 20;i_12 += 1)
                {
                    {
                        var_26 = var_6;
                        arr_46 [i_11] |= ((27 <= (((arr_30 [i_9] [i_12 + 2]) ? (arr_38 [i_9] [i_11]) : var_3))));
                        var_27 = (arr_32 [i_9] [i_10]);
                    }
                }
            }
        }
        var_28 = var_5;
    }
    #pragma endscop
}
