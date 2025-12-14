/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_10 = (arr_1 [i_0]);
        var_11 = ((((((arr_0 [11]) / ((max((arr_1 [i_0]), 33812)))))) && (819383881 != 6802477988374299198)));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_12 -= (((((((arr_3 [i_1] [i_1]) ? var_5 : var_8)))) != 34509));

        /* vectorizable */
        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            var_13 = var_7;
            var_14 = -1514804911;
            var_15 = -2856277479181544694;
            var_16 = var_5;

            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                var_17 = 819383874;
                var_18 = ((!(arr_1 [i_2])));
            }
            for (int i_4 = 3; i_4 < 16;i_4 += 1)
            {
                var_19 = -11104;
                var_20 &= var_4;
                var_21 = (((~819383877) != (arr_11 [i_1] [i_2] [i_4 + 2] [i_4 - 1])));
            }
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                var_22 = (min(var_22, (((-819383870 && (arr_3 [i_2] [i_1]))))));
                var_23 = (arr_1 [i_1]);
                var_24 += -2673274595794125738;
                var_25 = (((-7858341791537727261 ? -819383852 : -1024)));
            }
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            var_26 = ((7858341791537727264 ? 1 : 1716877251));
            var_27 = 9;
            var_28 = var_2;
        }
    }
    var_29 = (max((((var_5 && 2387799533538007820) ? (~14297497249065890150) : (((var_4 ? var_0 : var_3))))), var_6));
    var_30 = var_2;
    #pragma endscop
}
