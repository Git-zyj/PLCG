/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_15 [i_1] [i_3] = -12;
                        arr_16 [i_0] [i_0] [i_1] [i_2 - 4] [i_3] = ((max((!var_1), (min(255, var_2)))) << (var_11 - 13731131317803264290));
                        var_19 = var_9;
                    }
                    var_20 = ((((((arr_11 [24] [i_1] [6] [i_1]) ? ((min(var_5, var_18))) : (!var_13)))) || 61361));
                    arr_17 [i_1] = var_13;
                }
            }
        }
        arr_18 [i_0] [i_0] = 47292;
        var_21 -= var_2;

        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    {
                        arr_26 [i_0] [i_4] [i_5] [i_6] = (((-(arr_1 [i_0] [0]))));
                        arr_27 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = (((((-2147483647 - 1) + 7533864370098393510)) - -1982655599));
                        var_22 = (max(var_22, ((min((min(var_12, 47289)), (((arr_5 [i_0]) ? (arr_5 [i_0]) : (arr_5 [i_0]))))))));
                        arr_28 [i_0] [i_4] [i_5] [i_5] = ((~((max((!22822), 10494)))));
                        arr_29 [i_0] [i_4] [i_0] [i_4] = (((min(255, -16114)) * (arr_8 [i_0] [i_4] [i_5] [i_6])));
                    }
                }
            }

            for (int i_7 = 1; i_7 < 23;i_7 += 1) /* same iter space */
            {
                var_23 = (min(((255 ? 1587759011 : -671068261)), 209));
                arr_32 [i_7] [i_4] [i_0] [i_7] = 1;
            }
            /* vectorizable */
            for (int i_8 = 1; i_8 < 23;i_8 += 1) /* same iter space */
            {
                var_24 = (((arr_4 [i_8 - 1] [i_8 + 2] [i_8 + 1]) ? 1 : var_8));
                arr_36 [i_8] [i_4] [i_4] = (1 <= var_2);
            }
        }
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            var_25 = (arr_2 [20]);

            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                var_26 = (max(var_26, ((((min((arr_41 [i_0] [i_9]), 3104541082)) | -243)))));
                var_27 = var_17;
                var_28 = (min(var_28, ((((arr_0 [i_10]) ? var_3 : (min(1, 1296764714132032179)))))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        {
                            var_29 = ((var_8 << (-313041855 / -8729729463585006932)));
                            arr_47 [i_9] [i_9] = var_9;
                            var_30 = (-16114 > var_6);
                        }
                    }
                }
            }
            var_31 = (max(-900118384, ((var_16 ? (min(var_16, var_12)) : (((0 ? 47289 : 243)))))));
            arr_48 [i_0] [16] [i_9] = var_7;
        }
        var_32 -= 4294967275;
    }
    for (int i_13 = 0; i_13 < 18;i_13 += 1)
    {
        arr_51 [i_13] = ((arr_31 [i_13] [i_13] [i_13]) % 4175378410);
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 18;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 16;i_15 += 1)
            {
                {
                    arr_56 [16] [i_13] [i_13] [i_15] = (var_11 ? (((((3405095730 ? var_9 : var_5))))) : (min(4175378417, (arr_46 [i_15 - 1] [i_14] [22] [22] [19]))));

                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 18;i_16 += 1)
                    {
                        var_33 -= ((var_8 > (arr_6 [i_16])));
                        var_34 *= (~var_17);
                    }
                }
            }
        }
    }
    var_35 = (max(var_35, ((max(var_14, var_4)))));
    #pragma endscop
}
