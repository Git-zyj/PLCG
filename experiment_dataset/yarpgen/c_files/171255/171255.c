/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!var_4);

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 = var_7;
        var_19 = ((-15391 ? ((var_2 ? ((max(30, -5))) : (arr_1 [i_0]))) : (arr_1 [i_0])));
        var_20 &= (max(((-15391 ? -15418 : 2)), 6));
        var_21 = (max(((max((~var_12), (max(var_16, var_10))))), (max((((arr_0 [i_0]) ? var_8 : -15418)), ((max(var_15, (-32767 - 1))))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_22 = (max(((min(var_15, var_12))), ((15391 ? (arr_14 [i_2 + 1] [i_5] [i_2 + 3] [i_2 + 1] [i_2 + 3]) : (arr_11 [i_2 + 3] [i_5] [i_2 - 1])))));
                                arr_15 [i_5] = ((!((max(((max(var_7, 4294967295))), (max(var_10, 32757)))))));
                                var_23 = ((((max((max(58, var_2)), var_10))) ? (((arr_4 [i_2 + 3] [i_2 + 1] [i_2 + 2]) ? ((((var_3 || (arr_9 [i_1] [i_1] [i_3] [i_4]))))) : var_11)) : 1));
                                var_24 -= ((!((max((max(1, 4583651139756247967)), (arr_4 [i_1] [i_3] [i_3]))))));
                            }
                        }
                    }
                    var_25 &= var_14;
                }
            }
        }

        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            var_26 = (max(((86 ? 1 : 88)), -932021894));
            var_27 = var_0;
            var_28 = (max((var_16 ^ var_11), (((127 & (arr_4 [i_1] [i_6] [i_6]))))));
            /* LoopNest 2 */
            for (int i_7 = 3; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    {
                        var_29 = 3;
                        arr_24 [i_1] [i_8] [i_7 + 2] [i_7] [i_1] = (3443980233 && var_5);
                        var_30 += var_15;
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            var_31 = (min(var_31, ((max((max((arr_20 [i_9] [i_9] [i_1]), var_8)), 15402)))));
            var_32 = (max(1, ((-(arr_14 [i_1] [i_9] [i_9] [i_9] [i_9])))));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    {
                        var_33 = (((max(var_16, -12)) * ((1 ? 0 : (arr_29 [i_1] [i_9])))));
                        arr_33 [i_11] [i_9] [i_9] [i_9] = (max((1 - 17), ((((max(var_10, var_0))) & (62215 ^ var_11)))));
                    }
                }
            }
            arr_34 [i_9] = (min((max((min(4744, var_7)), (arr_16 [i_1] [i_9]))), ((max((var_6 && 60), (1602 && -15404))))));
            var_34 = -1603;
        }
        for (int i_12 = 1; i_12 < 17;i_12 += 1)
        {
            arr_38 [i_1] [i_1] [i_12 - 1] = var_1;
            var_35 = ((!((var_3 || (arr_19 [i_1] [i_12 - 1] [i_1])))));
            var_36 = ((((max((max((arr_8 [i_1] [i_12 - 1] [i_1]), var_8)), ((((arr_21 [i_12 - 1] [i_12 + 1] [i_1] [i_1]) - var_16)))))) ? (((-(min(var_3, (arr_8 [i_1] [i_1] [i_1])))))) : (((arr_12 [i_12 + 1] [i_1] [i_1]) ? (((min(13970, (-127 - 1))))) : (max(1792351781, (arr_3 [i_12 + 1])))))));
        }
    }
    for (int i_13 = 2; i_13 < 12;i_13 += 1)
    {
        var_37 = var_3;
        var_38 = (max(((~(arr_7 [i_13 - 1] [i_13 - 2] [i_13 + 1]))), ((min(1, 0)))));
        arr_43 [i_13 - 2] = (((((((max(var_2, 60779))) ? (max(1, var_14)) : (((0 ? 1274044512 : (arr_27 [i_13 - 2] [i_13 - 2] [i_13 + 1] [i_13 + 2]))))))) && ((max((max(48, 6074)), ((max(var_15, 0))))))));
    }
    for (int i_14 = 0; i_14 < 15;i_14 += 1)
    {
        var_39 = (((var_8 / (((arr_22 [i_14] [i_14]) ? 12936 : 1)))));
        var_40 = (((((!var_7) > -1)) ? ((((!(arr_25 [i_14] [i_14] [i_14]))))) : ((-7 ? var_15 : (max(9223372036854775807, 23))))));
    }
    var_41 = var_10;
    #pragma endscop
}
