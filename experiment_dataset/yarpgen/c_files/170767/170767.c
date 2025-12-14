/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((max(2003819421028935964, var_0)) << (((!(0 && 73))))));

    for (int i_0 = 2; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_20 &= arr_0 [i_0];

        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            var_21 = (max(var_21, -var_12));
            var_22 = (min(var_22, ((((!var_9) >= -1)))));
            var_23 = ((~(((arr_1 [i_0 + 4]) | ((max((arr_5 [i_0] [i_0]), var_12)))))));
            var_24 = ((2 << (5048734473490159946 - 5048734473490159939)));
            var_25 &= (max(((+(((arr_4 [i_1]) % (arr_5 [i_1] [i_0]))))), var_6));
        }
        var_26 = -534368766;
        var_27 = max((-15 % 2), ((((~-2003819421028935989) && ((0 >= (arr_2 [i_0])))))));
        var_28 = ((-(arr_2 [i_0 + 1])));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_29 = (min(var_29, (((-(((arr_2 [i_2]) ? var_0 : var_13)))))));

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_30 = (-(arr_5 [i_3] [i_2 + 2]));
            var_31 = 36;
        }
        var_32 = arr_4 [i_2];
        var_33 = (arr_8 [i_2] [i_2]);
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    {
                        var_34 = ((!(arr_11 [i_4] [i_5 - 1] [i_6])));
                        var_35 = arr_12 [i_2] [i_2] [i_2];
                        var_36 &= var_1;
                    }
                }
            }
        }
    }
    var_37 = 8875028884578790417;
    var_38 = -1;

    /* vectorizable */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    {
                        var_39 = (((((arr_24 [i_7]) % 10491548535269989266)) != var_12));
                        var_40 = var_0;
                        var_41 = (((arr_16 [i_7] [i_8] [i_9] [i_10]) ? (arr_16 [i_7] [i_8] [i_9] [i_10]) : (arr_0 [i_7])));
                        var_42 ^= ((~var_8) * (-30 >= 15098199222355148087));
                    }
                }
            }
        }
        var_43 ^= var_9;
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 13;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                {
                    var_44 = (8134008039757571774 % 17181600219516773114);
                    var_45 = var_11;
                }
            }
        }
    }
    #pragma endscop
}
