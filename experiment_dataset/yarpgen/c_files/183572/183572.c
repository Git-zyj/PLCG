/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(((((32767 ? 0 : 3683345425461997103)))), -var_18));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = arr_0 [i_0];
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_21 &= (((arr_0 [i_1]) ? (((-(arr_6 [i_0] [i_1] [i_2] [i_2])))) : (arr_2 [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_13 [1] [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] = ((var_15 / (arr_10 [i_4 + 1] [i_4 - 1] [i_0] [23] [17])));
                                var_22 = (arr_8 [i_0] [i_3] [i_1] [i_1] [i_1] [i_0]);
                                var_23 = ((-(arr_4 [i_3] [i_1] [i_0])));
                                arr_14 [i_0] = (((((arr_11 [0] [i_3] [i_1]) || var_16)) ? ((((arr_3 [i_0]) ? (arr_0 [i_1]) : (arr_8 [i_0] [1] [i_2] [i_3] [15] [i_4 + 1])))) : ((3683345425461997103 ? (arr_1 [2] [2]) : (arr_5 [9] [i_1] [i_0])))));
                            }
                        }
                    }
                    var_24 = ((((arr_8 [i_0] [23] [23] [i_2] [8] [1]) & 3683345425461997103)) - (arr_8 [i_0] [8] [i_2] [i_2] [13] [i_2]));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_0] [17] [i_0] [i_0] [i_0] [i_0] = var_6;
                                var_25 = (((arr_9 [i_1] [i_0] [i_5] [i_6]) ? (arr_9 [6] [i_0] [i_1] [1]) : (arr_9 [i_0] [i_0] [4] [i_5])));
                            }
                        }
                    }
                }
            }
        }
        var_26 = (((~(arr_17 [15] [i_0] [i_0] [i_0] [17] [i_0] [i_0]))));

        for (int i_7 = 2; i_7 < 24;i_7 += 1)
        {
            var_27 |= (((arr_18 [i_7] [i_7]) ? (((-2005087925053528614 || (arr_3 [i_7])))) : (((!(arr_11 [12] [i_7] [i_7 - 1]))))));
            var_28 = (arr_3 [i_7]);
        }
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        arr_26 [i_8] [i_8] = -1074313302014324094;
        var_29 = (((~-3683345425461997115) ? (arr_15 [24]) : (((arr_15 [10]) % 3683345425461997103))));
    }
    var_30 = ((1605898533 ? -1074313302014324076 : ((((-1074313302014324094 + 9223372036854775807) ? 1 : -1)))));
    var_31 = (max(var_31, (2987704634428552484 || var_4)));
    var_32 = var_7;
    #pragma endscop
}
