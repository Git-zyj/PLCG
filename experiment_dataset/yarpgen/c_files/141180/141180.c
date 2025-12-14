/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((min(127, var_1)));
    var_14 -= (~var_4);

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_15 += (var_4 ? (arr_0 [14] [i_0]) : var_2);
        arr_3 [i_0] = (i_0 % 2 == 0) ? (((((var_7 ? (arr_1 [i_0] [i_0]) : var_4)) != (((-124 - ((var_3 << (((((arr_0 [i_0] [i_0 + 1]) + 5524295499405479362)) - 15)))))))))) : (((((var_7 ? (arr_1 [i_0] [i_0]) : var_4)) != (((-124 - ((var_3 << (((((((arr_0 [i_0] [i_0 + 1]) + 5524295499405479362)) - 15)) - 5374460762379000464))))))))));
        arr_4 [i_0] = var_0;
    }
    for (int i_1 = 3; i_1 < 10;i_1 += 1)
    {
        var_16 = (var_0 + ((((max(var_2, var_7))) ? var_1 : (max((arr_0 [i_1] [i_1]), (arr_6 [i_1] [i_1]))))));
        var_17 = (arr_7 [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {
                {
                    arr_13 [i_1] [i_1] [i_1] = var_11;
                    arr_14 [i_1] [i_1] [9] [9] = (((((var_0 ? (arr_6 [i_1] [i_1]) : (arr_6 [i_1] [i_1])))) ? ((-(arr_9 [i_1 - 3]))) : 1134907106097364992));
                    var_18 = (arr_12 [i_1] [i_2]);
                }
            }
        }
        var_19 += var_9;
        var_20 = ((((82 ? ((max(var_3, 30))) : -15743))) ? (max(10560385487569441252, 82)) : (~var_1));
    }
    for (int i_4 = 2; i_4 < 12;i_4 += 1)
    {

        /* vectorizable */
        for (int i_5 = 1; i_5 < 12;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 12;i_7 += 1)
                {
                    {
                        var_21 = (arr_24 [i_4] [i_6] [i_6]);
                        var_22 = var_7;
                    }
                }
            }
            var_23 = (var_0 / var_11);
        }
        for (int i_8 = 3; i_8 < 11;i_8 += 1)
        {
            var_24 = (max(var_24, (((((max(80, (max(var_10, var_9))))) ? -2268098781226268297 : 10371)))));
            var_25 = 14453879075912727183;
            var_26 = var_2;
            /* LoopNest 2 */
            for (int i_9 = 2; i_9 < 10;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 11;i_10 += 1)
                {
                    {
                        var_27 = 13447579355911080748;
                        var_28 = var_3;
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_11 = 1; i_11 < 11;i_11 += 1)
        {
            arr_38 [i_11] |= var_10;
            var_29 = var_3;
        }

        /* vectorizable */
        for (int i_12 = 3; i_12 < 11;i_12 += 1)
        {
            var_30 = (min(var_30, 108781967015518836));
            var_31 = ((66 >= (arr_26 [6] [i_12] [i_12] [i_12] [i_12] [i_12])));
            var_32 = -var_10;
        }
        var_33 = 32767;
        arr_42 [i_4] = (-(((arr_23 [i_4] [i_4 + 1] [i_4 + 1]) ? ((255 ? 9650466114750621883 : 710936795)) : var_0)));
    }
    var_34 = (min(((((var_3 ? 152 : var_6)))), (((max(-3817809770742010317, 9223372036854775807)) * var_10))));
    #pragma endscop
}
