/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_17 = (((arr_6 [i_2] [i_2] [i_1 - 2] [i_0]) ? 1 : (arr_3 [i_1] [i_1])));
                    var_18 |= -1;

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_19 -= ((((var_9 ? var_1 : (arr_7 [i_2] [i_2]))) % (((1 ? (arr_7 [i_3] [i_3]) : (arr_7 [i_2] [i_2]))))));
                        var_20 |= (max(3, 132991466));
                        arr_9 [i_1] [i_1] [i_1] [i_0] = min(6631661712227607768, ((((1 / 1) ? 4124499296 : 1))));
                        arr_10 [i_1] [i_0] [i_0] [i_1] = (((1 + (0 - 288))));
                        arr_11 [i_2] [i_2] [i_1] [i_2] |= (max(((max(-8025237919956979627, ((var_11 % (arr_5 [i_3] [i_2] [i_0])))))), (arr_1 [i_1])));
                    }
                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 17;i_4 += 1)
                    {

                        for (int i_5 = 4; i_5 < 17;i_5 += 1)
                        {
                            arr_18 [9] [i_1] = 24639;
                            var_21 = (((!1824874301) == (288 <= 1)));
                        }
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            var_22 = (var_12 & var_9);
                            var_23 = (min(var_23, 1));
                            arr_21 [i_1] [i_2] [i_1] = (((var_1 + var_2) ? (arr_14 [i_1] [i_1] [i_1] [i_1 + 1] [17]) : 6256729177750283966));
                            var_24 ^= (arr_4 [i_0] [i_1 - 3] [12]);
                        }
                        var_25 = (max(var_25, ((((arr_17 [i_2] [i_2]) / 2147483647)))));
                    }
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            arr_28 [i_0] [i_2] [i_0] [i_7] [i_0] [i_8] [i_2] |= (arr_2 [i_1] [i_1 - 2]);
                            var_26 = ((((min((arr_4 [i_1 - 2] [i_1 - 1] [i_1 - 3]), 0))) && 0));
                            arr_29 [i_1] [i_1] [i_2] [i_7] = (max((arr_8 [i_0]), (!var_0)));
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_27 = 77;
                            var_28 = (min(var_28, ((max(((((arr_2 [i_0] [i_1 + 2]) == (arr_2 [8] [i_1 - 1])))), 2111559801)))));
                            arr_32 [i_1] [i_7] [i_2] [i_1] [i_1] = ((((min((arr_19 [i_0] [i_0]), ((var_6 ? var_16 : var_1))))) ? (arr_20 [i_1] [i_2] [i_1]) : 132991470));
                        }
                        var_29 &= 1457642153;
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 17;i_11 += 1)
                        {
                            {
                                arr_41 [14] [14] [14] [14] [i_10] [i_1] = ((1 % (var_1 % 10689300219269050150)));
                                var_30 -= ((max(-272521767, -6256729177750283966)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_31 = (var_11 <= -378454230);
    var_32 *= ((((max(1, var_14))) || var_8));
    var_33 = (min(var_1, ((((((var_9 ? var_7 : 2))) ? (127 * var_13) : (!32640))))));
    #pragma endscop
}
