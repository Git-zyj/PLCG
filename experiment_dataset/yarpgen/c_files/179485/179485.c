/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = (arr_0 [1]);
            arr_6 [i_1] [i_0] = (arr_4 [i_1] [i_0] [i_0]);
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_10 [i_0] = (((arr_0 [i_2]) <= 18446744073709551615));
            var_20 = (((arr_8 [i_0] [i_2]) ? (arr_8 [i_2] [i_0]) : (arr_8 [0] [i_0])));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 12;i_4 += 1)
                {
                    {
                        arr_18 [i_0] [i_2] = ((((((arr_13 [i_0] [i_2] [7] [i_4]) ? (arr_11 [i_0] [i_0] [i_4 - 2]) : 3245463788))) ? 3245463788 : (arr_15 [i_0] [i_0] [i_0] [i_3] [i_4 - 1])));
                        arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_3 [i_2]);
                        var_21 = (arr_14 [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4 - 2]);
                        arr_20 [i_0] [i_0] [i_0] = ((var_4 ? (arr_0 [i_4]) : (arr_15 [i_4] [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4 - 1])));
                    }
                }
            }
            arr_21 [i_2] [i_0] = (((arr_16 [i_0] [i_0] [i_0] [5]) ? 1049503508 : 17371104754737182713));

            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                arr_25 [i_0] [i_0] [i_5] = (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])));
                var_22 = ((((((var_8 + 2147483647) >> (var_15 - 51512)))) ? (arr_11 [i_0] [i_0] [i_0]) : var_13));
                var_23 = (((arr_2 [i_0]) + (arr_23 [i_5] [i_2] [i_0])));
                arr_26 [i_0] = ((((((arr_1 [i_5]) ? (arr_13 [5] [i_5] [12] [12]) : 0))) ? (1075639318972368903 & 1075639318972368902) : (17371104754737182712 > var_17)));
            }
        }
        arr_27 [3] [3] = (arr_16 [i_0] [i_0] [i_0] [i_0]);
        arr_28 [i_0] = (((arr_9 [i_0] [i_0]) ? (((arr_24 [i_0] [i_0]) ? 17371104754737182713 : (arr_3 [i_0]))) : (arr_0 [i_0])));
    }
    var_24 = var_8;
    #pragma endscop
}
