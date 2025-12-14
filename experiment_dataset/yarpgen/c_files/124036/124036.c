/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= (min(var_13, 16952422004885386991));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 220;
        var_20 = (arr_0 [i_0]);
        arr_4 [i_0] [i_0] = (-(((arr_1 [4]) + var_0)));
        var_21 = (((arr_2 [i_0] [i_0]) ? 65535 : (~var_8)));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_22 = ((arr_1 [i_0]) ? ((16337370371412098217 ? 15684523596137997553 : (arr_1 [i_0]))) : ((var_5 ? var_11 : var_8)));

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                arr_11 [i_0] [i_0] [i_0] [i_0] = (~9);
                var_23 = (max(var_23, 12021209126023339551));
            }
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    arr_18 [i_0] [i_0] = ((-((40424 ? var_14 : var_12))));
                    var_24 |= ((var_13 ? 65535 : ((-1 ? (arr_9 [i_0] [i_1]) : (arr_10 [i_1] [17] [i_1] [i_1])))));
                    arr_19 [12] [i_3] [i_0] = 21;
                    arr_20 [i_0] = ((var_18 ? var_17 : (arr_14 [i_0] [i_4])));
                }
                var_25 = (max(var_25, (((arr_7 [i_0] [6] [i_3] [i_3]) + (((var_14 ? var_5 : (arr_1 [15]))))))));
                var_26 += (arr_10 [i_0] [i_1] [i_1] [i_3]);
                var_27 = (min(var_27, ((((arr_14 [i_0] [i_0]) ? ((40424 ? 65535 : 10764771902612891793)) : (~190))))));
                arr_21 [i_0] [i_0] [0] [i_1] = var_15;
            }
        }
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        var_28 = 801563847;
        arr_24 [i_5] = (((((arr_1 [i_5]) ? var_0 : 4294967295)) + (arr_1 [i_5])));

        for (int i_6 = 1; i_6 < 10;i_6 += 1)
        {
            var_29 = ((~(min(((6997782515692995664 ? 7 : (arr_12 [i_5] [i_5] [i_5] [i_5]))), 1))));
            arr_28 [i_6 + 3] = ((((-(max(var_18, var_0)))) == var_7));
            var_30 += (max((arr_10 [i_5] [i_5] [i_5] [i_5]), 15));
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 3; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            {
                var_31 = (min(var_31, ((max(((var_18 | ((max(2, var_0))))), ((~((min(var_0, 0))))))))));

                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    var_32 += max((((((arr_33 [8]) * 0)) / (((max(16301, (arr_31 [8]))))))), (((692597052 ? (arr_29 [i_8]) : 5878))));
                    arr_39 [i_8] [i_8] [i_8] = (((((-var_14 ? 1484489106 : (max(-692597053, -7313565914259834218))))) ? var_8 : (min(var_11, var_12))));
                }
            }
        }
    }
    #pragma endscop
}
