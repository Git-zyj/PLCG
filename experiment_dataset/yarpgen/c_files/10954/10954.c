/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_15 [i_3] [14] [i_3] [i_2] [i_1] [i_0] = ((arr_7 [i_0 + 1] [i_0 + 1] [i_2] [i_4]) != (arr_10 [i_0] [i_1] [i_1] [i_4]));
                                var_13 = -13138;
                                var_14 = var_0;
                                arr_16 [i_3] [20] = (((((((arr_3 [i_0 + 1]) || (arr_3 [i_0 + 1]))))) * (((((((arr_14 [i_0] [i_1]) && var_0)))) & var_6))));
                            }
                        }
                    }
                    arr_17 [i_0] [i_0] [i_1] [i_2] = 3818;
                    arr_18 [i_2] [i_1] [i_0] [i_0] = (((139611588448485376 | 1) ? var_1 : -1));
                    var_15 = ((-((var_1 * (arr_5 [i_2] [i_0 + 1] [i_0 + 1])))));
                }

                for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                {
                    arr_21 [21] [i_1] [i_0] [i_5] = ((((var_9 ? 1 : 61748)) - var_5));
                    arr_22 [i_0] [i_0] [i_0] = -3776;
                }
                for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                {

                    for (int i_7 = 2; i_7 < 20;i_7 += 1)
                    {
                        arr_28 [i_0] [i_7] [i_1] [i_0] [i_0] [i_7] = (((min((arr_3 [i_0 + 1]), (arr_3 [i_0 + 1])))) || ((max(3786, (arr_3 [i_0 + 1])))));
                        var_16 = ((((((arr_5 [i_0 + 1] [i_0 + 1] [i_6]) ? (arr_5 [i_0 + 1] [i_6] [i_6]) : (arr_5 [i_0 + 1] [i_1] [i_6])))) ? 4001094111 : var_8));
                        var_17 = (((var_0 ? (!1) : 4001094111)));
                        var_18 = (~var_5);
                        var_19 = (max(var_19, -1043873294));
                    }
                    for (int i_8 = 3; i_8 < 19;i_8 += 1)
                    {
                        arr_31 [i_0] [i_8] [i_8] = ((!((!(arr_14 [i_0 + 1] [i_0 + 1])))));
                        arr_32 [i_6] [i_8] = (((((arr_9 [i_8] [i_6] [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? (arr_23 [i_0 + 1]) : (min((arr_23 [i_1]), (arr_29 [i_8] [i_0] [i_1] [i_0]))))) >= ((((arr_12 [i_0 + 1]) >> (((arr_12 [i_0 + 1]) - 14849)))))));
                        var_20 = (((((arr_14 [i_6] [i_8 + 1]) ? (arr_13 [i_1] [i_6]) : (arr_10 [i_8] [i_6] [i_1] [i_0 + 1]))) >= var_8));
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        arr_36 [i_0] [i_1] [i_9] [i_9] = (((((1 ? 19879 : (0 < 0)))) ? (((((arr_24 [i_9] [i_0] [i_1] [i_0]) - -1073741824)) - (arr_14 [i_6] [i_0]))) : (arr_5 [i_0] [i_1] [i_0 + 1])));
                        var_21 = (((((((var_6 ? var_6 : var_4)) > ((((arr_14 [i_6] [i_9]) ? 1 : (arr_2 [i_6]))))))) <= ((((var_10 ? (arr_25 [i_1] [i_6] [i_1]) : var_0)) >> (arr_26 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1] [i_6] [19])))));
                        var_22 ^= (((var_3 ^ (arr_14 [i_6] [i_1]))) ^ 0);
                        var_23 = ((1 ? 3786 : (((arr_23 [i_0 + 1]) ^ (arr_5 [i_0 + 1] [6] [6])))));
                    }
                    var_24 += ((((((-3799409498822209931 != -5725011654412925571) ? var_5 : 1))) ? (((-(!1)))) : ((4421254453002516138 ? ((((arr_7 [i_6] [i_6] [i_1] [i_0]) ? (arr_8 [i_1]) : (arr_13 [i_1] [i_1])))) : 4294967293))));
                }
                var_25 = (((((~(((!(arr_0 [i_1] [i_0]))))))) ? (min(10, (((var_6 ? (arr_14 [i_1] [i_0]) : -32761))))) : (((((arr_12 [i_0]) ? 61749 : var_0))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 3; i_10 < 24;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 25;i_11 += 1)
        {
            {
                arr_42 [i_10] [i_10] = (((1631931552 * 134217216) ? (arr_40 [i_10] [i_10]) : (arr_40 [i_10] [i_10])));
                var_26 = (((min((arr_38 [i_10 - 2]), (min((arr_38 [i_11]), (arr_38 [i_11]))))) ? 61774 : var_8));
            }
        }
    }
    #pragma endscop
}
