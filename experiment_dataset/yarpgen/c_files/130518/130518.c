/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_3;
    var_21 = (min(var_21, -905027513));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_22 = (!var_10);

        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            var_23 = (min(5782, 0));
            var_24 = (max(((((min((arr_2 [i_1 + 1]), (arr_1 [21])))) ? (arr_5 [i_1] [i_1]) : ((var_4 ? 0 : -92920691)))), (max(((92920716 ? 5223 : var_7)), -4038))));
            arr_6 [i_0] [i_1 - 1] [i_1] = (i_1 % 2 == 0) ? ((min(-31628, (((((arr_5 [i_1] [i_1 + 1]) + 2147483647)) << (((((arr_5 [i_1] [i_1 + 2]) + 171332358)) - 18))))))) : ((min(-31628, (((((((arr_5 [i_1] [i_1 + 1]) - 2147483647)) + 2147483647)) << (((((((arr_5 [i_1] [i_1 + 2]) + 171332358)) - 18)) - 622189951)))))));
        }
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            var_25 = ((((max(0, 0))) ^ ((min((arr_3 [i_2 + 1]), var_11)))));
            var_26 *= (!0);
            var_27 = ((5971 <= 0) & (~0));
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            var_28 = ((+(((~23492) ? -1379126761 : (((!(arr_7 [i_0] [i_3] [i_0]))))))));
            var_29 = (max(21007, ((max(-45, 0)))));
            var_30 = 0;
        }
        var_31 = (max(((min((arr_4 [i_0] [i_0] [i_0]), (arr_4 [i_0] [i_0] [i_0])))), (arr_0 [i_0] [i_0])));
        arr_12 [i_0] = (max((max(((min(var_11, 0))), (max(0, var_12)))), ((min(0, 0)))));
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    {
                        var_32 |= (max((min(((~(arr_8 [i_4] [i_5]))), ((max(-28860, 0))))), 0));
                        var_33 = var_8;
                        var_34 = (min(1, (((((var_15 >= (arr_23 [i_4] [i_5] [i_5] [i_6] [i_4] [i_7])))) * var_4))));
                        var_35 = ((~(((arr_23 [i_6 - 1] [i_6 - 1] [i_6] [i_6] [i_6 + 2] [i_6 - 1]) ? (~var_18) : (arr_15 [i_6 - 1] [i_6])))));
                        var_36 = -28860;
                    }
                }
            }
        }
        var_37 |= ((-(min(var_9, ((var_17 + (arr_5 [i_4] [i_4])))))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        var_38 = (min(var_38, ((-(arr_7 [i_8] [i_8] [i_8])))));
        var_39 = ((-(arr_7 [i_8] [i_8] [i_8])));
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 19;i_9 += 1)
    {
        var_40 = var_9;
        var_41 = (max(var_41, ((((arr_29 [i_9 - 1]) ? (arr_29 [i_9 - 1]) : (arr_29 [i_9 - 1]))))));
        var_42 -= var_4;
        var_43 += var_9;
    }

    /* vectorizable */
    for (int i_10 = 2; i_10 < 11;i_10 += 1)
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                {
                    var_44 = (0 ? (arr_8 [i_10 + 2] [i_10 + 1]) : (arr_8 [i_10 + 1] [i_10 - 2]));
                    var_45 = (min(var_45, var_13));
                    var_46 = ((!(arr_30 [i_10])));

                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        arr_42 [0] [0] [i_11] [i_12] [i_13] = (((((var_8 != (arr_33 [i_10] [i_11])))) + -1617157989));
                        var_47 = var_7;
                    }
                }
            }
        }
        var_48 &= (((arr_5 [i_10] [i_10]) ? (arr_5 [i_10] [i_10]) : (arr_5 [i_10] [i_10])));
    }
    #pragma endscop
}
