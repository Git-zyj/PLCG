/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_6 ? ((((min(var_3, var_3))) ^ var_3)) : (max(405994959, 150))));
    var_12 = (max(var_12, (!405994959)));
    var_13 = var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_14 = (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0])));
        var_15 = 405994948;

        for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
        {
            var_16 = (((var_9 - 0) ? 696917180 : (arr_3 [i_1])));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_17 -= (var_9 ? (arr_2 [i_3] [i_3]) : (13738 & -871513020));
                            var_18 = ((405994936 << (((-26741 + 26769) - 26))));
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    {
                        var_19 = ((((122 / (arr_8 [i_0]))) > 13));

                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            var_20 = (-13740 ^ -32766);
                            var_21 = var_9;
                        }
                        var_22 = (--999691998);
                        var_23 = (max(var_23, (((var_2 ? 32746 : (arr_16 [i_0]))))));
                    }
                }
            }
            var_24 = (((((arr_4 [i_5]) ? (arr_1 [i_0]) : 21784)) > 405994923));
            var_25 = (((arr_19 [i_0] [i_5] [i_0] [i_0] [i_5]) || 0));
            var_26 = ((-405994910 ? (999692001 != var_2) : ((4294967281 ? (arr_4 [i_0]) : -32746))));
        }
    }
    for (int i_9 = 0; i_9 < 16;i_9 += 1)
    {
        var_27 = ((((((arr_24 [i_9]) ? (max(13, 50)) : -405994944))) ? (((1 && 535237829) ^ ((var_10 ? (arr_24 [i_9]) : (arr_24 [i_9]))))) : 90));
        var_28 = (max(var_28, (arr_25 [i_9])));
        var_29 = (45973 < 195676757);
        var_30 |= (((89 >= 13738) ? ((+((max((arr_25 [i_9]), (arr_24 [i_9])))))) : ((2904684056 ? ((var_6 ? (arr_25 [1]) : (arr_25 [i_9]))) : (22660 ^ -15845)))));
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 11;i_10 += 1)
    {

        for (int i_11 = 2; i_11 < 12;i_11 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 14;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 14;i_13 += 1)
                {
                    {
                        var_31 = ((0 ? (arr_27 [i_10 + 3]) : (arr_24 [i_10 + 1])));
                        var_32 = (min(var_32, (((+(((arr_30 [i_13]) ? var_1 : var_3)))))));
                        var_33 = var_2;
                        var_34 = ((-544449236 ? -7780 : 3710106965546528928));
                    }
                }
            }
            var_35 = (((arr_29 [i_11] [i_11 + 2] [i_10]) ? 14736637108163022687 : 91));
            var_36 = arr_34 [i_10 + 3] [i_10] [i_10 + 3];
        }
        for (int i_14 = 2; i_14 < 12;i_14 += 1) /* same iter space */
        {
            var_37 = (((arr_30 [i_14 - 1]) ? (((arr_28 [9]) ? (arr_31 [0] [i_14]) : 1908724385)) : (arr_25 [i_14 - 2])));
            var_38 = ((-(arr_30 [5])));
            /* LoopNest 3 */
            for (int i_15 = 4; i_15 < 11;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 14;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 14;i_17 += 1)
                    {
                        {
                            var_39 = (max(var_39, ((((((arr_37 [i_15] [i_17]) ? 1 : 14736637108163022687)) > (arr_43 [i_10] [i_10]))))));
                            var_40 = ((-106 ? (arr_27 [i_10 + 2]) : (arr_35 [i_10 - 1] [i_16] [i_17])));
                            var_41 = 1;
                            var_42 = ((((((arr_26 [10] [i_14]) >= (arr_39 [i_10 + 1] [i_10 + 1] [i_15] [i_15])))) - var_3));
                        }
                    }
                }
            }

            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {
                var_43 ^= (((arr_32 [i_10] [i_10 + 3] [i_14 - 2]) | (((arr_41 [i_10] [i_14] [i_18] [i_18]) & (arr_24 [i_18])))));
                var_44 = (4294967276 - 0);
            }
        }
        for (int i_19 = 0; i_19 < 0;i_19 += 1)
        {

            for (int i_20 = 1; i_20 < 11;i_20 += 1) /* same iter space */
            {
                var_45 = (arr_35 [i_20] [i_19] [7]);
                var_46 = (arr_33 [i_10]);
                var_47 = var_4;
            }
            for (int i_21 = 1; i_21 < 11;i_21 += 1) /* same iter space */
            {
                var_48 |= ((((var_5 ? (arr_24 [i_19]) : (arr_32 [i_10] [i_19] [i_21])))) && 69);
                var_49 = ((-((11060850554560858036 << (((arr_40 [i_10]) - 2314023381741480289))))));
            }
            var_50 = 30;
            var_51 = ((!(((19320 ? 9221856683427837377 : (arr_46 [i_10] [i_19] [8]))))));
            var_52 = 106;
        }
        var_53 ^= -405994944;
    }
    var_54 |= var_4;
    #pragma endscop
}
