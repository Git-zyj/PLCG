/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= var_5;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_20 = -57;
            var_21 = ((((var_17 * (max(var_8, 40204)))) * -240));
            var_22 = (((((((arr_0 [i_1]) > (arr_0 [i_1]))))) != (arr_1 [i_0])));
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_23 = (max((((arr_0 [i_0]) ? -40203 : (arr_3 [i_0] [i_2]))), 1));
            var_24 = var_14;
        }
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            var_25 -= (((var_12 + var_17) ? ((((arr_7 [i_3 - 1] [i_3 + 1]) - (arr_7 [i_3 - 1] [i_3 - 1])))) : ((-(max(var_18, (arr_0 [i_0])))))));
            var_26 = (~var_10);
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 8;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_27 = var_6;
                            var_28 = ((!(((((max(var_12, 2275740291277854243))) & (max((arr_12 [i_0] [i_4] [i_5] [i_6]), 4294967286)))))));
                            var_29 = ((~((238 ? 6945 : (arr_9 [i_4 + 2] [i_3] [5] [i_5])))));
                            var_30 = min((((arr_11 [i_0] [i_4 + 2]) ? 85 : (arr_11 [i_6] [i_3]))), (arr_11 [i_6] [i_0]));
                            var_31 = -35;
                        }
                    }
                }
            }
            var_32 = ((((((0 ? 3 : 1)))) ? (((+(min((arr_14 [i_0] [i_0] [i_3 + 1] [i_3 + 1]), 1))))) : ((7963431454359675295 ? ((((arr_8 [i_0]) + var_15))) : 4686596281567084042))));
        }
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 8;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 8;i_8 += 1)
            {
                {
                    var_33 = (arr_4 [i_7 + 1] [i_7 + 1] [i_7 + 1]);
                    var_34 = (min(((+(((arr_22 [i_8] [i_8] [i_0]) + (arr_6 [i_8] [9]))))), ((((arr_17 [i_8 + 1]) != (arr_17 [i_8 + 1]))))));
                    var_35 = ((((((arr_21 [i_7] [i_8] [i_8 - 1] [i_7 - 1]) & var_6))) ^ (255 ^ 18446744073709551615)));
                }
            }
        }
        var_36 |= (max((min(((1867734900 >> (var_2 - 548201300))), 584164023)), (~114)));
    }
    for (int i_9 = 0; i_9 < 25;i_9 += 1)
    {

        /* vectorizable */
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            var_37 *= 1018;

            for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
            {

                for (int i_12 = 4; i_12 < 23;i_12 += 1) /* same iter space */
                {
                    var_38 = 55;
                    var_39 = (max(var_39, (2715665353 ^ var_18)));
                }
                for (int i_13 = 4; i_13 < 23;i_13 += 1) /* same iter space */
                {
                    var_40 = var_2;
                    var_41 = 40204;
                    var_42 = (((arr_35 [i_13 + 2] [i_13 - 4] [i_13] [i_13 - 3] [i_13 + 2]) || (arr_35 [i_13 + 1] [i_13 + 1] [7] [i_13 + 1] [i_13 + 2])));
                }
                for (int i_14 = 4; i_14 < 23;i_14 += 1) /* same iter space */
                {
                    var_43 -= ((var_8 << ((((~(arr_36 [i_9] [i_10] [i_11] [i_10] [i_14 - 3] [i_9]))) - 3696560007))));
                    var_44 = (~var_7);
                    var_45 = (arr_29 [i_9] [i_10] [1] [i_14]);
                }
                var_46 = 8128;
                var_47 = 5797286053941329823;
                var_48 = ((-(arr_27 [i_11] [i_10] [9])));
            }
            for (int i_15 = 0; i_15 < 25;i_15 += 1) /* same iter space */
            {
                var_49 = ((!(!2307399433)));
                var_50 = 255;
            }
            for (int i_16 = 0; i_16 < 25;i_16 += 1) /* same iter space */
            {
                var_51 -= (23954 && 179);
                var_52 = (((~64512) == var_5));
            }
        }
        for (int i_17 = 0; i_17 < 25;i_17 += 1)
        {
            var_53 ^= (!1313684513);

            for (int i_18 = 1; i_18 < 1;i_18 += 1)
            {
                var_54 = (~1);
                var_55 = ((((1304826941 + ((-70 ? 18014398509219840 : 2147483647)))) + (((-(arr_30 [i_18 - 1]))))));
                var_56 += 1;
            }
            var_57 += ((var_8 ? (arr_34 [i_17] [i_17] [17] [i_9] [17] [17]) : 7475593));
        }
        var_58 = (((((~4121130138686968946) | ((((arr_41 [i_9] [i_9] [1] [i_9]) ? (arr_38 [i_9] [i_9] [i_9] [i_9]) : 58063))))) >> (((((((min((arr_42 [7] [7] [i_9] [i_9]), var_16)))) & (arr_29 [i_9] [i_9] [i_9] [i_9]))) - 114))));
        var_59 -= ((89 ? ((-var_4 - (arr_44 [i_9] [i_9]))) : (arr_35 [i_9] [i_9] [i_9] [i_9] [i_9])));
        var_60 = 140;
    }
    #pragma endscop
}
