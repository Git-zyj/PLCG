/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_10 = (((arr_0 [i_0] [i_0]) == ((((arr_1 [i_0]) < var_2)))));
        arr_2 [i_0] = ((((((arr_1 [i_0]) >> (((arr_0 [i_0] [i_0]) - 9916))))) ^ ((1 ? 9601 : var_9))));
    }

    for (int i_1 = 1; i_1 < 8;i_1 += 1)
    {
        var_11 = (max(var_11, 9608));
        arr_6 [4] = (arr_4 [i_1]);
        arr_7 [i_1 + 3] = var_5;

        /* vectorizable */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_12 ^= var_6;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        arr_16 [i_1] [8] [i_1] [i_1 + 3] = ((var_3 > ((((arr_14 [i_1] [7] [i_4]) || var_7)))));
                        arr_17 [i_1] [i_2] [i_3] [4] [i_3] = (((arr_11 [i_1 - 1] [i_1 + 3] [6] [i_1]) % 1));
                    }
                }
            }
            arr_18 [i_1 + 1] [i_1 + 3] = var_4;
        }
        for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                arr_24 [5] [i_5] [i_6] [5] = (((!594514580) ? 1 : (arr_3 [i_1 - 1])));
                var_13 += (((arr_8 [i_1 + 2]) == var_8));
                arr_25 [i_1 + 1] [1] [i_6] [i_6] = (3644442774 ^ 1);

                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        arr_30 [1] [1] [0] [1] [i_6] [i_6] [i_8] = (-9592 | -9599);
                        var_14 = var_6;
                    }
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        var_15 = -20;
                        arr_33 [3] [i_6] [1] [i_9] = var_6;
                        arr_34 [9] [8] [i_6] [8] [i_5] = 96;
                        var_16 = var_8;
                    }
                    for (int i_10 = 2; i_10 < 7;i_10 += 1)
                    {
                        var_17 = ((((3 ? 97 : 51)) == -32572));
                        arr_37 [i_5] &= (!0);
                        arr_38 [i_1] [i_1] [2] [i_1 + 1] [i_1] [0] [i_6] = 97;
                        var_18 = (~9591);
                    }
                    arr_39 [7] [i_6] [i_6] [i_6] [i_6] [0] = var_5;
                }
                var_19 += (~var_2);
            }
            var_20 |= (max((((arr_23 [i_1 + 1] [i_1 + 2] [i_1 + 2]) + 1)), 8184));
            arr_40 [i_1] [1] [i_5] = 32767;
        }
        for (int i_11 = 0; i_11 < 11;i_11 += 1) /* same iter space */
        {
            var_21 = (min((arr_22 [i_1 - 1] [i_11] [10] [i_11]), (min(var_5, var_1))));
            arr_43 [i_11] [1] = (max((max((max(3445070116, 32575)), (min(var_4, 849897179)))), 3445070117));
            arr_44 [i_1] = 65534;
        }
        arr_45 [4] = 48121;
    }
    for (int i_12 = 0; i_12 < 23;i_12 += 1)
    {
        arr_49 [3] [i_12] = (((((849897176 + var_2) <= 1)) ? 849897176 : 1));
        var_22 = (((arr_48 [i_12]) != ((((min(var_5, -29666))) - -18723))));
    }
    /* LoopNest 3 */
    for (int i_13 = 0; i_13 < 10;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 10;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 10;i_15 += 1)
            {
                {
                    var_23 = 1;

                    for (int i_16 = 1; i_16 < 9;i_16 += 1)
                    {
                        arr_60 [i_16 + 1] [i_16] [i_16] [i_13] = -300476741;
                        var_24 = 4294967295;
                    }
                }
            }
        }
    }
    var_25 -= 4294967295;
    /* LoopNest 3 */
    for (int i_17 = 0; i_17 < 1;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 25;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 25;i_19 += 1)
            {
                {
                    arr_69 [i_17] [i_17] |= 6;
                    var_26 = (max((22 & var_1), var_4));
                    arr_70 [17] [i_18] [i_18] [i_19] = (min((1 | 650524548), var_2));
                    var_27 = (max(((max((max((arr_66 [i_17] [18] [i_17]), 1)), -16037))), 0));
                    arr_71 [2] [i_18] [i_17] = (max((max(((min((arr_65 [i_17] [12]), 1))), var_0)), var_8));
                }
            }
        }
    }
    #pragma endscop
}
