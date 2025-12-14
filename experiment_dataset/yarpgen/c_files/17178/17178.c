/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((!(~var_14)));
        arr_4 [i_0] = (max((((((2303591209400008704 ? var_7 : var_5)) >= (~-9)))), (arr_1 [i_0])));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            var_15 += (((arr_2 [0] [i_2 + 1]) + -112));
            var_16 = var_12;
            var_17 -= (-(~var_8));
            arr_9 [i_1 - 1] [i_2] = ((var_9 ? var_7 : (arr_7 [i_2 - 1])));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_18 = (255 % 9429072002678444422);
                    var_19 = ((var_3 ? (arr_5 [i_1 - 1] [i_1 - 2]) : var_14));
                }
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    arr_19 [i_1 - 1] [i_1 - 1] [i_6] [i_1] = (((arr_11 [i_1 + 1]) ? 1 : (arr_11 [i_1 + 1])));
                    arr_20 [i_6] [i_6] = var_8;
                    arr_21 [1] [i_3] [i_4] [i_6] = (~var_8);
                }
                for (int i_7 = 3; i_7 < 10;i_7 += 1)
                {
                    arr_26 [2] [i_3] [i_3] &= (!var_7);
                    var_20 = (((!-114) || var_14));
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    var_21 = ((1 < (arr_18 [i_1] [i_1] [i_1] [i_1])));
                    var_22 &= (~var_9);
                }
                var_23 = 1;
                arr_30 [i_1 - 2] [i_1] [i_1] [i_4] = 9429072002678444431;
                var_24 *= var_8;
            }

            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                var_25 -= (((((9017672071031107187 ? 9017672071031107194 : 7740824041357871825))) ? 0 : 9017672071031107201));
                var_26 = -var_14;
                var_27 ^= ((0 >= (var_4 || var_3)));
            }
            arr_33 [i_1] = ((var_14 + (~var_5)));
            arr_34 [1] = (((arr_7 [i_1 + 1]) || 262143));
        }
        arr_35 [i_1] [i_1] = (var_5 / ((min(var_11, var_2))));
    }
    var_28 = var_11;
    #pragma endscop
}
