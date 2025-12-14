/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
                    {
                        var_10 = min(1, 17436);
                        var_11 = var_8;
                        var_12 = ((var_0 ? (arr_4 [i_1] [i_1] [i_0]) : 4294967293));
                        var_13 = (max(var_13, 2147483647));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                    {
                        arr_12 [i_2] [i_2] [i_0] [i_0] = var_8;

                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            arr_15 [i_5] [i_0] [i_0] [i_1] [i_1] [i_0] [i_0] = ((2147483618 ? 249 : 115));
                            var_14 = ((!(arr_6 [i_0] [i_2] [i_0] [i_5])));
                        }
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            var_15 = var_0;
                            var_16 = -2147483591;
                        }
                        for (int i_7 = 4; i_7 < 20;i_7 += 1)
                        {
                            arr_22 [i_0] [i_2] [i_2] [i_4] [i_7 - 1] = -32756;
                            var_17 = var_9;
                            var_18 = 14;
                            var_19 = (1296473121 & 262143);
                        }
                        for (int i_8 = 1; i_8 < 19;i_8 += 1)
                        {
                            var_20 = (arr_4 [i_8 + 1] [i_8 + 1] [i_8 + 1]);
                            var_21 = (max(var_21, (((192 ? 65512 : 3504)))));
                            var_22 ^= ((!(var_2 & -193752181)));
                        }
                    }
                    for (int i_9 = 1; i_9 < 18;i_9 += 1)
                    {
                        var_23 = (min(32747, 22966));
                        arr_31 [i_2] [i_1] [i_1] [i_9 - 1] [i_1] [i_1] = ((!((((((65525 ? (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_28 [i_9 - 1] [i_2] [i_0] [i_0] [i_0])))) ? var_3 : (((!(arr_27 [i_0] [i_0] [i_2] [i_0])))))))));
                        arr_32 [i_1] [i_0] [i_1] [i_0] = ((!(((((min((arr_25 [i_0] [i_0] [i_2] [i_0]), (arr_27 [i_0] [i_1] [i_2] [i_9 - 1])))) ? (min(1, -32752)) : ((((arr_21 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_9 + 3]) >= (arr_25 [i_0] [i_0] [i_2] [i_9 + 3])))))))));
                        var_24 = 658686488;
                        var_25 ^= (arr_9 [i_0] [i_1] [i_2]);
                    }
                    arr_33 [i_2] [i_1] [i_0] = (((((~-4111) | (arr_27 [i_2] [i_2] [i_0] [i_0]))) ^ ((min((arr_13 [i_0] [i_0] [i_1] [i_1] [i_0]), (arr_6 [i_0] [i_0] [i_1] [i_0]))))));
                    var_26 &= ((!(((var_9 ? (arr_24 [i_0] [i_1] [i_0] [i_2]) : (arr_24 [i_0] [i_1] [i_2] [i_2]))))));
                    var_27 = ((((!114) ? 106968641 : 55837)));
                }
            }
        }
        var_28 &= ((~(min(var_1, ((~(arr_24 [i_0] [i_0] [i_0] [i_0])))))));
    }
    var_29 = (max(186, -4606643015498122690));
    var_30 = (min(-32738, (var_0 | 6)));
    #pragma endscop
}
