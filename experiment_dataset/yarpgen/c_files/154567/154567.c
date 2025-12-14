/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_17 *= (min((arr_1 [i_0] [i_2 + 2]), ((min(47243, (!42457))))));
                    var_18 = (arr_2 [i_1] [i_0]);
                    arr_11 [i_2 + 1] [10] [i_0] [i_0] = (arr_3 [i_0] [i_0]);
                    arr_12 [i_0] = ((-(arr_9 [i_2 + 2] [i_2 + 4] [i_2 + 2] [i_2 + 4])));
                }
            }
        }
        var_19 = -137;
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_20 &= ((max((max(132, (arr_9 [i_0] [i_0] [i_4] [i_5])), ((max((arr_7 [i_3] [i_3] [1]), (arr_15 [i_0] [i_4]))))))));
                        arr_21 [i_0] [i_3] [i_5] [i_5] = (arr_5 [i_0] [i_0]);
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        var_21 = (arr_23 [17]);
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                {
                    var_22 = ((-(min(103, (arr_23 [i_6])))));
                    arr_31 [i_6] = (((-(min(11910488108020102692, (arr_23 [i_6]))))));
                }
            }
        }
        var_23 = (min(var_23, (arr_25 [i_6] [i_6])));
    }
    for (int i_9 = 2; i_9 < 8;i_9 += 1) /* same iter space */
    {
        var_24 = (arr_3 [i_9] [i_9]);
        var_25 = (min(var_25, ((((-(arr_27 [i_9] [i_9 + 3] [i_9] [i_9 + 1])))))));

        /* vectorizable */
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {
                    {
                        var_26 = (arr_2 [i_9 + 2] [i_9 - 2]);
                        var_27 += (arr_39 [i_9 + 2] [i_9 - 2] [i_9 - 1] [i_9 + 2]);
                        var_28 = (max(var_28, (arr_18 [i_9] [i_10] [i_11] [i_12])));
                    }
                }
            }
            var_29 = (min(var_29, (arr_26 [i_9 + 1] [i_10])));
        }
        var_30 = -23072;
        arr_42 [i_9] = (arr_37 [i_9] [i_9]);
    }
    for (int i_13 = 2; i_13 < 8;i_13 += 1) /* same iter space */
    {
        arr_46 [i_13] &= (max((arr_20 [i_13] [i_13 - 1] [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_13]), ((+((min((arr_45 [i_13]), (arr_16 [i_13] [11] [i_13]))))))));
        var_31 = ((~((((-(arr_17 [i_13] [i_13 + 1] [i_13 - 1] [i_13])))))));
    }
    var_32 += var_14;
    var_33 &= var_1;
    var_34 = -22;
    #pragma endscop
}
