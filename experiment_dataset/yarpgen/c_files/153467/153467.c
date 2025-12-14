/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(((max(var_1, (!var_12)))), 11812582366653627243));
    var_18 += 1;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_19 += ((var_14 ? ((~(arr_0 [i_0] [i_0]))) : -var_14));

        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_20 += (!-6012);
                        var_21 = (min(-1734240225, var_8));
                        arr_11 [i_1] [i_2] [i_1] [i_1] = 244;
                    }
                }
            }

            for (int i_4 = 3; i_4 < 22;i_4 += 1)
            {
                var_22 = (~(((25733 == (min(var_8, var_8))))));
                arr_15 [i_0] [i_1] [i_0] [i_4] = 7539;
                arr_16 [i_0] [i_1] [i_0] = (max(var_0, ((min(-1729221035, (!10611519985797245438))))));
            }
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                arr_21 [i_5] [i_1] [i_1] [1] = var_16;
                var_23 = ((!((((arr_20 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1]) ? 2147483647 : var_1)))));
            }
            arr_22 [i_1] [i_1] = (((arr_9 [i_0]) ? var_6 : (arr_13 [i_0])));
            var_24 = var_10;

            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                arr_25 [i_1] = (!7539);
                arr_26 [i_6] [i_1] [i_6] [i_6] = 7523;
            }
        }
        for (int i_7 = 2; i_7 < 21;i_7 += 1)
        {
            var_25 += (((!(arr_5 [i_0] [i_7 - 2] [i_7 - 2]))) ? (((!(arr_2 [i_7 - 2] [i_7] [i_7 + 2])))) : ((-(arr_6 [i_7 - 1]))));

            for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
            {
                var_26 ^= 3601913124751028221;
                var_27 = (min(var_27, (!-6006)));

                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    var_28 ^= (min(1, var_5));
                    var_29 = var_3;
                }
                var_30 = arr_7 [i_0] [i_0] [i_0] [5] [i_7 + 1] [i_8];
            }
            /* vectorizable */
            for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
            {
                arr_36 [i_0] [i_0] [i_10] [i_10] = (!1);
                var_31 = (min(var_31, var_13));
                arr_37 [i_0] = 1;
            }
            var_32 = var_14;
        }
    }
    #pragma endscop
}
