/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_16 &= var_12;

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = (((arr_0 [i_0] [i_0]) % (arr_1 [i_0])));
            arr_7 [i_0] |= 264964778;
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_17 -= ((!(((5287886291753929129 ? -8882 : var_1)))));
            var_18 = -var_3;
            var_19 = (arr_4 [i_2] [i_0]);
            var_20 = -636562308;
            var_21 = ((!(arr_8 [i_0] [i_2] [i_2])));
        }
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            arr_15 [i_0] [i_3] = (!8854);
            arr_16 [i_0] [i_0] = (arr_3 [i_3] [i_3]);
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 19;i_6 += 1)
                    {
                        {
                            arr_25 [16] [i_6] [i_4] [i_5] [i_0] [i_6 + 2] [i_0] = ((var_6 / 236) ? (arr_10 [i_6 - 2]) : (arr_4 [i_0] [i_3]));
                            var_22 = (min(var_22, var_3));
                            arr_26 [i_0] [i_6] [i_0] [i_0] [i_0] [i_0] = ((!(arr_18 [i_0] [i_4] [i_0] [i_0])));
                            var_23 *= ((31081 << ((((((~(arr_5 [i_4] [i_0]))) + 77)) - 12))));
                            var_24 &= ((var_14 == (arr_8 [i_0] [i_0] [i_6 - 1])));
                        }
                    }
                }
            }
            var_25 = var_8;
        }
    }
    for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
    {
        var_26 |= var_11;
        var_27 = ((min((arr_24 [12] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]), 1)));
        var_28 = (((max(115, 1498420515)) | (arr_4 [i_7] [i_7])));
    }
    var_29 = ((((min((min(153, var_3)), ((min(13942, -1649680176)))))) ? var_5 : var_0));
    #pragma endscop
}
