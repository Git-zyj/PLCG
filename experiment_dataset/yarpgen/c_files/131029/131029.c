/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_1 != 1023);

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0 + 1] [i_0] = ((((var_9 >= (~8160))) && var_2));
        arr_4 [6] [6] |= 2855;
        var_15 = (((max((~3081508980), ((((arr_0 [i_0 - 1]) ? var_8 : var_3))))) != ((((-32 + 2147483647) >> (min(15, 1423276290)))))));
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_10 [i_1] [1] = ((1 << (27376 - 27355)));
            var_16 = (!3584);

            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    arr_15 [i_3] [i_3] = ((15 ? (var_11 > 3561451090) : (((arr_5 [i_3]) ? 28 : (arr_7 [i_4])))));
                    var_17 += -1012;
                }
                var_18 -= var_11;
            }
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                var_19 = ((!(arr_7 [i_1 + 1])));
                var_20 = (min(var_20, (((62681 && (arr_14 [i_2]))))));
            }
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    {
                        arr_25 [i_1] [i_1] [i_7] = (arr_11 [i_1] [i_1 - 2] [i_7] [i_1]);

                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            var_21 = (min(var_21, ((((arr_12 [i_1] [i_1]) * -1023)))));
                            var_22 = (1041 || 87);
                        }
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            var_23 = -var_8;
                            arr_31 [7] [i_2] [i_6] [0] = 32;
                        }
                        var_24 = (max(var_24, (((~((var_10 ? (arr_11 [i_7] [i_7] [i_7] [i_1]) : 2378815998)))))));
                    }
                }
            }

            for (int i_10 = 3; i_10 < 15;i_10 += 1)
            {
                var_25 = var_13;
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 16;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        {
                            var_26 = (max(var_26, (((55 ? var_9 : -39)))));
                            var_27 = ((62680 ? var_5 : ((21621 ? (arr_9 [i_10]) : -12))));
                            arr_40 [i_1 + 1] [i_2] [i_10] [i_12] [i_11] = ((1 > (var_0 <= var_13)));
                        }
                    }
                }
            }
            for (int i_13 = 0; i_13 < 17;i_13 += 1)
            {
                var_28 ^= (3081508979 ? (arr_38 [i_1] [i_1] [i_1 - 2] [i_1 + 2] [i_1 + 4]) : var_3);
                arr_45 [i_13] [i_2] [i_13] = var_6;
                var_29 = (((var_9 / 1041) > ((var_6 ? -7259 : 23837))));
                arr_46 [i_13] [i_13] [15] = ((~(arr_6 [i_1])));
                var_30 += ((~((((arr_29 [i_1] [i_2] [i_2] [i_13] [i_13] [i_13] [i_13]) < (arr_43 [i_1]))))));
            }
        }
        var_31 *= ((-((min(-6387, (max(var_10, 1)))))));
    }
    var_32 = (max(var_11, ((4294966784 ? 127 : ((2675876264 ? 3373727747 : 297763125))))));
    var_33 = (min(var_33, var_1));
    #pragma endscop
}
