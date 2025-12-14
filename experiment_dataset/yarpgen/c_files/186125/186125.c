/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;
    var_15 = var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_16 = var_7;
                        var_17 += ((12647 ? var_8 : (19668 * 18)));
                        var_18 -= ((arr_3 [i_0] [i_2 + 2]) / -1607184867);
                        var_19 = (var_1 ? (arr_8 [1] [1] [i_1] [1]) : (((var_3 ? 45872 : var_4))));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_20 = ((((-110 ? var_13 : (arr_1 [i_0]))) / -19664));
                        var_21 = ((-8460554845401496352 ? (var_3 > 8460554845401496352) : ((29726 ? var_9 : var_6))));
                        arr_13 [i_1] = (((((45872 ? var_8 : var_9))) ? (var_0 / 1122922039) : var_4));
                        var_22 = (min(var_22, (((var_5 ? (arr_0 [i_2 + 1] [i_2]) : 7245271640683456226)))));
                    }
                    for (int i_5 = 1; i_5 < 10;i_5 += 1) /* same iter space */
                    {
                        var_23 = (max(var_23, ((((arr_14 [i_5 + 2] [i_5 - 1] [i_2] [i_2 + 3] [i_1]) < var_3)))));
                        arr_17 [i_1] [i_1] = (-var_4 && var_5);
                    }
                    for (int i_6 = 1; i_6 < 10;i_6 += 1) /* same iter space */
                    {
                        arr_22 [i_0] [i_1] [i_2] [i_0] &= (((arr_18 [i_0] [1] [1] [i_6]) >> (var_11 - 12115895018291040406)));
                        arr_23 [i_6] [i_1] [i_1] [i_1] [i_0] = var_3;
                        var_24 = (max(var_24, 35807));
                        var_25 *= ((var_0 <= (arr_0 [i_2 + 2] [i_2 + 2])));

                        for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                        {
                            var_26 = var_7;
                            var_27 = var_3;
                        }
                        for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
                        {
                            arr_28 [i_0] [i_1] [i_1] [i_6 + 1] [i_8] = ((2373492048 ? var_8 : var_13));
                            arr_29 [i_0] [i_1] [0] [i_1] [i_2 - 1] = ((-((0 ? var_11 : var_10))));
                            var_28 = (((arr_26 [i_6 + 2] [i_6] [i_6 + 2] [i_6 + 2] [i_6]) ? 184 : ((-75 ? var_10 : 3791333937))));
                            var_29 = (-6048177376853783552 / 6439961185177745298);
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 11;i_10 += 1)
                        {
                            {
                                var_30 = -var_8;
                                arr_35 [i_2 + 3] [i_0] [i_10] [i_0] [i_1] [i_10] = 6048177376853783551;
                                var_31 = (((arr_19 [i_0] [i_10 - 2] [i_1]) ? var_12 : (arr_9 [i_0] [i_10 - 2] [i_2 + 2] [i_0])));
                            }
                        }
                    }
                    var_32 = var_0;
                }
            }
        }
        var_33 = var_4;
        var_34 = ((arr_4 [i_0] [i_0]) ? 32767 : var_13);
    }
    #pragma endscop
}
