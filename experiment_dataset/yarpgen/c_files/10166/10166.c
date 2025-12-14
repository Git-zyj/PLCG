/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;

    for (int i_0 = 3; i_0 < 8;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (min(((max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))), (arr_1 [i_0] [i_0])));

        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] [i_0] = (((((((1 << (arr_0 [6] [i_0])))) ? (((1 + (arr_8 [i_0] [i_2] [i_0])))) : (arr_5 [i_3] [i_3]))) >= ((((min(1805322291186323144, (arr_0 [i_1] [i_0])))) ? (max(2383256187582171773, (arr_9 [i_1] [i_1]))) : (max((arr_9 [i_0] [i_0]), (arr_5 [1] [i_3])))))));

                        for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                        {
                            var_15 = (arr_6 [i_4] [i_0] [i_0] [i_0]);
                            arr_14 [i_0] [i_0] = ((~(!7831534711227342805)));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0 + 2] = (max((((2400025440 > (min((arr_5 [i_0 - 1] [1]), (arr_9 [3] [i_1])))))), (min(1, 49))));
                            arr_16 [i_0] = 1;
                            var_16 -= (min(((((((65535 ? -16 : (arr_7 [i_4] [i_3] [4] [i_4]))) + 2147483647)) << (4376173322004086190 - 4376173322004086190))), (((arr_13 [i_4]) & (arr_1 [i_2] [i_2])))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                        {
                            var_17 += arr_9 [i_0] [i_5];
                            var_18 = (arr_1 [i_0] [i_0]);
                        }
                    }
                }
            }
            var_19 = (min(var_19, ((min((((!(arr_19 [2] [2])))), (((arr_5 [i_1 + 1] [i_0 - 3]) ? (arr_5 [i_1 + 1] [i_0 + 2]) : 759455391)))))));
        }
        var_20 -= (max((max((max((arr_1 [1] [i_0]), 0)), (((1 && (arr_19 [1] [1])))))), (arr_0 [i_0] [4])));
        arr_20 [i_0] [i_0 - 1] = (((((arr_12 [i_0 - 3]) ^ (arr_12 [i_0 - 1]))) ^ (max((arr_12 [i_0 - 2]), (arr_12 [i_0 - 2])))));
        arr_21 [i_0] [i_0] = ((~((~((((arr_13 [i_0]) <= (arr_3 [i_0] [i_0]))))))));
    }
    for (int i_6 = 3; i_6 < 8;i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 0;i_8 += 1)
            {
                {
                    arr_31 [i_6] = (((arr_29 [1] [i_6 - 1] [i_6 - 1]) ^ (arr_5 [2] [i_8])));
                    arr_32 [i_6] [i_7] [i_7] [i_8] = (arr_13 [i_6]);
                    var_21 = (max(((15265030758341275337 >> ((((1 << (37536 - 37522))) - 16350)))), (((!(arr_3 [i_6] [4]))))));
                    var_22 = (arr_27 [i_6] [i_6]);
                }
            }
        }
        arr_33 [i_6] = arr_29 [i_6] [i_6] [i_6];
        arr_34 [i_6] = (((((~(arr_7 [i_6] [i_6] [i_6] [i_6])))) ? (arr_26 [i_6] [i_6]) : 1));
        arr_35 [i_6] = (min(3735682203, 1277969156));
    }
    #pragma endscop
}
