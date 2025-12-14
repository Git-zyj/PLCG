/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = min(var_10, var_6);
    var_15 -= (max(7936, var_2));
    var_16 &= 20963;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_17 = 7;

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_18 += (((arr_1 [i_0]) + ((173 ? 10 : -16))));
            arr_7 [i_0] [i_1] [i_1] = (((var_7 == var_7) - (((arr_0 [i_1]) % (arr_1 [i_1])))));
        }
        var_19 &= ((((var_2 ? (-127 - 1) : var_11)) > var_8));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 2; i_3 < 22;i_3 += 1) /* same iter space */
        {
            var_20 = (min(var_20, (((-var_1 ? var_12 : ((var_11 ? (arr_9 [i_3 - 1]) : 64512)))))));
            arr_13 [i_2] [i_3 - 2] = var_4;
        }
        for (int i_4 = 2; i_4 < 22;i_4 += 1) /* same iter space */
        {
            var_21 = (min(var_21, (((((((arr_12 [i_4 - 2]) && (arr_12 [i_4 + 1])))) | (((arr_15 [i_4 - 2] [i_4 - 1] [i_4 + 1]) >> (var_13 - 110))))))));
            var_22 = (min(226, ((3972 ? var_4 : 57680))));
            arr_16 [i_2] = (((arr_5 [i_4 - 1] [i_4 - 1]) ? ((min(var_13, (arr_5 [i_4 - 1] [i_4 - 1])))) : (((arr_5 [i_4 + 1] [i_4 - 2]) ? var_11 : 65530))));
            var_23 += (arr_5 [i_2] [i_2]);
            var_24 = (max(var_24, (((((((((-(arr_3 [i_4])))) ? var_1 : (arr_0 [i_2])))) || (((~(((arr_2 [i_2]) ? var_2 : var_8))))))))));
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {

            for (int i_6 = 3; i_6 < 23;i_6 += 1) /* same iter space */
            {
                var_25 = (var_3 % (arr_12 [i_2]));
                arr_21 [i_6] [i_5] [i_2] = ((-(max((arr_5 [i_2] [i_2]), (0 - var_7)))));
                var_26 = ((~(max((arr_20 [i_6 - 1] [i_6 - 2] [i_6] [i_6 - 2]), ((-(arr_15 [i_2] [i_2] [i_2])))))));
                var_27 -= (arr_10 [i_2] [i_2]);
            }
            for (int i_7 = 3; i_7 < 23;i_7 += 1) /* same iter space */
            {
                arr_26 [i_2] [i_5] [i_7] = ((max(((((arr_12 [i_2]) <= (arr_3 [i_2])))), (min((arr_11 [i_2]), var_13)))));
                arr_27 [i_2] [i_2] [i_2] = (!var_2);
                var_28 -= (((~var_5) ? ((min((arr_25 [i_7 - 3]), ((-(arr_24 [i_2])))))) : 132));
            }
            for (int i_8 = 1; i_8 < 21;i_8 += 1)
            {
                var_29 = var_10;
                arr_30 [i_8] = 255;
                var_30 = (min(var_30, ((max((((var_2 < (arr_19 [i_8] [i_8] [i_8 + 2])))), (max((arr_19 [i_8] [i_8 + 2] [i_8 + 1]), (arr_19 [i_8 + 2] [i_8] [i_8 - 1]))))))));
            }
            arr_31 [i_2] &= ((var_1 && ((min(var_1, (arr_15 [i_2] [i_5] [i_2]))))));
        }

        for (int i_9 = 1; i_9 < 23;i_9 += 1)
        {
            var_31 = (min(-4712025905619806102, 255));
            arr_34 [i_9] [i_9 - 1] |= (arr_10 [i_9 + 1] [i_9 + 1]);
            var_32 = ((!((((arr_29 [i_9 - 1] [i_9 + 1] [i_9]) ? (arr_29 [i_9 - 1] [i_9 - 1] [i_9]) : (arr_29 [i_9 - 1] [i_9] [i_9]))))));
        }
    }
    #pragma endscop
}
