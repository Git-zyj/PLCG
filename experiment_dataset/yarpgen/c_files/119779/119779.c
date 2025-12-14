/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_4 [12] [3] [i_1] = var_10;
            var_19 = ((var_16 < ((((!(arr_1 [i_0])))))));
        }
        for (int i_2 = 3; i_2 < 17;i_2 += 1)
        {
            arr_8 [i_0] [2] = -11;
            arr_9 [i_2] = ((((((var_5 == var_8) ? ((((arr_0 [i_0]) != 127))) : var_11))) <= ((var_12 ? var_16 : var_10))));
        }
        var_20 = (((!(((var_16 >> (9981 - 9954)))))));
        var_21 = (((var_12 / (arr_0 [i_0]))));
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {

        for (int i_4 = 2; i_4 < 15;i_4 += 1)
        {
            var_22 = (min((arr_7 [i_3] [i_3]), var_14));
            var_23 = (arr_12 [i_3] [i_4]);
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_24 = ((1 ? (~65535) : 1));
                        var_25 = 1;

                        for (int i_7 = 3; i_7 < 17;i_7 += 1)
                        {
                            var_26 = (max(((((arr_11 [i_4 - 2]) >= (arr_11 [i_4 - 2])))), ((((16777215 ? (arr_7 [i_3] [i_3]) : var_6)) - var_7))));
                            arr_21 [i_3] [i_4] [i_3] = ((((arr_0 [i_7]) > ((((arr_18 [i_3]) ? 1 : var_8))))));
                            arr_22 [i_3] [i_4] [i_3] [i_6] [i_3] = ((((((9392 ? var_17 : var_9))) ? (arr_6 [i_5] [i_4 + 1] [i_4]) : ((((arr_13 [i_3]) && (arr_3 [i_3] [4] [i_7])))))));
                            var_27 = (((min(((12159929486064390816 * (arr_7 [i_3] [i_4]))), (((985738892 * (arr_15 [i_4] [i_3] [i_6] [i_6])))))) % (((((min(210642244006439238, (arr_5 [i_4])))) ? (~5722) : (arr_16 [1] [1] [i_3] [i_6]))))));
                        }
                        var_28 = (min(((max(2147483647, 106))), ((((!(arr_5 [6]))) ? var_15 : (arr_14 [i_3] [i_4] [i_4 + 2] [i_4])))));
                    }
                }
            }
        }
        arr_23 [i_3] = ((-(arr_18 [i_3])));
        arr_24 [i_3] = (max(172, (min((arr_20 [i_3] [i_3] [i_3] [1] [i_3]), (arr_20 [i_3] [i_3] [i_3] [i_3] [i_3])))));
        var_29 = (((arr_7 [i_3] [14]) ? 28 : var_13));
    }
    /* vectorizable */
    for (int i_8 = 4; i_8 < 10;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 9;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                {
                    var_30 = (((~-11) ? (arr_14 [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 3]) : 20));
                    var_31 = (((arr_13 [11]) ? (arr_2 [i_8 - 3] [i_8 + 2] [i_8]) : (arr_16 [i_8] [i_8 + 2] [i_8] [i_9 + 3])));
                    arr_34 [i_8 - 1] [i_8 - 1] [i_8] = (!(var_0 != 52340));
                }
            }
        }
        arr_35 [i_8] = (((arr_3 [i_8 - 2] [i_8 + 1] [i_8 + 1]) ? (~1) : (((arr_3 [i_8] [i_8] [i_8]) >> (var_11 + 471164988)))));
        var_32 = 209;
        var_33 = (arr_26 [i_8] [i_8 + 1]);
        var_34 = (arr_18 [i_8]);
    }
    for (int i_11 = 0; i_11 < 13;i_11 += 1)
    {
        var_35 = (((((((35 ? 1 : -4464447632082804750))) ? (arr_36 [i_11]) : (~var_4))) * var_17));
        arr_39 [i_11] [i_11] = ((!((((!24576) ? (arr_15 [i_11] [i_11] [i_11] [i_11]) : ((var_14 ? (arr_13 [i_11]) : (arr_36 [i_11]))))))));

        for (int i_12 = 0; i_12 < 13;i_12 += 1)
        {
            var_36 = 47;
            /* LoopNest 2 */
            for (int i_13 = 2; i_13 < 11;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 13;i_14 += 1)
                {
                    {
                        arr_48 [i_11] = ((~((45 ? (((3521 ? (arr_44 [i_11] [i_11] [i_11] [i_11]) : 8))) : ((var_7 ? var_3 : var_9))))));
                        var_37 = var_16;

                        for (int i_15 = 0; i_15 < 13;i_15 += 1)
                        {
                            arr_51 [i_11] [i_13] [i_14] [i_14] [i_13] [1] [i_11] = 2047;
                            var_38 = ((-(arr_15 [4] [i_11] [i_15] [i_15])));
                        }
                    }
                }
            }
        }
    }
    var_39 = (min(var_0, 852642426));
    var_40 = (1 | var_3);
    var_41 = ((var_11 ? (((((var_17 >> (7895506356748898533 - 7895506356748898518)))))) : var_4));
    #pragma endscop
}
