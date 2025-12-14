/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_12 = (((~((min(113, (arr_2 [i_0] [i_0] [i_0])))))) | (arr_3 [i_0] [i_0]));
                var_13 = (min(var_13, ((((65514 ? 49 : -32749))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_14 -= (arr_8 [i_0] [i_1] [i_2] [i_3]);
                        var_15 = -16;
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_16 = (min(var_16, 22));
                        var_17 = ((~(arr_4 [i_1] [i_4])));
                        arr_16 [i_0] [i_4] = ((var_9 ? -1 : 3));
                    }
                    var_18 = (((!(arr_7 [i_2]))) ? (arr_14 [i_0] [i_2] [i_2] [i_0]) : 10722);
                    var_19 = (((arr_0 [i_0]) ? 0 : var_7));
                    var_20 = ((~(arr_2 [i_0] [i_1] [i_0])));
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        {
                            var_21 = (min(var_21, var_2));

                            for (int i_7 = 0; i_7 < 20;i_7 += 1)
                            {
                                var_22 = (!(arr_24 [i_0] [i_0] [i_1] [i_1] [i_5] [i_0] [i_7]));
                                var_23 = (max(1804333286, (((arr_17 [i_0] [i_6] [i_0] [i_0]) / 10516125908241861390))));
                                arr_26 [i_0] [i_5] [i_7] = ((!((min((arr_3 [i_0] [i_0]), 3565786194832583611)))));
                            }
                            for (int i_8 = 0; i_8 < 20;i_8 += 1)
                            {
                                var_24 = ((((arr_19 [i_0] [i_0] [5] [i_6] [i_8]) | (arr_19 [i_0] [i_1] [i_5] [i_0] [i_8]))));
                                var_25 = (min(-40, (!1)));
                                var_26 -= (arr_8 [i_0] [i_1] [i_0] [i_6]);
                            }
                            for (int i_9 = 0; i_9 < 20;i_9 += 1)
                            {
                                var_27 = (((59105 * 31) ^ (arr_28 [i_0] [i_1] [i_5] [i_6] [i_9])));
                                var_28 *= (((((!(arr_10 [i_0] [i_0] [i_0])))) == (arr_10 [i_0] [i_0] [i_9])));
                            }
                            arr_31 [i_6] [i_1] [i_6] [i_6] [i_0] [17] = (((((((1 ? (arr_25 [i_0] [i_1] [i_5] [i_5] [i_6]) : 1))) ? (arr_15 [i_6] [i_5] [i_1] [i_0]) : 104)) * ((((((65534 ? 17268 : (arr_17 [i_0] [16] [i_0] [i_6]))) < (arr_23 [i_0] [i_1] [i_0] [i_0])))))));
                        }
                    }
                }
                var_29 -= ((min((arr_18 [i_0] [i_0] [i_0]), (((arr_13 [i_0] [i_0] [i_0] [i_1] [i_1]) * var_10)))));
            }
        }
    }
    var_30 = var_3;
    var_31 *= var_4;
    #pragma endscop
}
