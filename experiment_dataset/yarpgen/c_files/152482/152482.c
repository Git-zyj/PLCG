/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += var_10;
    var_18 = ((((!-106214822) < -610432413)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 = 65472;

        for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        {
                            var_20 = -2875377791303810647;
                            arr_11 [2] [i_3] [1] [i_3] [i_0] = (((arr_5 [i_1] [i_3]) % (~610432426)));
                            var_21 = (min(var_21, (~610432433)));
                        }
                    }
                }
            }
            var_22 = var_11;
            var_23 += (arr_8 [i_0] [i_0] [i_0] [i_1]);

            for (int i_5 = 2; i_5 < 8;i_5 += 1) /* same iter space */
            {
                arr_16 [i_0] [8] [i_0] [i_0] = -7263;
                var_24 = ((-1 > (!-22)));
            }
            for (int i_6 = 2; i_6 < 8;i_6 += 1) /* same iter space */
            {
                var_25 -= (arr_13 [i_6 + 1] [i_6] [i_6 - 1] [i_6 + 3]);
                var_26 = (28105 / -28088);
            }
            arr_19 [i_0] = ((!(arr_10 [i_0] [1] [i_0] [i_1])));
        }
        for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
        {
            var_27 += 27946;
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        {
                            arr_31 [i_0] [2] [i_7] [i_8] [i_9] [i_7] [i_10] = (((arr_23 [i_7]) ? var_3 : var_6));
                            arr_32 [i_8] [i_0] [i_0] [i_8] [i_0] [i_8] [4] |= ((!(arr_4 [i_0] [i_7] [i_9])));
                        }
                    }
                }
            }
        }
        arr_33 [i_0] = (18783 == 247);
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 14;i_11 += 1)
    {
        var_28 += ((610432410 ? 22756 : 96));
        var_29 = ((((((arr_36 [i_11]) ? var_13 : (arr_37 [i_11])))) ? ((18783 ? 247 : (arr_36 [i_11]))) : 28082));
        var_30 ^= 22756;
    }
    var_31 = ((var_2 >> (var_4 + 17324)));
    var_32 = var_11;
    #pragma endscop
}
