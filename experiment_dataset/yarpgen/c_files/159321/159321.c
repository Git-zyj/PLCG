/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= ((~(max(var_6, 0))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_11 += -34;
                var_12 = ((var_0 ? (arr_2 [i_0]) : var_8));
            }
        }
    }

    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_13 -= 21;
        var_14 = (max((max(-16, 18)), ((max((arr_8 [i_2]), 22)))));
        var_15 = (max(var_15, ((((max(((((arr_6 [i_2] [3]) != (arr_3 [2] [2])))), ((~(arr_8 [i_2]))))) & 15)))));

        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            var_16 = 2060;
            arr_11 [i_3] = 2044;
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_17 = ((var_3 || (((122 ? ((min(2065, (arr_14 [i_4])))) : (arr_5 [2] [2] [i_4]))))));

            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    arr_22 [4] [i_4] = var_6;
                    var_18 = (((arr_9 [i_4] [i_2] [i_5]) & ((((arr_15 [i_5] [i_4]) && (arr_9 [i_2] [i_4] [i_5]))))));
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_19 = ((-((-(min(var_5, (arr_24 [i_2] [i_2] [i_5] [i_2] [i_8])))))));
                            var_20 = (max(var_20, (((+((var_4 ? (arr_6 [i_2] [1]) : -23)))))));
                        }
                    }
                }
            }
            arr_27 [i_2] [i_4] [i_4] = (((max(1, (~74))) > (arr_18 [i_2] [i_2] [i_2] [4])));

            for (int i_9 = 1; i_9 < 9;i_9 += 1) /* same iter space */
            {
                var_21 = (((~-78) ? (((~(arr_21 [i_2] [i_4] [i_9 + 1] [i_9])))) : (((~(arr_25 [9] [i_4] [i_9 - 1] [i_2] [i_2] [i_2] [i_2]))))));
                var_22 = (max(var_22, (arr_4 [1] [i_4] [1])));
            }
            for (int i_10 = 1; i_10 < 9;i_10 += 1) /* same iter space */
            {
                var_23 = var_3;

                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    arr_35 [i_2] [i_4] [i_10 + 1] [i_11] [i_11] = -2072;
                    arr_36 [i_10] [i_2] [i_10] [4] [i_2] = (min((arr_17 [6] [6] [i_11]), ((-(arr_2 [i_2])))));
                }
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    var_24 = (max(var_24, ((min((min((((arr_32 [i_2] [i_2] [3]) ? var_9 : (arr_15 [i_2] [i_2]))), (((23134 >> (38 - 7)))))), (((((arr_29 [i_2] [i_4] [i_12] [i_12]) ? var_0 : (arr_2 [3]))))))))));
                    var_25 = (min((min((((arr_7 [i_2]) ? (arr_28 [6] [i_12]) : (arr_8 [i_2]))), ((((arr_33 [i_10]) || (arr_6 [1] [i_4])))))), (!-2044)));

                    for (int i_13 = 0; i_13 < 10;i_13 += 1)
                    {
                        arr_44 [i_2] [1] [i_10] [i_12] [3] &= var_6;
                        var_26 += ((48 ? 5591 : -15));
                        var_27 = (min(var_27, (((((max((arr_37 [i_2] [i_2] [i_2] [i_2]), (arr_30 [i_12] [i_4] [i_12])))) ? (((!(arr_20 [i_4] [i_10 - 1] [i_10 - 1] [4] [1] [i_12])))) : 0)))));
                        var_28 += (((min(((8 * (-127 - 1))), -27482)) * ((min(((((arr_9 [i_2] [i_2] [i_10 - 1]) <= (arr_28 [i_2] [i_12])))), (max(0, 15)))))));
                    }
                }
                for (int i_14 = 0; i_14 < 10;i_14 += 1)
                {
                    var_29 = (arr_17 [i_2] [i_2] [i_10 + 1]);
                    arr_48 [i_2] [i_4] [i_4] [2] [i_10 - 1] [i_14] = (min(var_2, (arr_30 [i_14] [i_4] [i_10])));
                }
            }
        }
    }
    for (int i_15 = 0; i_15 < 10;i_15 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_16 = 1; i_16 < 7;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 10;i_17 += 1)
            {
                {
                    var_30 = (min((max(2147483647, (((arr_34 [i_15] [6] [9] [i_17] [1]) & 13314325984950963752)))), 1074091268));
                    var_31 = (((max((((arr_47 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]) / -15636)), ((min(32751, var_8))))) * (min(17592186044415, 17))));
                }
            }
        }
        var_32 = (min(var_32, (arr_16 [i_15] [i_15] [i_15] [i_15])));
        var_33 = ((max((arr_2 [i_15]), (arr_18 [i_15] [i_15] [i_15] [i_15]))));
        var_34 = ((!((max((arr_18 [i_15] [i_15] [i_15] [i_15]), (min((arr_31 [i_15] [i_15] [3]), 456512029)))))));
    }
    #pragma endscop
}
