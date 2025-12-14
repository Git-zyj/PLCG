/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = -var_17;
        var_19 = ((190 ? -331712128 : 3));
        var_20 -= var_4;
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (min(var_3, (((var_12 ? 331712099 : (15 < -1))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 22;i_4 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 23;i_5 += 1)
                        {
                            var_21 ^= (var_1 & -331712128);
                            arr_18 [i_2] [i_2] [i_3] [15] [1] = var_3;
                            var_22 = var_7;
                        }
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_23 |= (max(((((min(var_5, var_17))) ? -1705355897 : var_7)), 11));
                            var_24 = (min(var_24, var_8));
                            arr_23 [i_1] [i_2] = (max((max((max(var_4, var_15)), (max(var_15, var_12)))), -4948));
                        }
                        for (int i_7 = 3; i_7 < 23;i_7 += 1)
                        {
                            var_25 = (max((max((max(var_14, var_5)), var_2)), var_18));
                            var_26 = min(((~(max(var_11, 331712116)))), ((((((var_2 ? var_15 : var_16))) != 5834100215039949145))));
                            var_27 = 41;
                        }
                        var_28 = ((!((min(((min(-331712075, 32767))), ((var_10 ? 2 : var_5)))))));
                    }
                }
            }
        }
        var_29 = min(((min(236, var_16))), var_18);
    }
    for (int i_8 = 2; i_8 < 23;i_8 += 1)
    {
        arr_29 [i_8] = -576786100;
        var_30 = (max((((-1111177387412674290 / (~var_3)))), 15951345029337965804));
    }
    var_31 = var_14;
    #pragma endscop
}
