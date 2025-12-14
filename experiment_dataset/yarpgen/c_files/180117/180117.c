/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((0 || ((((var_0 != var_2) ? var_11 : 0)))));
    var_16 = var_0;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_17 = (min(var_17, (((((max(((min((arr_1 [2]), (arr_0 [i_0])))), 0))) ? ((min(214, (arr_2 [i_0])))) : var_10)))));
        var_18 = (arr_1 [1]);
        arr_3 [i_0] [12] = (arr_2 [i_0]);
        arr_4 [i_0] = (((((~(arr_0 [i_0])))) ? (((((min(var_10, var_7))) == (0 >= 52)))) : ((((arr_2 [2]) == (arr_0 [i_0]))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_7 [i_0] = (((arr_0 [i_0]) / ((var_6 % (min(15, (arr_2 [5])))))));

            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                arr_10 [i_0] [0] = (((arr_0 [i_2 + 1]) || (((65505 ? (arr_5 [i_0] [i_0] [i_1]) : var_5)))));
                arr_11 [8] [i_0] [i_0] [i_0] = (((((arr_5 [i_0] [i_1] [i_0]) <= (arr_0 [i_1]))) ? 0 : (min(((max(var_12, var_8))), 4294967295))));
            }
            arr_12 [12] &= ((((((var_6 == var_3) >= ((6785277437590377950 ? 191 : var_13))))) & var_3));
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {

            /* vectorizable */
            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                var_19 &= ((+((32745 ? (arr_9 [i_0] [i_0] [1] [i_4]) : var_14))));
                var_20 = (max(var_20, ((((arr_5 [i_3] [8] [8]) || 65535)))));
            }
            arr_19 [i_0] [i_0] = (min(var_6, (((arr_1 [i_3]) ? (arr_1 [i_0]) : (arr_1 [10])))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        {
                            arr_32 [i_5] [i_0] = (~6082368014919807536);
                            arr_33 [i_0] [i_5] [i_6] [i_6] [i_0] [i_8] = ((7 * (255 == 151)));
                            arr_34 [9] [9] [i_6] [i_7] [i_0] = (arr_1 [0]);
                        }
                    }
                }
            }
            arr_35 [i_0] [i_0] [i_0] = (!var_10);
        }
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        var_21 = (((-11842 ? -90 : 6785277437590377950)));
        var_22 = (min(253, (((arr_17 [i_9] [i_9] [i_9] [i_9]) ? 4294967265 : (arr_13 [i_9] [i_9])))));
    }
    var_23 -= 6;
    #pragma endscop
}
