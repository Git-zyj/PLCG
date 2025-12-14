/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 -= ((var_9 ? ((var_0 << (((arr_2 [i_0] [i_0]) - 8406848607552008418)))) : (arr_3 [i_0])));
        var_17 = -25127;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_18 = (~-25127);
            var_19 += -8192;
        }
        for (int i_3 = 1; i_3 < 24;i_3 += 1)
        {
            var_20 = 7773920980224596099;
            var_21 = var_10;
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_22 += ((((min(var_10, 29957)) | (~var_7))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    {
                        arr_17 [i_4] [i_4] [i_5] [i_6] [i_1] [i_5] = var_15;
                        var_23 -= var_0;
                    }
                }
            }
        }
        arr_18 [i_1] = (((var_5 ? var_9 : var_2)));
        var_24 = -11189936675845330377;
    }
    var_25 = (min(var_25, var_13));

    for (int i_7 = 3; i_7 < 20;i_7 += 1)
    {
        var_26 += max(((min(((var_11 ? -15 : var_7)), ((max(var_15, 25646)))))), var_1);
        arr_21 [i_7] = (((~var_3) ? (arr_11 [i_7] [i_7]) : 29963));
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 18;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 18;i_10 += 1)
                {
                    {
                        var_27 = (max(var_27, ((((max(2987, ((var_1 ? var_4 : var_7)))) <= 7256807397864221237)))));
                        var_28 -= ((((((arr_0 [i_10 + 3]) ? var_0 : 5268))) ? ((var_1 ? var_6 : 127)) : (arr_0 [i_10 + 3])));
                        var_29 *= ((min(-1, (var_9 + 4224926284))));
                    }
                }
            }
        }
        arr_29 [i_7] = (min(-1452, 7773920980224596103));
    }
    var_30 = var_8;
    var_31 = var_8;
    #pragma endscop
}
