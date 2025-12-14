/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;
    var_19 = ((var_14 << (var_3 < var_10)));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 = (min(var_20, (((((var_17 & (var_15 >= var_5))) <= ((((var_0 < (var_14 ^ var_5))))))))));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_21 -= ((((((var_14 | var_5) < var_2))) << var_15));
            var_22 = ((var_0 ^ ((((var_2 | var_9) < (var_3 / var_11))))));
            var_23 |= (var_10 | var_3);
        }
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            var_24 = ((((var_2 | (((var_4 + 2147483647) << (((var_16 + 1853294616) - 12)))))) ^ (((2147483647 >= (-2147483647 - 1))))));
            arr_9 [i_2] [i_2] = (var_5 > var_17);
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 17;i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    {
                        arr_20 [i_0] [i_3] [11] [11] = (var_17 <= ((var_5 >> (var_10 + 621))));
                        arr_21 [i_0] [i_3] [i_4] [16] = var_11;
                        var_25 = var_3;
                        arr_22 [i_0] [i_3] [i_3] [i_3] = var_11;
                    }
                }
            }
            var_26 = (min(var_26, var_8));
            var_27 |= var_9;
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    {
                        var_28 = (max(var_28, var_0));
                        var_29 = (((var_3 && var_16) || (var_2 && var_5)));
                        var_30 = ((var_12 ^ (var_2 >> var_13)));
                    }
                }
            }
            var_31 += ((1 > (var_2 <= var_10)));
        }
        for (int i_8 = 1; i_8 < 17;i_8 += 1) /* same iter space */
        {
            var_32 = (min(var_32, (((((((var_16 || (var_0 | var_6))))) == var_17)))));
            arr_31 [i_0] [8] [i_0] &= (((((((var_1 + 2147483647) << var_6)) == var_14))) >> ((((var_17 ^ (var_8 * -959648238))) - 469783367231236438)));
            var_33 = (((959648246 << (18446744073709551615 - 18446744073709551615))) | -24896);
        }
        arr_32 [i_0] [5] = var_15;
    }
    for (int i_9 = 0; i_9 < 10;i_9 += 1)
    {
        var_34 &= var_11;
        var_35 = var_3;

        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {

            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                var_36 = (6366580707567856329 * 2305841909702066176);
                var_37 = var_1;
                var_38 = (((((var_3 + 2147483647) << (959648237 <= 0))) >= ((var_15 << (((((var_1 + 2147483647) >> var_14)) - 210519641))))));
                var_39 = var_17;
            }
            var_40 = (max(var_40, (((var_8 >> (var_5 >= var_8))))));
            var_41 = (var_14 >= var_6);
            var_42 = ((var_15 && (((var_7 - var_2) >= var_1))));
        }
        for (int i_12 = 0; i_12 < 10;i_12 += 1)
        {
            var_43 = ((var_2 || (var_7 | var_5)));
            var_44 = var_14;
        }
        var_45 = var_8;
    }
    #pragma endscop
}
