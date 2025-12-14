/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 = ((((((var_14 & 130) ? (min(153, -996460088)) : (var_18 == -996460088)))) ? 189 : var_13));
        arr_2 [4] [i_0] = ((((((!(15439520021010858895 * 118))))) < (min((max(var_4, var_10)), (var_13 != var_3)))));
        arr_3 [i_0] = var_7;
    }
    var_21 = (min(var_21, ((-(~var_8)))));
    var_22 = ((-(var_13 & var_10)));

    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_23 = ((92 ? (!3007224052698692735) : var_15));
        arr_7 [i_1] = var_8;
        var_24 = var_3;
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_10 [i_2] = 55774;

        /* vectorizable */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_25 *= var_19;
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    {
                        arr_20 [i_5] [i_2] [i_2] [i_2] [i_2] [i_2] = ((((7119809480189793812 ? var_15 : 3007224052698692720)) - 102));

                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            var_26 = (min(var_26, 1));
                            var_27 = 3007224052698692735;
                        }
                    }
                }
            }
            var_28 = ((var_2 ? -9012091929730968437 : var_3));
        }
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {

            for (int i_8 = 2; i_8 < 12;i_8 += 1)
            {
                var_29 = ((max(var_9, 1)));
                arr_27 [i_2] [i_2] = -548078746;
                arr_28 [i_2] [i_7] [i_2] [i_7] = ((var_6 > (!17587)));
            }
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                var_30 = (((((0 ? 1 : 1))) ? ((min(1217695826, var_7))) : ((9012091929730968437 ? -110 : 7262984316216922588))));
                var_31 = (max(var_31, 192));
            }

            for (int i_10 = 1; i_10 < 14;i_10 += 1)
            {
                arr_34 [i_2] = ((((var_15 ? var_8 : var_17))));
                var_32 = min(var_14, -29085);
                var_33 *= 102;
            }
            for (int i_11 = 1; i_11 < 14;i_11 += 1)
            {
                var_34 = 154;
                var_35 = (((~2929241270263668324) == ((max(var_18, var_16)))));
            }
            for (int i_12 = 3; i_12 < 11;i_12 += 1)
            {
                var_36 = -17588;
                var_37 = (min(var_11, ((!(((var_5 ? 1 : 0)))))));
                arr_40 [i_2] [i_2] = ((((((((var_5 ? var_1 : 16825206372245644402))) ? var_6 : var_16))) ? (~42636) : ((((min(var_17, 1324053771)) <= var_11)))));
                var_38 = ((var_5 ? (!175) : (min(12110364287574775622, var_7))));
            }
            arr_41 [i_2] = ((-((-94 ? 102 : 268435392))));
        }
        for (int i_13 = 0; i_13 < 15;i_13 += 1)
        {
            arr_45 [i_2] [i_2] [i_2] = max(var_15, (min(var_1, 4398046511103)));
            var_39 = var_12;
            var_40 -= (var_17 == -1);
        }
    }
    #pragma endscop
}
