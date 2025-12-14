/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((~((1 ? var_7 : 12103309047104773272)))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [9] = ((!(((var_3 ? 1 : ((-921681478 ? var_7 : 42)))))));
        arr_4 [i_0] = ((!(((max(var_6, var_5))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_21 |= ((149 ? 255 : (min(((max(-222647563, -109))), ((23832 ? var_6 : 2545687284))))));
                    arr_10 [i_1] [i_1] [i_1] = (min((!15006652291222876747), (max(-2306964519190806163, ((max(215, 9674)))))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] = ((min((((var_17 ? 13 : var_13))), ((var_1 ? -1434984755 : 14281024795813462236)))));

        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 11;i_7 += 1)
                    {
                        {
                            var_22 = 1758014912;
                            var_23 = (max(var_6, ((((max(-437981493, 65535)) | ((min(var_14, 112))))))));
                        }
                    }
                }
                arr_26 [i_3] [i_4] [i_5] = 1;
            }
            for (int i_8 = 1; i_8 < 10;i_8 += 1)
            {
                var_24 ^= var_9;
                var_25 = ((-((-2777720296 ? ((10622 ? 42 : 55846)) : ((var_14 << (62 - 54)))))));
            }
            var_26 &= (max((max((min(2220823102107330330, 101)), 5749301537024645524)), ((max(-10622, 1181524391)))));
            arr_29 [i_3] [i_4] [i_4] = (!9817);
            arr_30 [i_4] [i_4] [i_4] = -846707033;
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 18;i_9 += 1)
    {
        for (int i_10 = 3; i_10 < 17;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 16;i_11 += 1)
            {
                {
                    arr_38 [i_11 - 1] [i_11 - 1] [i_11 - 1] = -415365352096397401;
                    var_27 = (min(var_27, (min(((((min(-1496145977, 15931047371034104747))) ? -var_7 : ((var_14 ? var_13 : var_0)))), -1239552987))));
                }
            }
        }
    }
    var_28 = (max(var_28, (((108 ? -16772 : -2025846886)))));
    #pragma endscop
}
