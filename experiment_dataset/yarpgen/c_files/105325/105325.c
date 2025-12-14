/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 16;i_1 += 1) /* same iter space */
        {
            var_15 = (((((~(((arr_1 [i_0] [i_0]) ? 1 : (arr_1 [13] [i_1])))))) ? ((31 << (1809440630 - 1809440617))) : (max((~1), (arr_4 [i_0] [i_0])))));
            var_16 = (((!var_6) ? ((+(((arr_2 [i_0] [i_1]) ? -30 : var_3)))) : (((8109920131183542446 ? 24389 : 237)))));
            arr_5 [i_0] [i_0] = ((((((min(4200352606, var_4))))) > 4294967295));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                var_17 -= var_5;
                var_18 = ((64926 * (!27862)));
                var_19 = ((-6 ? (arr_3 [i_0] [i_0 - 1]) : 65513));
            }
            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                var_20 = 1;
                arr_11 [i_0] [i_1] [4] [i_0] = (~1);
                arr_12 [i_0] [i_0] = ((((((142 ? (arr_3 [i_0] [i_1]) : 2147483647)))) ? ((~(~17465947358766650551))) : var_12));
                arr_13 [i_0] [i_0] [i_0] [i_0] = (((((arr_8 [i_0] [i_1] [i_3 - 1] [i_3 - 1]) ? (arr_3 [i_1] [15]) : ((max((arr_9 [i_0] [i_0] [i_3]), 1))))) * ((+(((arr_0 [i_3] [i_3]) / (arr_8 [i_0] [i_1] [i_1] [i_0 - 1])))))));
            }
            var_21 = ((11750 ? 1 : 219));
        }
        for (int i_4 = 3; i_4 < 16;i_4 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 16;i_7 += 1)
                    {
                        {
                            var_22 = ((~((-((var_2 / (arr_8 [i_0] [i_5] [i_5] [3])))))));
                            var_23 &= (min((((((3642343476 ? 229 : 652623832)) > (228 < 67108863)))), ((((758757070016476879 ? (arr_19 [i_0] [i_0] [i_0] [i_6]) : 1)) - ((-7 ? 4 : 58607))))));
                        }
                    }
                }
            }
            var_24 = ((17611527071756009161 ? 632 : 10066284109361489826));
        }
        var_25 *= 2;
    }
    /* LoopNest 2 */
    for (int i_8 = 2; i_8 < 19;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 20;i_9 += 1)
        {
            {
                var_26 = ((1 ? (((-4143242461820945182 ? 4039813561 : 8058603423728460041))) : 48817));
                var_27 = (--26278);
                var_28 = (min(var_6, (max(22, 25870))));
            }
        }
    }
    #pragma endscop
}
