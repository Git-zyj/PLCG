/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_10 = (arr_3 [i_0] [i_1]);
            var_11 = (min(var_11, (((~(arr_6 [i_0] [i_0] [i_1]))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            arr_11 [i_0] = ((((((arr_0 [i_2] [i_0]) ? (arr_8 [i_0] [i_2]) : (arr_9 [i_0] [i_0])))) ? (arr_0 [i_2] [i_0]) : (arr_6 [i_0] [i_2] [i_2])));
            var_12 = 58517;
        }
        var_13 = (max(((-1 ? (max((arr_6 [i_0] [i_0] [i_0]), 4294967286)) : (arr_5 [i_0]))), 21));
        arr_12 [i_0] = ((-32756 ? -99 : var_9));
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 2; i_4 < 14;i_4 += 1)
        {
            arr_18 [i_3] [i_3] = (((min((arr_17 [i_3] [i_3]), (((arr_7 [i_3]) ? (arr_8 [i_4] [i_4]) : (arr_8 [i_4 - 2] [i_4]))))) / var_2));
            var_14 = ((-((min(var_6, (-51 >= 1693955129))))));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_15 = 58517;
            arr_21 [i_3] [i_5] = (min(0, 18));
            var_16 = (arr_14 [i_5] [i_3]);
        }

        for (int i_6 = 2; i_6 < 15;i_6 += 1)
        {
            var_17 += ((min(((min(var_9, (arr_2 [i_3] [i_6 + 1])))), -66)));

            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_18 = ((max(((var_6 ? (arr_10 [i_3]) : 56898)), (8646 - 65535))));
                var_19 = (max(var_19, var_3));
                arr_29 [i_3] [i_6] = (min((max(var_7, (arr_15 [i_3] [i_3]))), 0));
                arr_30 [i_3] [i_3] = ((((((!(arr_25 [i_3] [i_3] [i_6] [i_7]))))) && ((max((arr_10 [i_6 - 1]), (arr_10 [i_6 - 2]))))));
            }
            for (int i_8 = 3; i_8 < 13;i_8 += 1)
            {
                var_20 = (min(65, var_9));
                var_21 = (max(var_21, (((var_2 ? ((min((arr_10 [i_3]), (arr_20 [0])))) : ((61 ? 1 : ((min((arr_1 [i_3] [i_8]), (arr_1 [i_6] [i_6])))))))))));
            }
            for (int i_9 = 0; i_9 < 0;i_9 += 1)
            {
                var_22 = max(((var_8 ? (arr_5 [i_6]) : 0)), (!-966697257));
                arr_35 [i_3] [i_3] [i_3] [i_9] = (max((((!(arr_0 [2] [1])))), (((((arr_27 [i_3]) ? 1 : var_1)) - (228 && 65)))));
            }
            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {

                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    var_23 = ((4011459349 ? (!31250) : ((min((min(1, var_8)), (!75))))));
                    var_24 = 8637;

                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        arr_43 [i_3] [i_6 - 1] [5] [i_11] [i_11] [i_10] = (((arr_28 [i_3] [i_6 + 1]) ? ((min((min(4, (arr_25 [i_3] [i_3] [i_10] [i_11]))), (arr_36 [i_3] [i_11] [i_3])))) : (arr_34 [i_10] [i_10] [i_6] [12])));
                        var_25 = (min(var_25, (((((28 ? 43526 : var_3)))))));
                        arr_44 [i_3] [i_3] [i_3] [0] [i_3] = ((+((((arr_26 [i_3] [i_6]) >= 8652)))));
                        var_26 = (max(var_26, var_0));
                        var_27 *= (((((-(max(-66, 423596526))))) ? (arr_8 [i_11] [i_12]) : (!var_1)));
                    }
                }

                for (int i_13 = 0; i_13 < 16;i_13 += 1)
                {

                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        arr_51 [i_10] [i_6] [i_3] |= ((((((arr_13 [i_14]) ? (((arr_40 [3] [i_6] [i_3]) ? var_4 : 13615)) : 65533))) ? (min((arr_19 [i_13] [i_13]), (arr_25 [12] [i_10] [i_10] [i_13]))) : (((((max(26164, var_9))) <= (arr_1 [i_6 - 1] [i_6 - 1]))))));
                        var_28 = (-(((arr_13 [i_6 - 1]) ? (arr_33 [i_3] [i_10] [1] [i_3]) : 18)));
                        var_29 = (arr_37 [i_3] [i_3] [i_3] [i_3]);
                    }
                    var_30 = 112;
                    var_31 = (arr_48 [i_3] [i_6] [i_3] [9]);
                }
                /* vectorizable */
                for (int i_15 = 0; i_15 < 16;i_15 += 1)
                {
                    var_32 = 1;
                    var_33 ^= (arr_0 [i_3] [i_6]);
                    arr_54 [i_3] [i_3] [i_10] [i_15] = (arr_45 [i_15] [i_6 - 1] [i_15] [i_15]);
                }
                var_34 = (arr_50 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_10]);
                var_35 = (((arr_3 [i_3] [i_3]) ? (arr_42 [i_6 - 1] [i_6 - 1]) : ((((((((arr_23 [i_10] [i_6 - 2] [i_3]) || (arr_4 [i_3]))))) / 579298701)))));
            }
        }
    }
    var_36 = var_2;
    var_37 = var_5;
    var_38 = 4023894326;
    #pragma endscop
}
