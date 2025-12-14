/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
            {
                arr_8 [14] [i_1] [14] |= min(-6354, 1091603045);
                var_17 = ((-((var_14 - (arr_6 [i_0] [13] [i_2] [i_2])))));
                arr_9 [i_2] [i_0] [i_0] = (-1684038810 ? 4918 : 1306507913);
                arr_10 [8] [i_0] = ((12602 || (arr_0 [0])));
            }
            for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
            {
                arr_14 [i_0] [i_0] [i_3] [13] = ((-var_11 ? (~var_7) : (max(-1603777748, -1))));
                arr_15 [i_0] [i_0] = min((min(1698710824, var_14)), (~var_5));
            }
            var_18 = ((max((arr_5 [i_0] [i_0]), (arr_12 [i_1 + 1] [i_0] [i_0] [i_1 + 1]))) ^ (arr_13 [i_0] [i_0] [i_0] [1]));
        }
        var_19 = min((max((arr_0 [i_0]), var_15)), (arr_3 [i_0]));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 13;i_7 += 1)
                        {
                            {
                                arr_27 [10] [i_4] [i_4] [i_4] [i_6] [i_4] &= (max((var_12 < -881918749), (((arr_21 [i_5]) ? var_1 : var_5))));
                                var_20 -= (max(((-(arr_12 [0] [i_4] [i_7] [i_4]))), var_8));
                                var_21 &= var_1;
                                var_22 = ((353575164 ? -1 : -1));
                            }
                        }
                    }
                    var_23 = (min(var_23, ((((max(1716311882, -892690290) + var_5))))));
                }
            }
        }
    }
    for (int i_8 = 1; i_8 < 21;i_8 += 1)
    {
        var_24 -= ((min(var_8, (~var_13))));
        var_25 = (-(min((arr_28 [i_8]), (arr_28 [i_8]))));

        for (int i_9 = 2; i_9 < 21;i_9 += 1)
        {
            var_26 = min(2147483618, ((2147483647 ? -872554465 : 12280)));
            var_27 &= (((((var_1 >> (var_2 + 620718968))) < (arr_31 [6]))));
        }
    }
    /* vectorizable */
    for (int i_10 = 2; i_10 < 12;i_10 += 1)
    {
        var_28 = ((var_2 ? (arr_17 [i_10] [7]) : (arr_3 [i_10 + 3])));
        var_29 -= var_1;
        var_30 = var_13;
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 23;i_11 += 1)
    {

        for (int i_12 = 2; i_12 < 20;i_12 += 1)
        {
            var_31 = var_5;

            for (int i_13 = 2; i_13 < 21;i_13 += 1)
            {
                var_32 -= 2147483647;
                arr_42 [i_13] [i_13] = (~-11242);
            }
            var_33 = (max(var_33, (arr_41 [i_11] [i_11] [i_12] [i_12 - 2])));
            var_34 = ((arr_39 [i_12 + 3] [i_12] [i_12 - 2]) >> (var_12 + 25131));
        }
        var_35 = (max(var_35, ((~(arr_39 [i_11] [i_11] [i_11])))));
        var_36 = ((arr_39 [14] [16] [i_11]) ? (arr_41 [i_11] [i_11] [i_11] [i_11]) : (arr_41 [i_11] [i_11] [i_11] [22]));
        arr_43 [i_11] = (((arr_37 [i_11] [i_11]) + (arr_37 [10] [i_11])));
    }
    var_37 = (min(var_37, var_11));
    #pragma endscop
}
