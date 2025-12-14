/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_0] [i_0] = (~16220);

                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            var_14 = (min(var_14, (var_12 / 3405444554552966311)));
                            var_15 = -499250711643516270;
                        }
                        var_16 = ((~(-6777 > 5832840243882039383)));
                        var_17 = (~0);
                        var_18 += (((((-(arr_5 [i_2] [i_2])))) && ((max((min(var_11, 17080132570166145000)), ((((arr_1 [i_0]) & (arr_6 [4] [4] [i_2])))))))));
                        var_19 -= ((!(var_4 == 1430933733)));
                    }
                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        arr_21 [i_0] [i_1] [i_2] [i_2] = (~var_7);

                        for (int i_6 = 3; i_6 < 12;i_6 += 1)
                        {
                            var_20 = (!1063538052);
                            var_21 = ((min(((2818532418426075046 ? var_7 : 12876875781974595971), (max((arr_18 [i_0]), 10596979418699505808))))));
                            var_22 = (max(var_6, ((((arr_0 [i_5 + 1] [i_6 + 1]) != (arr_0 [i_5 + 1] [i_6 - 3]))))));
                        }
                        var_23 = var_6;
                        var_24 = (arr_11 [i_5] [i_2] [i_0] [i_0] [i_1] [i_0]);
                    }
                    for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                    {
                        arr_27 [i_0] [i_1] [i_0] [i_7] [i_1] = (arr_14 [i_0] [i_0]);
                        arr_28 [i_0] = (-3445 > -3445);
                        var_25 = (max(var_25, ((min((arr_6 [i_0] [i_1] [i_2]), (var_10 >= var_3))))));
                        var_26 = (max(var_26, ((max((arr_18 [i_1]), 10596979418699505808)))));
                    }
                    for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
                    {

                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            var_27 |= (arr_25 [i_1] [i_2] [i_8] [i_9]);
                            arr_34 [i_0] [i_0] [i_2] [i_9] = (((((((((!(arr_13 [i_0])))) >= -13798)))) >= (6973635482208295352 | -2707)));
                            var_28 = (((18446744073709551615 == 4294967295) * (!var_9)));
                        }

                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            var_29 = (-((((var_2 ? 16252928 : (arr_0 [i_0] [i_1]))) + ((max((arr_19 [i_1] [i_1] [i_8]), var_2))))));
                            var_30 = ((~(arr_15 [i_0] [i_1] [i_1] [i_8] [i_10] [i_10])));
                            var_31 = (((((var_12 & (arr_32 [i_0] [i_0] [8] [i_8] [i_10])))) / 3600331185));
                            var_32 -= 0;
                            var_33 = ((!(-9223372036854775807 - 1)));
                        }
                    }
                }
            }
        }
    }
    var_34 = var_8;
    var_35 -= (((((750829458 ? -1300963611674810821 : 449596863) % 1345167615))));
    var_36 = ((((max(0, var_3))) ^ (var_12 != -var_10)));
    #pragma endscop
}
