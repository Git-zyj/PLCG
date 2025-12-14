/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = (min((((!((max(-967049653, 230)))))), ((min(var_8, 8601373891237387155)))));
                arr_5 [i_0] [i_1] = ((max(((max(var_10, 0)), 6))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_15 |= var_7;
        arr_9 [i_2] [i_2] = var_1;

        for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
        {
            var_16 |= ((!(((((min(var_14, var_1))) ? -71 : 3)))));
            arr_12 [i_2] = (4462072363990888450 ? (max(((-7 ? var_7 : 0)), (~0))) : ((((((max(1, 220)))) >= (min(var_2, 6991))))));
            var_17 = ((((max(-14, 0))) ? ((min(((1 ? 54567 : -6)), (!46)))) : ((558551906910208 ? -627513790 : 4734142911170509634))));
            arr_13 [i_2] [1] = ((!(((0 ? -4462072363990888450 : 4503599627370496)))));
        }
        for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
        {
            arr_16 [i_2] [i_2] [i_4] = (((((((83 ? 1186 : 31))) ? (min(1, 11362693365529521289)) : 22969))) ? (min(-94, 133955584)) : ((1186 ? 11005 : 2147483647)));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 15;i_7 += 1)
                    {
                        {
                            var_18 ^= (min(18446744073709551605, (18446744073709551615 - 2147483639)));
                            arr_24 [i_2] [i_2] [i_2] [i_6] [i_7] = (min((((117 > (!0)))), -1888286503));
                        }
                    }
                }
            }
            var_19 = (~1);
            arr_25 [i_2] [i_2] [i_2] = 70;
        }
    }
    #pragma endscop
}
