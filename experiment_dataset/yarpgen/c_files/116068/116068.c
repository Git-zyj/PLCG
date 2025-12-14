/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_2;
    var_20 &= (~var_16);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {

                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            arr_13 [i_0] [1] [i_1] [1] [1] [4] [1] = 24;
                            var_21 *= ((((arr_3 [i_0]) ? 15 : 226)));
                        }
                        var_22 = 32750;
                        arr_14 [14] [12] [14] [18] [14] = 247;
                        arr_15 [1] [i_1] [1] [i_1] [i_2] [i_3] = (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2]);
                        arr_16 [11] [i_2 - 2] [i_3] = (arr_9 [i_0]);
                    }
                }
            }
        }
        var_23 = (((arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? (arr_10 [i_0] [i_0] [i_0 - 1]) : (arr_8 [i_0 - 1] [12] [i_0 - 1] [i_0 - 1] [i_0 - 1])));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 17;i_6 += 1)
            {
                {
                    var_24 = (~136);
                    var_25 = arr_11 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5] [9] [12];
                }
            }
        }
        var_26 ^= (arr_4 [i_0] [7]);

        for (int i_7 = 4; i_7 < 19;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                var_27 = arr_12 [i_0] [4] [i_0] [i_7 + 1] [i_0 - 1];
                var_28 = (arr_0 [i_0]);
            }
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                var_29 = (min(var_29, (arr_25 [i_0] [i_7 - 3])));
                var_30 = (!(arr_1 [i_7] [i_7]));
                arr_33 [i_0] [i_7 - 3] = (~-509811710);
            }
            var_31 = (arr_24 [i_7 - 4]);
            var_32 = ((-(arr_31 [i_0 - 1] [i_0 - 1] [i_0 - 1])));
        }
    }
    for (int i_10 = 0; i_10 < 16;i_10 += 1)
    {
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 14;i_12 += 1)
            {
                for (int i_13 = 3; i_13 < 15;i_13 += 1)
                {
                    {
                        arr_44 [4] [1] [i_11] [i_13] [1] = ((min(-0, (((!(arr_1 [i_10] [8])))))));
                        var_33 = (min(var_33, ((-((min((arr_5 [i_10] [i_11] [i_10]), (arr_39 [i_13 - 2] [i_13 - 2] [i_13 - 1]))))))));
                        arr_45 [14] [i_11] [i_12] [i_13] = arr_11 [i_10] [i_10] [i_12] [i_13] [i_13] [i_13];
                    }
                }
            }
        }
        var_34 = (min((arr_26 [3] [i_10] [i_10] [i_10]), ((-(arr_26 [i_10] [i_10] [i_10] [1])))));
    }
    var_35 = (max(var_35, ((min(var_17, 0)))));
    var_36 = var_11;
    #pragma endscop
}
