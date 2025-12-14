/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 = (max(20, 20));
        var_16 = (arr_2 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((var_7 ? (max((arr_1 [i_0] [i_0]), (((arr_0 [i_0]) - (arr_6 [i_0] [i_0] [i_0] [i_0]))))) : ((((!(~-68)))))));
                    arr_10 [i_1] [i_1] [i_1] [i_0] = var_4;
                    var_17 = (max((max(var_7, (arr_6 [i_0] [i_1] [i_1] [i_2]))), (arr_6 [i_1] [i_1] [i_1] [i_0])));
                    arr_11 [i_0] [i_1] = var_5;
                }
            }
        }

        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            arr_15 [i_0] [1] = (arr_3 [i_0]);
            arr_16 [i_0] [i_0] [i_0] = (((((~(arr_13 [i_0] [i_3] [i_3])))) ? (((((((arr_14 [i_0]) | var_11))) ? (-32767 - 1) : ((-49 ? 7 : (arr_2 [i_3] [i_0])))))) : (max((arr_0 [i_0]), (min((arr_13 [i_0] [i_3] [i_3]), -1))))));
            var_18 = (max((((((arr_7 [i_0] [i_3]) == (arr_12 [i_0] [i_0] [i_0]))) ? (arr_3 [i_0]) : (max(44, 1159911305)))), (arr_7 [i_3] [i_0])));
            arr_17 [i_0] [i_0] [15] |= (max((arr_5 [i_0] [i_0] [i_3]), (((arr_7 [i_0] [i_3]) + (arr_6 [i_0] [i_3] [i_0] [i_3])))));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            var_19 = 1;
            arr_20 [i_0] [i_4] = var_7;
            var_20 = (max((arr_4 [i_4] [i_4]), (max((arr_1 [i_0] [i_4]), (arr_13 [i_0] [i_0] [i_0])))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            var_21 = var_8;
            var_22 = (min(var_22, (!var_13)));
        }
        for (int i_6 = 3; i_6 < 22;i_6 += 1)
        {
            arr_25 [i_0] [i_0] = ((+(((~var_1) ? (max((arr_24 [i_0]), (arr_14 [i_0]))) : (arr_21 [i_0] [i_6 - 3] [i_0])))));
            arr_26 [i_0] [i_6 - 1] [i_6] &= (((((~(((arr_22 [i_6] [i_0]) ? (arr_23 [i_6] [i_0]) : 1))))) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : (((max(-117, -39))))));

            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                arr_31 [i_7] [i_6 - 3] [i_7] [i_7] = (((((~(arr_8 [i_0] [i_6 - 3] [i_7] [i_7])))) ? (arr_8 [i_7] [5] [i_6 + 2] [i_0]) : ((~(arr_8 [i_0] [i_0] [i_6] [i_7])))));
                var_23 = (min(var_23, ((((((arr_13 [i_0] [i_6 + 1] [i_0]) ? (arr_12 [i_0] [i_6 + 2] [i_7]) : (((arr_3 [i_7]) ? (arr_3 [i_6]) : (arr_24 [i_6 - 1]))))) >> (((0 ^ -67) + 108)))))));
                var_24 = (((max((arr_1 [i_0] [i_6]), (arr_1 [i_6] [i_7]))) ? ((~(arr_1 [i_0] [i_6]))) : ((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_6 + 2]))))));
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        {
                            var_25 = (~-32763);
                            var_26 = (-(((min(var_1, (arr_0 [i_0]))) >> ((((~(arr_37 [i_0] [i_6] [i_7] [i_8]))) + 1861937484)))));
                        }
                    }
                }
            }
        }
    }
    var_27 = (~var_2);
    var_28 = var_3;
    var_29 = ((var_0 ? 65528 : ((var_5 ? ((var_1 ? var_7 : var_6)) : 32763))));
    var_30 &= var_4;
    #pragma endscop
}
