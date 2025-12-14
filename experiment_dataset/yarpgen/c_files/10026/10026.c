/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_3;

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                var_21 = (((var_5 ? var_5 : 1)));
                arr_7 [i_1] = var_7;
            }
            var_22 = (((((61837 ? var_5 : var_2))) ? (~22484) : ((var_14 ? 22484 : var_15))));
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        var_23 = (var_2 + var_15);
                        var_24 = (min(var_24, (!var_9)));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            var_25 = -22489;
            var_26 = (var_6 || var_11);
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 0;i_7 += 1)
                {
                    {
                        var_27 ^= var_6;

                        for (int i_8 = 2; i_8 < 15;i_8 += 1)
                        {
                            var_28 = (max(var_28, 22506));
                            var_29 |= -20019;
                            var_30 = (var_16 || var_4);
                            arr_25 [i_7] [i_0] [i_6] [i_0] [i_7] = (!-5767);
                        }
                        var_31 = (((var_10 ? var_16 : var_13)) - (var_19 + 52193));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_9 = 2; i_9 < 15;i_9 += 1)
        {
            arr_30 [i_9] = (((25 << var_2) ^ (-32767 - 1)));
            var_32 = ((~(var_13 ^ var_6)));
            arr_31 [i_9] [i_9] = -13796;
        }

        for (int i_10 = 2; i_10 < 13;i_10 += 1)
        {
            var_33 = (((var_9 ? 733255574 : (!1))));
            arr_36 [i_0] [i_0] [i_10] = max(-14816, 10598584447505640422);
            arr_37 [i_0] [i_0] = (((-var_12 ? (~var_1) : (!var_6))) - ((1 ? (((var_10 ? var_18 : var_14))) : 567369511)));
        }
        /* vectorizable */
        for (int i_11 = 4; i_11 < 14;i_11 += 1)
        {
            arr_40 [i_0] = (!var_17);
            var_34 = (max(var_34, -22507));
        }
        for (int i_12 = 0; i_12 < 16;i_12 += 1)
        {
            var_35 = var_5;
            var_36 = var_6;
            var_37 = (max(var_37, (((((var_4 || var_1) ? var_3 : (((min(0, var_10))))))))));
            var_38 = ((((var_1 << (var_0 / var_16))) - ((-(max(var_15, var_8))))));
        }

        for (int i_13 = 1; i_13 < 13;i_13 += 1)
        {

            for (int i_14 = 4; i_14 < 13;i_14 += 1)
            {
                var_39 = var_2;
                var_40 ^= (min((max(-10452, var_14)), var_6));
                var_41 |= ((var_15 * ((min((!var_8), (!var_0))))));
            }
            var_42 = ((-var_7 || (((var_10 + ((0 ? var_16 : var_13)))))));
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            var_43 = (((((-22485 ? var_13 : 42085))) ? 65535 : 3136975718));
            arr_53 [i_0] [i_15] [i_15] = ((var_2 ? 217 : var_5));
            var_44 = (var_18 | 12132);
        }
    }
    for (int i_16 = 2; i_16 < 15;i_16 += 1)
    {
        var_45 = (max(var_45, 51236));
        arr_58 [i_16] = (3136975718 * -22485);
        arr_59 [i_16] = ((var_19 * (52169 / var_6)));
        var_46 = (min(0, 28275));
    }
    var_47 = var_1;
    var_48 = ((!((!(((var_15 ? 3277837682327292323 : var_8)))))));
    #pragma endscop
}
