/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_10 = ((((((arr_0 [i_0]) % 14627443743349005519))) ? (min((max(14627443743349005539, 32752)), (~14627443743349005519))) : (max(((11656 ? 3819300330360546096 : 53886)), 127))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_11 = var_9;
                    var_12 |= (((!(arr_3 [i_1 + 1] [i_2 + 4]))) ? (arr_3 [i_1 + 1] [i_2 + 4]) : -1723124236);
                    var_13 = (max((((arr_7 [i_0] [i_1] [i_2 + 1]) ^ var_3)), (((arr_7 [i_0] [i_1] [i_0]) ? (arr_7 [i_1] [i_1] [i_2 - 1]) : (arr_7 [i_0] [i_1] [i_2])))));
                    var_14 = var_4;
                }
            }
        }

        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            var_15 = var_6;
            var_16 = arr_1 [i_0] [i_0];
            var_17 = ((((((arr_0 [i_3 + 1]) ? (arr_0 [i_3 - 1]) : (arr_0 [i_3 + 1])))) <= (((((6293 ? 3807551255 : var_9))) ? -7447734315277322953 : (arr_7 [7] [i_3] [i_3 - 1])))));
            var_18 = var_1;
            var_19 = (min(var_19, (((((((-2147483647 - 1) ? 66 : 3646593818))) ? (((arr_7 [14] [8] [i_3 + 1]) % 32760)) : (((arr_4 [i_3] [i_3 + 1] [i_3 + 1] [i_0]) ? (arr_7 [i_3 - 1] [14] [i_3 + 1]) : (arr_4 [i_3] [i_3 - 1] [i_3] [i_3]))))))));
        }
    }
    for (int i_4 = 1; i_4 < 22;i_4 += 1)
    {
        var_20 = (((max(784635124, (arr_13 [i_4 - 1] [i_4 + 1])))) + ((1267077270 ? 8744329916692307308 : 43576)));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 22;i_7 += 1)
                {
                    {
                        var_21 = (max(var_21, (-32765 * 14627443743349005539)));

                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 21;i_8 += 1)
                        {
                            var_22 = (((arr_15 [i_8]) ? ((-14953 ? var_5 : var_4)) : (((var_3 ? var_6 : -27)))));
                            var_23 = (max(var_23, 648373472));
                            var_24 = (arr_22 [i_8]);
                            var_25 = (~(((arr_16 [i_4] [i_8]) ? 531900823 : 65535)));
                        }
                        for (int i_9 = 1; i_9 < 22;i_9 += 1)
                        {
                            var_26 = var_5;
                            var_27 = var_2;
                        }
                        var_28 = (arr_12 [i_5]);
                    }
                }
            }
        }
        var_29 = ((+((((arr_22 [20]) | (arr_12 [i_4]))))));
    }

    for (int i_10 = 3; i_10 < 20;i_10 += 1)
    {
        var_30 = var_9;
        var_31 += 3468286221;
        var_32 = ((((((!((max((arr_23 [3] [i_10]), 3819300330360546090))))))) >= var_5));

        /* vectorizable */
        for (int i_11 = 2; i_11 < 19;i_11 += 1)
        {
            var_33 = ((-51807 ? (arr_22 [i_11]) : (((!(arr_28 [i_10]))))));
            var_34 = ((var_3 ? var_2 : (((arr_18 [i_10] [i_11] [i_10] [i_11]) - (arr_12 [i_11])))));
        }
        /* vectorizable */
        for (int i_12 = 1; i_12 < 1;i_12 += 1)
        {
            var_35 = (arr_29 [i_10 - 2] [i_10 - 1] [i_10 + 1]);
            var_36 = var_6;

            for (int i_13 = 1; i_13 < 18;i_13 += 1)
            {
                var_37 = 3646593812;
                var_38 = ((arr_21 [i_10 - 3] [i_10 - 3] [i_12 - 1] [i_12 - 1] [i_13] [i_13]) ? 89 : 0);
                var_39 |= var_3;
            }
            for (int i_14 = 0; i_14 < 21;i_14 += 1)
            {
                var_40 = 531900823;
                var_41 -= ((1 ? (arr_32 [5] [i_12 - 1]) : (arr_29 [i_12 - 1] [i_10] [i_10])));
                var_42 = ((!((((arr_20 [i_10] [i_12 - 1] [15] [i_10] [i_14]) | 1267077245)))));
            }
            var_43 = ((!((var_4 && (arr_27 [i_12])))));
            var_44 = var_5;
        }
    }
    var_45 = (+-135107988821114880);
    #pragma endscop
}
