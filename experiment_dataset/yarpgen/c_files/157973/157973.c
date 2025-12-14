/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    {
                        var_13 = (arr_8 [i_2] [i_2] [i_2 - 2] [i_3 + 3]);
                        var_14 = -var_8;
                        arr_10 [i_3] = (((((330877862 ? 0 : -110))) ? var_6 : (((arr_6 [i_0] [i_1] [i_2] [i_3]) ? -1 : var_5))));
                        arr_11 [i_0] [i_3] [i_2] [i_3] = 18446744073709551615;
                    }
                }
            }
        }
        var_15 = ((var_1 ? (((((arr_8 [i_0] [i_0] [i_0] [i_0]) + 2147483647)) << (((-20517 + 20530) - 13)))) : -1430779340));
        arr_12 [i_0] = (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : var_11));

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_15 [i_0] [i_4] [i_4] = (18446744073709551615 != 827475846);
            var_16 = (!-20517);
            var_17 = (13163644003580776668 > var_1);
        }
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
    {
        var_18 = (max(var_18, var_5));

        /* vectorizable */
        for (int i_6 = 2; i_6 < 15;i_6 += 1)
        {
            var_19 = ((((arr_21 [i_5] [i_6]) ? var_4 : var_5)) + 1);
            arr_22 [i_5] = ((-100 - (arr_5 [i_5])));
        }
    }
    var_20 ^= ((-var_8 ? (min(0, ((var_8 ? 245 : -20517)))) : var_0));
    var_21 = (((((!(~var_2)))) > var_10));
    #pragma endscop
}
