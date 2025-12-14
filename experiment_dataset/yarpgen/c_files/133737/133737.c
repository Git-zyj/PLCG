/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_13 = var_6;
        var_14 = (min(var_14, var_7));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_15 = ((((min((-17498 & var_7), (arr_3 [1] [i_1])))) * ((((arr_2 [1]) > (arr_3 [i_1] [i_1]))))));
        var_16 -= var_11;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    var_17 = ((+(((arr_4 [i_2] [i_1]) ? (arr_4 [i_2] [i_1]) : (arr_4 [i_1] [i_3])))));
                    var_18 += ((+(((!(((-17481 ? (arr_4 [i_2] [1]) : var_5))))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_5 = 3; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    {
                        var_19 = var_6;
                        arr_19 [1] [i_5 + 2] [i_4] [i_7] [1] [i_4] = (((arr_10 [i_5 + 1] [i_5 + 2]) ? (arr_10 [i_5 + 1] [i_5 + 2]) : (arr_10 [i_5 + 1] [i_5 + 2])));
                    }
                }
            }
        }

        for (int i_8 = 3; i_8 < 15;i_8 += 1)
        {
            var_20 = ((((((arr_16 [i_8] [i_4] [15]) ? (arr_7 [1] [i_4] [i_4]) : 164))) ? var_8 : var_1));
            var_21 = (((arr_7 [i_4] [i_8] [0]) ? -17497 : (((arr_18 [i_4] [i_4] [i_4] [i_4]) ? var_11 : (arr_6 [i_4] [i_4] [i_4] [i_8 - 3])))));
            var_22 = (arr_9 [i_4]);
        }
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            var_23 = (max(var_23, var_7));
            var_24 = (arr_11 [i_4]);
            arr_24 [i_4] [i_4] = var_8;
            arr_25 [i_4] [i_9] = var_9;
        }
    }
    for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
    {

        for (int i_11 = 0; i_11 < 17;i_11 += 1)
        {
            arr_30 [i_10] = ((((((((arr_22 [15] [1]) ^ var_7)) | ((min(17509, (arr_2 [i_10]))))))) ? ((((max((arr_21 [i_10] [i_11]), var_7))) ? ((min(var_10, var_10))) : ((var_10 ? var_2 : 8991741561249130099)))) : (!var_11)));
            var_25 = (max(((8991741561249130086 >> (17509 - 17454))), var_4));
        }
        /* vectorizable */
        for (int i_12 = 1; i_12 < 1;i_12 += 1)
        {
            var_26 = (arr_15 [i_10] [i_10]);
            arr_35 [i_10] [i_12] [i_12] = (((arr_23 [8] [i_12 - 1]) >= (arr_23 [i_10] [i_12 - 1])));
            arr_36 [i_12] = var_2;
            var_27 = 20627;
        }
        var_28 = (min(((((((8419160218917685188 ? (arr_27 [i_10]) : var_0))) | (arr_2 [i_10])))), ((var_3 ? var_10 : var_11))));
    }
    #pragma endscop
}
