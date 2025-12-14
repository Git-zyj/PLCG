/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((((var_3 ? var_10 : -5749))) ? 65535 : -3571))) ? ((-((18446744073709551615 ? 8787423053170306935 : 524360506746584867)))) : (((13526400961381538064 ? (min(-94, var_5)) : (((-(-32767 - 1)))))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 11;i_3 += 1)
                {
                    {
                        var_16 = (max(((13805 ? ((var_3 ? 1642750986 : -32740)) : 503796960)), var_8));
                        var_17 = (~9223372036854775807);
                        var_18 = ((var_8 ? 4080540525 : (((0 ? 112 : 2537)))));

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            var_19 = (min(var_19, ((3400870566 ? ((var_12 ? ((var_1 ? (arr_2 [i_0] [i_4]) : 524360506746584867)) : (!1))) : (arr_13 [i_0] [i_0] [i_1] [i_0] [i_0])))));
                            var_20 = 0;
                        }
                    }
                }
            }
        }
        arr_15 [i_0] = -29090;
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 12;i_7 += 1)
            {
                {
                    var_21 = (arr_17 [i_5] [i_6 - 1]);
                    var_22 &= (((min(((min(7, 1))), (max(5561011045856902089, 109)))) != ((1073741823 ? (((arr_21 [i_5 - 1] [i_5 - 1] [i_7]) ? var_3 : 9223372036854775806)) : (-2147483647 - 1)))));
                }
            }
        }
    }
    #pragma endscop
}
