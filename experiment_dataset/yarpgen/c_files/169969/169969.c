/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 4; i_1 < 11;i_1 += 1) /* same iter space */
        {
            arr_4 [i_0] [i_1 - 4] [i_1] |= ((~(!var_17)));
            arr_5 [i_0] = ((((!(arr_3 [i_0] [i_1])))));
            var_18 = (((var_2 ? var_11 : (arr_2 [i_1 + 1]))));
        }
        for (int i_2 = 4; i_2 < 11;i_2 += 1) /* same iter space */
        {
            arr_8 [i_2] [i_0] = (~1602274168662557778);
            arr_9 [i_2] |= ((!((min(var_1, (arr_0 [i_2]))))));
            arr_10 [i_0] [i_2] [i_0] = 2436079758355280149;
        }
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            arr_13 [i_3 - 1] [i_0] [i_0] = (((((((min(576179277326712832, var_7))) ? (arr_11 [i_0] [i_0] [i_0]) : (arr_1 [i_3 - 1] [i_0 + 2])))) ? ((-((-(arr_12 [i_0] [i_3]))))) : (((!(arr_12 [i_0 - 1] [i_3 - 1]))))));
            var_19 += (-(max((arr_6 [i_3] [i_0 + 2] [i_3 - 1]), var_0)));
            arr_14 [i_0] [i_3] = max(887266264, (((((~(arr_3 [i_0] [i_3])))) ? -1602274168662557779 : (((arr_3 [i_0] [i_0]) ? 11853114572611560232 : var_12)))));
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    {
                        var_20 = (((arr_1 [i_0] [i_5]) ? (arr_15 [i_0 - 1] [i_0]) : (((((arr_17 [i_0] [0] [i_5]) >= ((4405569843931950943 ? -1602274168662557779 : 1))))))));
                        arr_21 [i_0] [i_0] [10] [i_6] [i_5] [10] |= ((-9113904409322994012 ? (arr_3 [i_6] [i_6]) : ((min(1602274168662557759, var_13)))));
                    }
                }
            }
            var_21 = (max(var_21, ((-(min((~3589718757), (9967698963284022734 - var_17)))))));
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            var_22 = 74762588;
                            var_23 += (arr_6 [i_0] [i_4] [3]);
                            arr_30 [i_0 + 2] [i_0] [i_0] [i_0] [i_0 + 1] = 22322;
                        }
                        arr_31 [i_8] [i_8] [i_0] [i_0] [i_4] [i_0] = (arr_12 [i_4] [i_0 - 1]);
                        arr_32 [i_0] [i_0] [i_4] [i_4] [i_7] [i_0] = 1602274168662557789;
                    }
                }
            }
        }
        arr_33 [i_0] [i_0] = (((arr_20 [i_0] [i_0 + 2] [3] [i_0]) ? (((arr_12 [i_0 + 2] [i_0 - 1]) + 2426737301)) : (((arr_12 [i_0 + 1] [i_0 + 2]) ? (arr_20 [i_0] [i_0 - 1] [i_0] [i_0]) : (arr_12 [i_0 - 1] [i_0 + 1])))));
        /* LoopNest 2 */
        for (int i_10 = 2; i_10 < 9;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 13;i_11 += 1)
            {
                {
                    var_24 += (!var_6);

                    for (int i_12 = 1; i_12 < 1;i_12 += 1)
                    {
                        arr_44 [i_0] [i_0] = ((!((max(var_0, (arr_29 [i_0] [i_10 + 4] [i_12]))))));
                        arr_45 [i_0] [i_10] [i_11] [i_0] = ((((((arr_17 [i_12 - 1] [i_0 + 1] [i_0 + 1]) ? var_15 : (arr_17 [i_12 - 1] [i_11] [i_0 + 2])))) ? 1 : (arr_17 [i_12 - 1] [i_0] [i_0 - 1])));
                        var_25 = (min(((~(arr_6 [i_10 - 2] [i_0 + 2] [i_11]))), (arr_35 [i_0] [i_0] [i_0])));
                    }
                    arr_46 [i_0] [i_10] [i_11] [i_0] = min((~var_4), (~12332880909101751655));
                }
            }
        }
        var_26 = (min(var_26, (arr_17 [i_0 + 1] [i_0 + 2] [i_0 - 1])));
        arr_47 [i_0] = (min((((+((1 ? (arr_36 [i_0] [i_0] [i_0]) : 0))))), var_9));
    }
    var_27 = var_11;
    #pragma endscop
}
