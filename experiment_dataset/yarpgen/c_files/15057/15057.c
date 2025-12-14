/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = ((arr_0 [i_0] [i_0]) >= 32704);

        for (int i_1 = 2; i_1 < 20;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_0] [i_0] = (~-var_13);
            arr_7 [i_0] [i_0] = max(((18946 ? var_3 : 153)), ((((var_1 ? var_13 : -2724527579648541621)))));
        }
        for (int i_2 = 2; i_2 < 20;i_2 += 1) /* same iter space */
        {
            arr_12 [4] [4] &= (!-21636);
            var_14 += (!255);
        }
        arr_13 [i_0 - 1] [i_0] = (((((((max(var_2, (arr_2 [i_0 + 1] [i_0])))) ^ var_8))) ? ((((arr_11 [i_0] [i_0 - 1]) ? (((!(arr_9 [i_0] [i_0 - 1] [i_0])))) : ((((arr_1 [i_0 - 1] [i_0]) > -17060)))))) : var_4));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        arr_18 [i_3] = (((!(arr_16 [i_3] [i_3]))) || 19484);

        /* vectorizable */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            arr_22 [i_3] [i_4] = 2245694491535471240;
            var_15 += ((+(((arr_19 [i_3] [i_3] [i_4]) | 0))));

            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        var_16 *= ((35046933135360 ? 172 : 3));
                        var_17 ^= (arr_27 [i_3] [i_4] [i_4] [i_5] [i_6] [i_7]);
                    }

                    for (int i_8 = 3; i_8 < 21;i_8 += 1)
                    {
                        var_18 = (min(var_18, ((((arr_27 [i_3] [i_5] [i_3] [i_6] [i_8] [i_3]) ? var_4 : ((var_2 ? var_1 : var_6)))))));
                        arr_33 [i_8] = ((~(arr_30 [i_5] [i_5] [i_5] [i_5] [i_8 + 2])));
                        var_19 = (((-893 ? (arr_25 [i_3] [i_3] [i_3] [i_3] [i_3]) : var_10)));
                        arr_34 [i_8 + 1] [i_3] [i_3] = var_2;
                        arr_35 [i_3] [i_8 + 3] = (arr_20 [i_8 + 2] [i_4]);
                    }
                    arr_36 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = -704;
                    var_20 += var_5;
                }
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    arr_40 [i_5] [i_4] &= 1;
                    arr_41 [i_9] [i_4] [i_9] = (arr_29 [i_3] [i_4] [i_5] [i_3] [i_3]);
                }

                for (int i_10 = 4; i_10 < 23;i_10 += 1)
                {
                    var_21 |= ((arr_25 [i_3] [i_3] [i_4] [i_5] [i_10]) - -32761);
                    arr_44 [i_3] [i_4] [i_4] = var_4;
                    var_22 -= (((arr_26 [i_10 - 4] [i_5] [i_5] [i_4] [i_3] [i_3]) > var_3));
                    arr_45 [i_3] [i_4] [i_4] [i_10 - 2] [i_3] [i_10] = ((((((arr_21 [i_4]) ? 46053 : var_0))) ? ((var_6 ? var_11 : 14624140866893827804)) : (((~(arr_23 [i_3] [i_5]))))));
                }
            }
        }
    }
    var_23 = ((var_2 ? ((((max(255, var_13))) ? ((var_5 ? 18446744073709551615 : var_7)) : (var_12 * var_10))) : (((~((var_6 ? var_13 : var_5)))))));
    #pragma endscop
}
