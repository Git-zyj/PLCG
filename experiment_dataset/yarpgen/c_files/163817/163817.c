/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((((35 || 10) ? var_12 : (232 * var_12))), var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_18 = (((arr_6 [i_0] [i_0]) <= ((((((arr_4 [i_0] [i_0]) * -97))) ? -76 : var_8))));
                var_19 = ((((5351577248858577350 ? (arr_4 [i_1] [i_1 - 2]) : 22763)) >= (arr_5 [i_1] [i_1 - 1])));

                for (int i_2 = 1; i_2 < 8;i_2 += 1) /* same iter space */
                {
                    var_20 = 239;
                    var_21 = (arr_3 [i_0]);
                    arr_9 [i_2] [i_1] [i_2] = ((-(arr_8 [i_2])));
                    var_22 = (min((arr_4 [6] [i_2]), ((-(((var_9 < (arr_5 [3] [i_1]))))))));
                }
                for (int i_3 = 1; i_3 < 8;i_3 += 1) /* same iter space */
                {
                    arr_12 [i_3] = ((116 ? 42751 : ((-22782 ? ((min(var_3, 22784))) : -104))));

                    for (int i_4 = 2; i_4 < 8;i_4 += 1)
                    {
                        var_23 = (arr_5 [i_4 - 1] [9]);
                        var_24 = max(-var_11, (((22783 == (((arr_14 [i_3] [i_3] [i_3] [i_3] [i_3] [i_0]) >> (((arr_6 [i_4 + 1] [i_4 + 1]) + 66))))))));

                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_25 = (42752 + 2181843386368);
                            arr_20 [i_0] [i_1] [i_3] [i_1] [i_3] [i_5] = 60;
                            var_26 = arr_15 [i_0] [i_1] [i_1];
                        }
                        var_27 = (min(var_27, ((((arr_2 [i_4 + 2]) ? (((arr_2 [i_4 - 2]) ? (arr_2 [i_4 - 2]) : (arr_2 [i_4 - 1]))) : ((108 >> (128 - 101))))))));

                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            arr_23 [i_3] = ((22766 ? -104 : ((((max(18446741891866165248, (arr_21 [i_0] [i_0] [i_1] [i_3 + 1] [i_4] [i_0]))) >= (((var_14 ? (arr_4 [i_0] [i_3]) : 63712))))))));
                            var_28 = (min(var_28, 138));
                            var_29 = (((((min(255, -99))) * var_6)));
                        }
                    }
                }
            }
        }
    }
    var_30 -= var_14;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            {
                var_31 = ((65514 ? (((-(arr_24 [i_7])))) : ((max((!22790), 63)))));
                var_32 = 12518;
                var_33 = ((~(min((arr_25 [i_8]), (arr_25 [i_8])))));
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 10;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            {
                                var_34 ^= (--112);
                                var_35 = (arr_31 [i_10] [7] [i_10 + 1] [7]);
                                arr_39 [i_10] = ((max(12518, ((80 ? 59 : 110)))));
                                arr_40 [3] [i_8] [i_9] [i_10] = 76;
                            }
                        }
                    }
                }
            }
        }
    }
    var_36 *= ((((((min(var_4, var_14))) - ((43213 ? var_2 : var_4)))) | var_16));
    #pragma endscop
}
