/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(((min((min(var_9, -1)), -52500))), ((-(min(var_9, 562812514467840))))));
    var_15 = -8139528190627814570;
    var_16 = (-206 + var_8);

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_17 = (((((!93) << (!var_12))) == ((~(arr_0 [i_0] [i_0])))));
        var_18 = var_1;
        var_19 = (--16086463160629704472);
        var_20 = ((((~(arr_0 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_21 = (arr_2 [i_1]);
        arr_4 [i_1] = 17161109845581977017;
        var_22 = ((+((-var_9 - (min((arr_3 [i_1] [i_1]), 3393874356492965043))))));
        var_23 = ((-(min(((-(arr_3 [i_1] [i_1]))), (min(14383154343356460061, (arr_0 [i_1] [i_1])))))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] &= (arr_2 [i_2]);
        arr_9 [i_2] [i_2] = (max(81, (~0)));

        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    var_24 = 1;
                    arr_17 [i_2] [6] [i_3 - 1] [i_4] [i_4] [i_5] = (arr_10 [i_2] [i_2] [i_2]);
                    var_25 = (arr_1 [i_5]);
                }
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                    {
                        var_26 = 0;
                        arr_25 [i_4] [i_2] = -4294967295;
                        var_27 = (max(var_27, ((((arr_20 [i_2] [i_2] [i_2]) || 9175801132448245860)))));
                        var_28 = (arr_1 [i_2]);
                    }
                    for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                    {
                        var_29 = 3068;
                        var_30 = (arr_18 [i_2] [i_3] [i_4] [4]);
                        var_31 = (((min(((~(arr_26 [i_2] [i_2] [i_4] [i_6] [9]))), 147)) | ((min(1, (arr_15 [i_2] [i_3 + 1] [i_4] [i_6] [i_8]))))));
                        var_32 = (((arr_11 [i_3] [i_4]) << (max((((!(arr_12 [i_2] [i_4] [i_8])))), (min(-3170915496371325012, (arr_26 [i_2] [i_3] [i_4] [i_6] [i_4])))))));
                    }
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        arr_31 [i_9] = ((~((max((arr_6 [i_2]), 0)))));
                        var_33 = (min(var_33, -3069));
                        var_34 = (arr_13 [i_3] [7] [i_9]);
                    }
                    arr_32 [i_4] [i_4] = (min((arr_29 [i_2] [i_3] [i_4] [i_6] [i_2] [i_2] [i_2]), 9029268842076530954));
                    arr_33 [i_2] [i_2] [i_3] [i_6] [i_4] [2] = arr_5 [6] [6];
                }
                var_35 = ((~(((!((min(9175801132448245860, 15052869717216586573))))))));
                arr_34 [5] [5] [i_4] = (max((arr_24 [i_3] [i_3 - 1]), (arr_18 [i_2] [i_3] [i_4] [i_4])));

                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    arr_37 [i_2] [i_3] [i_10] [i_2] = (arr_6 [1]);
                    arr_38 [i_2] [i_3] [i_10] [i_4] [i_3] [i_10] = (!219);
                }
            }
            arr_39 [i_3] = (arr_14 [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3 - 1]);
        }
        arr_40 [i_2] [i_2] = ((-(((max((arr_29 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]), var_11))))));
    }
    /* LoopNest 2 */
    for (int i_11 = 3; i_11 < 20;i_11 += 1)
    {
        for (int i_12 = 3; i_12 < 19;i_12 += 1)
        {
            {
                var_36 = (arr_47 [i_11] [i_12]);
                /* LoopNest 2 */
                for (int i_13 = 3; i_13 < 18;i_13 += 1)
                {
                    for (int i_14 = 2; i_14 < 19;i_14 += 1)
                    {
                        {
                            var_37 = (63 | 78);

                            for (int i_15 = 0; i_15 < 21;i_15 += 1)
                            {
                                var_38 *= var_3;
                                var_39 ^= (min(((max((arr_50 [i_11 + 1] [i_12 - 2] [i_13] [i_14 + 2]), (arr_50 [i_11] [i_12 + 2] [i_14 - 2] [i_15])))), (arr_52 [i_11] [i_11] [i_13 - 1] [8] [i_11] [i_15])));
                                arr_54 [i_11] [i_12 - 3] [i_14] [i_15] = arr_44 [i_11];
                                var_40 ^= (arr_46 [i_11] [i_12]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
