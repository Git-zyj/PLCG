/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -903131524;
    var_15 = (!var_11);

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 = (min(var_16, ((((max(3, var_9))) ? ((max(var_5, 65533))) : (min(var_3, var_6))))));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                var_17 *= ((var_1 && ((((((var_0 ? var_4 : var_12))) ? ((var_11 ? var_8 : var_13)) : (!903131517))))));
                var_18 += (!3745084438151888019);
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                var_19 = (min(var_19, (var_13 | 1757351801976878666)));
                arr_8 [i_0] [i_0] [i_3] = var_1;
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                var_20 = var_7;
                arr_13 [i_0] [i_0] [i_1] [i_4] = (0 + var_11);
                var_21 = var_7;

                for (int i_5 = 4; i_5 < 16;i_5 += 1)
                {
                    arr_17 [i_0] [i_1] [i_5] [12] = var_2;
                    var_22 = -var_3;
                    var_23 = var_12;
                }
                var_24 = var_11;
            }
            var_25 = ((var_13 ? (~1301512058) : (((18149 <= var_1) ? (3475501414 | var_10) : 0))));
            var_26 -= 25433;
            var_27 = (((var_12 ? var_11 : var_0)));
        }
        arr_18 [i_0] = (min(((max(6477, 0))), 25414));
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 18;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            {
                                var_28 = 25433;
                                var_29 = 2205876442;
                            }
                        }
                    }
                    arr_28 [i_0] = ((var_10 ? (((-819465879 + (!95)))) : 7772081428840792055));
                    var_30 = var_12;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 10;i_10 += 1)
    {

        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {
            arr_34 [i_10] [9] = (1 == 2089090856);
            var_31 = (min(var_31, (!3475501432)));
        }
        var_32 = (!var_6);
        var_33 = var_0;
        arr_35 [i_10] [i_10] = var_7;
        var_34 = (!38);
    }
    var_35 = 14363571277444591171;
    #pragma endscop
}
