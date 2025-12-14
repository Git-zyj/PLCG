/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_18 = (max(((-(((arr_7 [i_2]) ? 245250903 : 18)))), (arr_0 [i_2])));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
                    {
                        arr_11 [1] [1] [i_0] [i_0] |= (min((min(((var_12 ? (arr_4 [i_1] [i_3]) : var_15)), 19)), 14347347561541664319));
                        arr_12 [i_0] = (+-2064451968);
                        arr_13 [i_0] [i_0] [i_2] [i_3] [i_2] [i_3] = var_5;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                    {
                        var_19 = ((~(((arr_9 [0] [i_1] [i_2] [i_2]) % (arr_4 [i_1 + 2] [i_4])))));
                        arr_16 [i_0] [i_0] [i_0] = (((arr_10 [i_1 - 1]) << (var_0 - 4037036163409600855)));
                        arr_17 [i_0] [i_0] [1] [2] [19] &= -19;
                        var_20 = ((+((-18 ? (arr_15 [i_1] [i_1] [13] [16] [i_1]) : var_0))));
                        var_21 = (arr_10 [i_1]);
                    }
                    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                    {
                        var_22 = (min((((!(~var_5)))), (max((arr_15 [i_1 + 2] [i_1] [1] [i_1 + 1] [i_1 - 1]), var_4))));
                        arr_20 [i_5] [i_2] [i_1] [i_0] = 1;
                    }
                }
            }
        }
        var_23 = (!(((~(arr_19 [i_0])))));
        var_24 = (min(var_24, (arr_1 [i_0] [i_0])));
    }
    for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
    {
        var_25 = ((((var_16 ? 1 : (arr_4 [i_6] [i_6]))) >> (((arr_4 [i_6] [i_6]) - 642116807459583226))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 20;i_8 += 1)
            {
                {
                    arr_27 [i_6] [i_6] [i_8] [i_6] = (arr_8 [i_6]);
                    arr_28 [1] [0] [i_6] |= (arr_5 [i_8 - 1] [i_8 - 2]);
                }
            }
        }

        /* vectorizable */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_26 = ((-(arr_0 [i_9])));
            var_27 |= ((arr_23 [i_6]) == (arr_26 [i_6] [i_6] [i_9]));
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            /* LoopNest 2 */
            for (int i_11 = 1; i_11 < 19;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    {
                        var_28 = (arr_7 [i_6]);
                        arr_38 [i_11] [i_6] [2] [1] [i_11] [i_11] = (((min(var_16, var_5))) ? var_5 : ((min((arr_14 [i_11] [i_6]), -108))));
                        arr_39 [i_6] [i_6] [i_6] [i_11 - 1] [i_11] [i_12] |= (!12648890290588939798);
                    }
                }
            }
            var_29 = (min(((max((arr_0 [i_6]), (arr_19 [i_6])))), ((var_0 * (arr_10 [i_6])))));
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 22;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 21;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 19;i_15 += 1)
                    {
                        {
                            var_30 = ((!(((arr_2 [5]) || ((((arr_1 [i_14] [1]) ? var_3 : 5797853783120611817)))))));
                            var_31 = ((178 ? ((((((arr_34 [18] [i_13] [i_6] [i_15]) ? var_10 : 1892275374)) > (arr_45 [i_15 + 1] [8] [i_15] [i_15 + 1] [i_15] [i_15] [i_15])))) : 188));
                            arr_46 [3] [i_6] [i_10] [3] [i_14] [i_14] [i_14] = var_0;
                            var_32 = max(0, (max(12648890290588939808, 17121606794380160923)));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_16 = 0; i_16 < 22;i_16 += 1)
        {
            var_33 = (max(var_33, (((0 ? (arr_36 [i_16] [i_16] [2]) : (arr_36 [i_16] [i_16] [i_16]))))));
            var_34 = (arr_0 [i_6]);
        }
        arr_49 [i_6] [5] = (arr_41 [i_6] [18] [i_6]);
    }
    var_35 = (max(var_35, var_12));
    var_36 = ((!(min(var_17, 1))));

    for (int i_17 = 1; i_17 < 1;i_17 += 1) /* same iter space */
    {
        arr_52 [i_17] [i_17] = (min((arr_24 [i_17]), (min((arr_25 [i_17 - 1] [18] [i_17 - 1]), (63 > var_11)))));
        var_37 = ((240 + ((((((arr_19 [i_17]) & (arr_24 [11])))) ? (((arr_41 [i_17] [i_17] [i_17]) << (arr_9 [i_17] [i_17] [i_17] [i_17]))) : (!var_1)))));
    }
    /* vectorizable */
    for (int i_18 = 1; i_18 < 1;i_18 += 1) /* same iter space */
    {
        var_38 |= (arr_47 [i_18 - 1]);
        var_39 = (((((var_15 ? var_8 : (arr_40 [i_18] [7] [i_18 - 1] [i_18 - 1])))) && -1892275389));
    }
    #pragma endscop
}
