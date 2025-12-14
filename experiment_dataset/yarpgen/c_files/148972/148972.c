/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_18 *= (var_1 ^ var_16);

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_19 = (var_4 ? var_5 : var_3);
            var_20 = (~-4138826203883637118);
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_21 = (~var_3);
            arr_8 [i_0] [i_0] [i_2] = ((-(~var_5)));

            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                var_22 = (var_5 & var_7);
                var_23 = (min(var_23, ((((~var_11) ? var_0 : -var_16)))));
                var_24 = (-var_17 ? ((var_12 ? var_15 : var_17)) : ((var_7 ? var_11 : var_3)));
            }
            for (int i_4 = 2; i_4 < 22;i_4 += 1)
            {
                arr_15 [i_0] [i_0] [i_0] [i_4] = ((var_11 ? var_9 : var_11));
                arr_16 [i_0] [i_2] [i_4 - 2] = var_3;
            }
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                var_25 = -var_0;
                var_26 = (min(var_26, var_6));
            }
        }
        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            arr_24 [i_6] [i_6] = -var_15;
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 22;i_8 += 1)
                {
                    {
                        arr_30 [i_0] [i_6] [i_7] [i_8] = 4138826203883637117;
                        var_27 = (~var_5);
                        arr_31 [i_0] [i_6] [i_6] = ((-590954560527038381 ? 11314 : 5));
                        arr_32 [i_0] [i_6 + 2] [i_6] [i_6] = (~var_15);
                    }
                }
            }
            var_28 = (min(var_28, var_15));
        }
        var_29 = var_7;
        var_30 = var_16;
    }
    var_31 = 2772972092941420930;
    var_32 = ((-(min((min(var_9, var_4)), (~var_8)))));
    #pragma endscop
}
