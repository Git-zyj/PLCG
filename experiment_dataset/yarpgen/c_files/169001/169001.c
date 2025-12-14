/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [i_1] = ((+(min(60, (((arr_4 [i_0]) * (arr_0 [1] [i_0])))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 18;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_14 [i_0] [i_3] [i_2] [i_3] [1] [i_4] &= arr_1 [i_2];
                            var_19 = ((((((arr_12 [i_0] [3] [i_1]) && (arr_9 [i_0] [i_0] [i_2] [i_3] [i_0])))) <= (((arr_8 [i_3] [4] [i_3 + 2]) << (92 - 72)))));
                            var_20 = ((~((60 >> (((arr_13 [i_0] [i_1] [i_2] [17]) - 118))))));
                        }
                        for (int i_5 = 4; i_5 < 20;i_5 += 1)
                        {
                            var_21 *= (((-(arr_11 [18] [i_5] [i_5 - 3] [i_5 - 3] [i_5 - 2] [i_2]))) == ((((arr_11 [i_5] [i_5] [i_5] [i_5] [i_5 - 2] [i_2]) != (arr_11 [i_5] [i_5 - 3] [i_5] [i_5 - 2] [i_5 - 2] [i_2])))));
                            arr_17 [7] [i_3] [i_1] [i_1] [16] [i_0] = (((-((-(arr_16 [i_3]))))));
                        }
                        arr_18 [i_1] [7] [3] [i_3] [1] [i_0] = ((-(--152)));
                        arr_19 [i_1] [i_1] [i_1] = (i_1 % 2 == 0) ? ((max(((-(((arr_9 [i_0] [i_0] [i_2] [i_2] [i_3]) + 17)))), ((((max((arr_12 [i_1] [i_2] [i_1]), (arr_4 [i_1])))) >> (((arr_7 [0] [i_3 - 1] [i_1] [i_3 + 3]) + 112))))))) : ((max(((-(((arr_9 [i_0] [i_0] [i_2] [i_2] [i_3]) + 17)))), ((((max((arr_12 [i_1] [i_2] [i_1]), (arr_4 [i_1])))) >> (((((arr_7 [0] [i_3 - 1] [i_1] [i_3 + 3]) + 112)) - 71)))))));
                    }
                }
            }
            arr_20 [i_1] = ((((-0 / (((1 || (arr_3 [i_0] [i_0])))))) - (max(1, (((-36 + 2147483647) >> (arr_10 [i_0] [i_0] [i_0] [i_1])))))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 20;i_8 += 1)
                {
                    {
                        var_22 = (arr_9 [i_7] [i_7] [i_6] [i_8 + 1] [i_7]);
                        var_23 = (max(var_23, (((!(arr_3 [i_8 - 1] [i_6]))))));
                        arr_27 [i_0] [i_0] [i_7] [i_6] = (((arr_26 [i_8] [i_7] [i_0] [i_0]) >> (-35 + 40)));
                        var_24 = 0;
                    }
                }
            }
            arr_28 [i_6] = 0;
        }
        for (int i_9 = 3; i_9 < 20;i_9 += 1)
        {
            arr_31 [2] [7] [i_9] = (((((((max((arr_13 [i_0] [i_0] [i_9 + 1] [10]), -13))) != ((max(65, (arr_16 [i_0]))))))) <= ((-((((arr_11 [i_0] [i_0] [i_0] [i_9 - 1] [i_9] [i_0]) == (arr_5 [i_0] [i_0]))))))));

            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                arr_35 [i_10] [i_9] [i_9] [i_0] = ((((~((max((arr_0 [1] [i_9]), -107))))) | ((min((((1 != (arr_12 [i_0] [i_0] [i_9])))), (arr_22 [i_0] [i_9 - 2] [i_9]))))));
                var_25 *= (((--19) <= (((arr_4 [i_9 - 2]) >> ((((min((arr_9 [i_0] [i_9 - 3] [i_9] [13] [i_10]), (arr_2 [0] [i_0] [0])))) - 60))))));
            }
        }
        var_26 = 97;
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
    {
        var_27 = (max(var_27, (((((arr_9 [i_11] [i_11] [i_11] [i_11] [i_11]) ^ (arr_37 [11] [i_11]))) == (-13 != 0)))));
        var_28 = ((((arr_11 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]) > (arr_5 [i_11] [i_11]))));
    }
    var_29 &= (var_15 + var_13);

    for (int i_12 = 0; i_12 < 0;i_12 += 1)
    {
        var_30 *= (max(-1, (arr_7 [i_12] [10] [1] [10])));
        arr_40 [i_12] = (arr_33 [i_12] [i_12]);
        var_31 = (max(((((-(arr_15 [0] [i_12]))) - ((min((arr_12 [1] [i_12] [1]), -79))))), (max(((31 + (arr_15 [14] [i_12 + 1]))), (arr_1 [i_12])))));
    }
    var_32 = (max(var_6, (+-8)));
    #pragma endscop
}
