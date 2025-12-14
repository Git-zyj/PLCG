/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (arr_0 [i_0]);

        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_12 = (min(var_12, (min((arr_2 [i_0] [i_1]), (max((((!(arr_10 [4] [i_0])))), 2147483647))))));
                        var_13 *= ((((min((((var_6 ? (arr_6 [12] [5]) : (arr_13 [i_0] [i_0] [i_1 - 1] [i_2] [i_3] [i_3])))), (max((arr_5 [i_0] [i_1]), (arr_13 [i_0] [i_1 + 2] [i_2] [i_3] [i_2] [i_1])))))) ? (min(((max((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), 0))), (max(-5445621331740825060, 31)))) : ((((arr_6 [i_1 + 1] [i_1 - 1]) & (min(-32, (arr_2 [9] [i_1 - 1]))))))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    {
                        var_14 = max((arr_12 [i_0] [i_1]), (arr_9 [i_0] [i_1 + 2] [i_1 + 2]));
                        var_15 += -27;
                        arr_22 [i_1] [i_1] [8] [i_1] [i_1] = ((((max(-55, (arr_0 [i_0])))) ? -31 : (((!((!(arr_18 [11] [i_4] [i_4]))))))));
                    }
                }
            }
        }
        for (int i_6 = 4; i_6 < 11;i_6 += 1)
        {
            var_16 ^= min((((!(((-40 ? -573461537 : (arr_24 [i_6 - 4]))))))), (arr_10 [i_0] [i_6 + 1]));
            var_17 = (((((+(((arr_4 [5] [i_6] [0]) ? var_6 : 0))))) ? 19 : ((+(((arr_0 [i_0]) ? (arr_0 [12]) : 83800250))))));
            var_18 = ((((min((arr_17 [i_6 + 2] [i_6 - 4]), (arr_17 [i_6 - 1] [i_6 + 1])))) ? ((~(arr_13 [i_0] [i_6 - 2] [5] [i_0] [i_6] [i_6 - 3]))) : ((min((arr_0 [i_6 - 3]), ((var_8 & (arr_18 [1] [i_6] [i_0]))))))));
        }
    }
    for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
    {
        var_19 = (min((((arr_10 [9] [i_7]) ? (arr_17 [i_7] [i_7]) : (arr_7 [i_7] [10] [i_7]))), -32));
        arr_29 [i_7] [i_7] = ((~(arr_9 [5] [i_7] [i_7])));

        for (int i_8 = 1; i_8 < 12;i_8 += 1)
        {
            var_20 = (max(((max(10241646629104606348, 2374010483355397542))), ((min(-983706893, (arr_6 [i_7] [i_8 + 1]))))));
            var_21 = (arr_16 [i_7] [i_7]);
        }
        var_22 = ((((((arr_31 [2] [i_7]) << 0))) ? (arr_2 [i_7] [i_7]) : ((((arr_2 [i_7] [i_7]) || (arr_31 [5] [i_7]))))));
        arr_32 [11] &= (max((((((arr_0 [i_7]) + 2147483647)) << (((arr_12 [i_7] [i_7]) - 84)))), (arr_12 [i_7] [i_7])));
    }
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 23;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            {
                var_23 = (min(var_23, (arr_33 [i_9])));
                var_24 = ((max(-120, (arr_35 [i_9 - 1]))));
                var_25 = arr_36 [i_10] [i_10] [i_9];
                arr_38 [i_9] [10] [i_10] = ((!((min((arr_37 [i_9] [i_10]), (arr_33 [i_9]))))));
                arr_39 [i_9] [12] = (min(((min(-0, -983706873))), ((((arr_36 [i_9 - 1] [i_9] [i_9]) >> (((arr_34 [i_10]) - 17979032121638015647)))))));
            }
        }
    }
    #pragma endscop
}
