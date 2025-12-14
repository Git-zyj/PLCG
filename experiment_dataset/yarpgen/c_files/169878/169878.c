/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_12 = ((((((arr_1 [i_0 - 1]) ^ (arr_0 [i_0 - 1])))) || ((124 >= (arr_1 [i_0 - 1])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_13 = (var_4 - var_11);
                    arr_8 [i_0] [i_1] [i_2] = (((((min((arr_0 [i_0]), 12137)))) == ((-(7182631015857661930 | var_8)))));
                }
            }
        }
        arr_9 [i_0] = ((-(arr_1 [i_0 - 1])));
        arr_10 [i_0] [i_0 - 1] = (((min((arr_2 [i_0] [i_0 - 1]), 4294967295)) | ((min(((10237 ? (arr_3 [i_0] [i_0]) : (arr_6 [i_0]))), var_0)))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_14 = ((12 ? ((((arr_11 [i_3]) >= (arr_1 [i_3])))) : 67));
        arr_13 [i_3] = (arr_0 [i_3]);
        var_15 ^= (-67 ? 1496124562 : 65515);
        arr_14 [i_3] = -21123;
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 9;i_4 += 1)
    {
        arr_17 [i_4] = 1;
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 9;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                {
                    arr_23 [3] [i_5] [3] [i_6] = ((((((arr_19 [2] [1] [i_6]) ? 1 : (arr_2 [i_4] [i_5])))) ? (((!(arr_2 [7] [i_5])))) : (((arr_0 [i_6]) ? 8985 : (arr_18 [1])))));
                    arr_24 [i_4] [i_5] [i_4] = (((arr_5 [i_4 + 1] [i_4 + 2]) <= (arr_0 [i_4 + 2])));
                    arr_25 [i_5 - 1] [i_5] [i_4 + 2] [i_4] = (arr_5 [i_4] [16]);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            {
                                arr_31 [i_4] [i_4 + 1] [i_5 + 1] [i_8] [i_7] [i_8] = ((~(arr_21 [i_5] [i_5 - 2] [i_5 + 2])));
                                var_16 = (((arr_27 [i_5 - 1] [i_5] [i_5] [i_5] [i_5] [i_5 + 2]) != -3301315889409587901));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 9;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            {
                                var_17 = (arr_22 [i_4] [i_10] [10] [i_9 + 3]);
                                arr_37 [i_4] = (var_6 % (45 || 7182631015857661938));
                                arr_38 [i_4] [i_5] [i_4] [i_9] [i_10] = (15198368453172282932 < 529671860);
                                var_18 = (((arr_6 [i_4 - 1]) ? (arr_19 [i_4] [i_4 - 1] [i_4 + 3]) : -679858197));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 1; i_11 < 23;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            {
                var_19 += (((-(arr_41 [i_11 + 1]))) / (-1496124567 ^ 65515));
                var_20 = (min((arr_43 [1] [i_11]), (((arr_43 [i_12] [i_11]) ? (min(4373242791702274174, 16851)) : (2692 < 4294967286)))));
                var_21 = ((!(arr_42 [i_11 - 1])));
            }
        }
    }
    #pragma endscop
}
