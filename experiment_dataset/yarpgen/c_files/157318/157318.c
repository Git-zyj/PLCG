/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_14 = ((-86 ? 1 : 241));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_15 = (arr_3 [i_3] [i_1]);
                            arr_11 [i_3] [i_3] [i_2] [i_3] = (241 / 4294934528);
                        }
                    }
                }
                arr_12 [8] [i_1] [i_1] = (min((arr_0 [i_0] [i_0]), (~var_8)));
            }
        }
    }

    for (int i_4 = 4; i_4 < 19;i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] = ((!((((arr_4 [0] [i_4 + 1] [i_4]) ? 32772 : (arr_4 [14] [i_4 - 2] [i_4]))))));
        arr_17 [i_4] [i_4] = ((((min((arr_1 [i_4] [i_4 - 4]), var_9)) & var_10)));
    }
    /* vectorizable */
    for (int i_5 = 4; i_5 < 19;i_5 += 1) /* same iter space */
    {
        var_16 ^= (arr_5 [22]);
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                {
                    var_17 += (arr_15 [i_7]);
                    arr_25 [i_5] = var_9;
                    arr_26 [i_7] [i_6] [7] [i_6] = (((((arr_22 [3] [11] [18] [4]) & (arr_9 [i_7] [18] [i_5] [i_5 - 2]))) / (arr_21 [i_5] [i_6] [16])));
                    arr_27 [i_5] [10] [i_5] = ((arr_5 [12]) << 15);
                    arr_28 [i_6] [i_7] = 50;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 4; i_8 < 19;i_8 += 1) /* same iter space */
    {
        var_18 = (241 && 9);
        var_19 = (((arr_20 [i_8 + 1] [i_8 - 1]) / 6144));
        arr_33 [i_8 - 2] [i_8] = (((((arr_18 [i_8]) ? 4294934528 : 85)) <= (arr_5 [10])));
        arr_34 [i_8 - 3] = (235 || 6132);
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 13;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 13;i_12 += 1)
                {
                    {
                        var_20 = 2395898320590107516;
                        arr_48 [i_12] = (arr_39 [i_10] [i_11]);
                    }
                }
            }
        }
        arr_49 [i_9] = (((var_11 ? 7678982475211599721 : 43179)));
        var_21 -= (arr_30 [i_9] [i_9]);
    }
    #pragma endscop
}
