/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;
    var_19 = (((min(var_2, (min(24, 8796093022208))))) ? (max((((var_1 ? var_3 : var_3))), (max(var_17, var_12)))) : var_9);
    var_20 = var_3;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (min(27744, 8796093020160));
        var_21 ^= (max(-27745, ((((min((arr_2 [i_0] [i_0]), 28995)) <= 53)))));
        var_22 = 7821038108289660710;
        var_23 = (min(var_23, -111));

        for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
        {
            var_24 ^= -24808;
            arr_7 [i_0] [i_1] [0] = (((112 ? ((((var_6 > (arr_4 [i_0] [i_1])))) : (-8796093020151 + var_17)))));
            arr_8 [i_0] [i_1] [i_0] = ((arr_4 [i_0] [i_0]) ? ((var_6 + (arr_1 [i_0] [i_0]))) : (-9141330350761487690 % var_15));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {
            arr_11 [i_0] [i_2] = 6376818376187374203;
            var_25 = (~34438);
            var_26 -= -28995;

            for (int i_3 = 2; i_3 < 8;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_27 ^= (((arr_16 [i_0] [i_2]) ? -126 : 8796093020133));
                            var_28 = ((28995 <= (arr_10 [i_0])));
                            var_29 = (min(var_29, (arr_19 [i_5] [i_4 - 1] [i_0] [i_3] [i_2] [i_0])));
                            var_30 = ((-(arr_19 [i_5] [i_4] [i_4 - 3] [i_4] [8] [i_3 - 2])));
                        }
                    }
                }
                var_31 = ((36530 ? (arr_17 [i_3 - 2] [i_2] [i_3] [i_2]) : 790715448));
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                arr_24 [i_0] [i_0] [i_2] = arr_19 [i_6] [3] [i_2] [i_2] [i_0] [i_0];
                var_32 = (arr_6 [i_0] [i_2]);
            }
            var_33 &= (((arr_15 [4] [4]) <= 1));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
        {
            var_34 = (arr_17 [0] [0] [i_7] [i_7]);

            for (int i_8 = 2; i_8 < 8;i_8 += 1) /* same iter space */
            {
                arr_30 [i_0] [i_0] [i_0] [i_0] = (((8796093020126 + -8796093020135) ? ((34438 + (arr_12 [i_0] [i_0] [i_0] [i_0]))) : ((-(arr_26 [i_0] [i_7] [i_0])))));
                var_35 = (arr_15 [i_0] [i_0]);
            }
            for (int i_9 = 2; i_9 < 8;i_9 += 1) /* same iter space */
            {
                var_36 ^= ((8796093020167 > (arr_13 [i_0] [i_0] [i_0] [i_0])));
                var_37 = 29992;
            }
            var_38 = (-5752312523549196999 - 2574819255);
        }
    }
    #pragma endscop
}
