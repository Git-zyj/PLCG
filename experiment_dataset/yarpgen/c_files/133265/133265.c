/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_11 = (max((((max((arr_7 [i_0] [i_3] [i_1 + 3] [i_1 + 3] [i_3] [i_1 + 3]), var_10)) - 1535359317)), (((-26687 != (~1535359323))))));
                        var_12 = (max((min((arr_7 [i_3] [8] [i_2] [i_2] [8] [i_1 - 1]), (arr_7 [4] [4] [i_3] [i_2] [4] [i_1 - 1]))), (arr_1 [i_0])));
                    }
                }
            }
            var_13 += (~var_10);
            var_14 = ((171 ? var_9 : (min((arr_2 [i_1 + 3] [i_1 + 1] [i_1 + 1]), (arr_0 [i_1 - 1])))));
        }
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {

            for (int i_5 = 3; i_5 < 10;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                {
                    arr_17 [i_0] [1] [i_4] = ((-var_10 ? (arr_6 [i_0] [i_4] [i_5] [i_6]) : (max(((84 ? (arr_15 [i_0] [i_4] [i_5 - 3] [i_6]) : 26687)), (arr_2 [i_6] [i_5 - 1] [i_0])))));
                    var_15 = ((min(51081, 400551288)));
                }
                for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 10;i_8 += 1) /* same iter space */
                    {
                        var_16 = ((~(~87)));
                        var_17 -= (((arr_7 [i_7] [6] [0] [0] [i_8 - 1] [i_8 - 1]) ? var_4 : (arr_7 [i_0] [0] [i_4] [i_7] [i_8 + 2] [i_8 + 2])));
                        var_18 = 171;
                        var_19 += ((10541 ? ((2121819842 * (arr_22 [i_8] [4] [4] [4] [4]))) : (~170)));
                        var_20 += ((~((402321269 ? (arr_6 [i_0] [i_0] [i_7] [i_8]) : (arr_5 [i_0] [i_0])))));
                    }
                    for (int i_9 = 1; i_9 < 10;i_9 += 1) /* same iter space */
                    {
                        arr_26 [i_0] [11] [i_4] [2] [i_7] [i_4] = var_9;
                        arr_27 [i_0] [i_0] [i_4] = (((-(arr_9 [i_4] [i_4]))));
                        arr_28 [i_0] [i_4] [i_4] [i_7] [i_9] = (max((arr_23 [i_0] [i_4]), (34193 % 199)));
                        arr_29 [i_0] [i_4] [i_4] [i_7] [i_9] = (min(1168345577884229520, ((((max(45, 18862))) ? var_5 : (arr_1 [i_9])))));
                        var_21 = ((4191838095 >> (-26684 + 26695)));
                    }
                    var_22 = 234;
                }
                arr_30 [i_4] = ((((min((18 == 1168345577884229520), (arr_18 [i_5 + 1] [i_4] [i_4] [i_0])))) ? var_10 : (((!(((-3397754900702609439 ? 15401 : 822642623))))))));
                arr_31 [i_4] = ((~((max(34876, 54994)))));
            }
            var_23 = ((min((arr_18 [i_0] [i_4] [i_0] [i_0]), ((-2353 ? 3473857133380534198 : var_10)))));
            arr_32 [i_4] = 2679802440;
        }
        arr_33 [1] [1] = (((63254 ? 85 : ((2810527997 ? 20600 : -1649989821776745941)))));
        var_24 += (var_7 == -31448);
        var_25 |= ((-1276082227 ? 30023 : 1876001794064675634));
        arr_34 [i_0] = 168781175;
    }
    var_26 = var_3;

    /* vectorizable */
    for (int i_10 = 0; i_10 < 22;i_10 += 1)
    {
        var_27 = (min(var_27, (((var_6 ? var_1 : 1568843904)))));

        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {

            for (int i_12 = 3; i_12 < 19;i_12 += 1)
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 22;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 22;i_14 += 1)
                    {
                        {
                            var_28 = (max(var_28, 58602));
                            var_29 = (arr_36 [i_12 + 3]);
                        }
                    }
                }
                var_30 = 8257;
            }
            /* LoopNest 3 */
            for (int i_15 = 2; i_15 < 19;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 22;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        {
                            var_31 = (min(var_31, ((((~4126186104) / ((var_5 ? 247 : var_7)))))));
                            var_32 *= 106;
                            arr_58 [i_10] [i_10] [i_15] [i_16] [i_17] = var_8;
                        }
                    }
                }
            }
        }
    }
    for (int i_18 = 0; i_18 < 15;i_18 += 1)
    {
        arr_62 [i_18] = (arr_51 [i_18] [i_18]);
        arr_63 [i_18] = ((var_4 ? (~-1691768032) : (~57257)));
        arr_64 [i_18] = ((((arr_57 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]) ? (arr_46 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]) : 34088)));
        arr_65 [i_18] [i_18] = (((132 ? -30023 : 27889)));
    }
    var_33 = (max(var_33, (((var_2 ? var_10 : (max(var_6, var_2)))))));
    #pragma endscop
}
