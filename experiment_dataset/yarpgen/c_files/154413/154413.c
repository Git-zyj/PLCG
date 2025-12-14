/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_13 ? (((var_3 ? (~-5923) : (~1)))) : (((var_13 | 1540481218) ? ((var_7 ? 15279908562836531033 : 7)) : var_6))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_20 &= var_4;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_21 = ((+(((arr_11 [i_3 + 1] [i_3 - 2] [2] [i_3 + 4] [i_3 + 4]) / -53))));
                                arr_13 [i_1] [i_2] = ((((((arr_7 [i_3 - 1] [i_3 - 2] [i_3] [i_3 - 1]) & 4503599627370495))) ? 65535 : (((2758 ? 0 : -3488)))));
                                var_22 = ((((var_15 == var_6) ? (!-3476) : 4294967295)));
                                var_23 = ((!(((~var_3) >= 65531))));
                            }
                        }
                    }
                    var_24 = (((max((((arr_10 [i_1] [2]) ? 11563391748507682744 : -5947)), (65532 << 6))) + (max(1, (max(18446744073709551615, 2))))));
                    arr_14 [i_1] = (((((~(arr_11 [i_0] [i_0] [i_0] [2] [i_0])))) ? (((((0 ? var_8 : (arr_3 [i_0]))) <= (~65529)))) : (min(-69, ((-(arr_8 [i_2] [i_2] [i_2] [i_2])))))));
                }
            }
        }
    }
    var_25 = ((var_6 == ((max(-3891181244110948270, 4294967295)))));
    #pragma endscop
}
