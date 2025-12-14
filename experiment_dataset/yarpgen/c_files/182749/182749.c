/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_16;
    var_20 = var_9;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((min(((min(1, var_9))), (arr_1 [i_0])))) ? ((((((!(arr_2 [i_0])))) % (5 - 254)))) : ((((arr_1 [i_0]) ? (arr_1 [i_0]) : 2)))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_8 [i_1] = var_12;
            arr_9 [i_1] [i_1] [i_1] = ((((((((arr_4 [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_5 [i_0] [i_0] [i_1])))) ? (arr_1 [i_0]) : ((var_15 ^ (arr_0 [i_0] [i_1]))))) % ((((((arr_4 [i_0] [i_0]) ? (arr_7 [i_0] [i_0]) : 253)))))));
            arr_10 [i_0] [i_0] = (((((((min(1, -911274719))) ? (min((arr_1 [i_0]), (arr_6 [i_0] [i_0]))) : (arr_5 [i_0] [i_1] [i_1])))) ? ((min(((!(arr_7 [i_1] [i_1]))), (((arr_1 [i_0]) || var_14))))) : ((((((arr_6 [i_0] [i_1]) >> (33 - 31)))) ? ((var_13 & (arr_4 [i_0] [i_0]))) : var_2))));
        }
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            arr_14 [i_0] [i_2] = (((-9014916314803949802 ^ 18) ? (min(((min((arr_4 [i_2] [i_0]), (arr_7 [i_0] [i_2])))), (min(0, var_6)))) : ((((((min(var_8, (-32767 - 1)))) + 2147483647)) << ((((8328629153174966623 ? (arr_0 [i_2] [i_2]) : (arr_4 [i_0] [i_0]))) - 270631170))))));

            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                arr_17 [i_0] [i_3] [i_0] = (min((min((min(var_5, (arr_12 [i_2 + 3] [i_0]))), ((min(var_12, (arr_16 [i_0])))))), ((((arr_4 [i_0] [i_0]) ^ (min(var_3, var_6)))))));
                arr_18 [i_0] = (((arr_11 [i_0] [i_2] [i_2]) ? (((((var_10 % var_15) >= ((((arr_5 [i_0] [i_0] [i_0]) ? (arr_16 [i_0]) : (arr_13 [i_0])))))))) : (min((arr_2 [i_3]), (arr_12 [i_0] [i_3])))));
                arr_19 [i_3] [i_2 + 2] [i_2 + 2] [i_0] &= (((((((min((arr_16 [i_0]), (arr_13 [i_0])))) ? (min((arr_4 [i_0] [i_0]), -12)) : var_7))) || (((min(1, 0))))));
            }
        }
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            arr_22 [i_4] = (min((2060380896 > 0), (((65535 + 1) ? (((min(5, (arr_4 [i_0] [i_4]))))) : (arr_11 [i_0] [i_0] [i_4])))));
            arr_23 [i_0] = ((156 ? ((((((arr_13 [i_4]) ? var_5 : var_6)) ^ (arr_6 [i_0] [i_4])))) : var_4));
            arr_24 [i_4] [i_4] = (~-21345);
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            arr_36 [i_0] [i_4] [i_5] [i_6] [i_7] [i_4] [i_6 + 1] = ((((+(((arr_13 [i_7]) & -25241)))) < ((var_3 ? ((((arr_2 [i_5]) && (arr_15 [i_0] [i_6])))) : var_6))));
                            arr_37 [i_0] = ((((min((arr_7 [i_5] [i_6]), (min((arr_29 [i_0] [i_7] [i_5] [i_6] [i_7] [i_6]), var_18))))) % ((min((-32767 - 1), -32767)))));
                        }
                    }
                }
            }
        }
        for (int i_8 = 2; i_8 < 21;i_8 += 1)
        {
            arr_42 [i_0] [i_0] [i_8] = (min((((((arr_16 [i_8]) - -21345)))), (arr_6 [i_0] [i_0])));
            arr_43 [i_0] [i_8] [i_8] = ((min((arr_32 [i_8 - 2] [i_8 - 1] [i_8 - 1] [i_8 - 2]), (arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
            arr_44 [i_0] [i_0] [i_8] = (((min((arr_26 [i_0]), (((0 || (arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) * ((((arr_29 [i_0] [i_0] [i_8] [i_8 - 1] [i_8] [i_8]) <= (((arr_20 [i_8]) ? var_5 : -72)))))));
        }
    }
    #pragma endscop
}
