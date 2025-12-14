/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_11 ? (((255 * ((3242386136 ? var_11 : 27))))) : var_16));

    for (int i_0 = 2; i_0 < 20;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_4 [i_0] [i_1] [i_1] = ((-((72 ? -2147483647 : (arr_0 [i_0 - 1])))));
            var_18 = ((+((max((!722743708), 812)))));
            var_19 = (arr_3 [i_0] [i_1] [i_1]);
            var_20 = ((-(max(3876190588826242007, 32767))));
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_21 ^= ((-(((arr_8 [i_0] [2] [i_0 + 1]) ? (arr_8 [i_0 + 2] [8] [i_0 + 1]) : var_5))));
            var_22 = (max(var_22, ((((-(arr_6 [i_0] [i_2] [i_0 + 1])))))));
            var_23 = (min(63, (max(2147479552, 16777215))));
            arr_9 [i_2] [12] [i_2] = (min((((((536870912 ? var_12 : var_11)) != var_7))), (arr_1 [i_0])));
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            var_24 = ((var_15 ? (arr_7 [i_0 + 2] [i_0]) : var_16));
            var_25 = ((-22081 ? 722743708 : (arr_1 [i_0 + 1])));
            arr_12 [i_3] [i_3] = -13566;
        }
        var_26 = ((var_8 ? ((max((arr_7 [i_0 + 2] [i_0]), var_6))) : (min(((10090 ? 0 : -2476545297601253135)), (!var_4)))));
        arr_13 [i_0] = min((((-106 + 2147483647) << ((((((58 ? -3631887069932522965 : 15)) + 3631887069932522966)) - 1)))), ((-((29 ? (arr_3 [i_0] [i_0] [i_0]) : 10090)))));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                {
                    var_27 = (max(((-(arr_3 [i_4 + 1] [i_4] [i_0 + 1]))), ((max((arr_3 [i_4 + 1] [i_4 + 1] [i_0 + 2]), (-32767 - 1))))));
                    var_28 = ((-((-((0 ? 722743708 : 77))))));
                }
            }
        }
        var_29 = 14271;
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 20;i_6 += 1) /* same iter space */
    {

        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            arr_26 [i_6] [10] = (((arr_6 [i_6 + 2] [i_6 + 1] [i_6 + 2]) ? -var_4 : (arr_2 [i_6 - 1] [i_6 - 1])));
            arr_27 [i_6] [i_6] = -63;
            arr_28 [i_7] [i_6] = ((+(((arr_17 [i_6] [i_6] [i_6]) ? var_3 : 337176242))));
        }
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        var_30 = 638706568;
                        var_31 |= (arr_36 [i_6 - 1] [9] [i_9] [i_10] [i_10]);
                        var_32 = var_0;
                        arr_37 [i_6] [i_8] [7] [0] = ((!(arr_11 [i_6 - 1])));
                    }
                }
            }
            var_33 = ((+(((arr_11 [i_8]) ? 255 : var_4))));
            arr_38 [i_6] = 15875;
            arr_39 [i_6] [i_8] [i_8] = (-(arr_19 [i_8]));
        }
        arr_40 [i_6] [i_6] = 2159178640;
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 20;i_12 += 1)
            {
                {
                    var_34 = ((-(arr_6 [i_6 + 1] [i_11] [4])));
                    var_35 = 0;
                    var_36 = ((-(arr_11 [i_6 + 1])));
                }
            }
        }
        var_37 = (!622559491);
        var_38 = 3;
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 23;i_13 += 1)
    {
        var_39 = 208;
        var_40 &= (-(4128332372 > 122));
    }
    #pragma endscop
}
