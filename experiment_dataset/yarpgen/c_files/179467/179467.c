/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_20 = 179787689;
        var_21 = 1;
        var_22 = ((((((arr_0 [i_0 - 1]) ? (arr_1 [i_0]) : -58))) > (arr_0 [i_0])));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            var_23 += ((((-24993 ? -58 : 1023)) / (-58 && 1073741822)));
            var_24 = (((arr_4 [i_0] [i_1 + 2] [i_0 + 1]) ? (arr_1 [i_1 + 1]) : (arr_4 [i_0] [i_1 + 2] [i_0 + 1])));
            var_25 = (arr_4 [i_1 - 1] [i_1 + 1] [i_0 - 1]);
            arr_5 [i_0 - 1] [i_1 - 2] [i_1] = (((arr_1 [i_0 + 1]) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 1])));
        }

        for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
            {
                var_26 -= 32482;
                var_27 = (arr_4 [2] [i_2] [i_2]);
                var_28 += (((arr_6 [i_0 + 1]) + (arr_6 [i_0 - 1])));
                var_29 = arr_1 [i_0 - 1];
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
            {
                arr_14 [1] = ((((((arr_6 [i_0]) ? (arr_11 [10] [21]) : (arr_0 [i_0])))) ? (((~(arr_2 [1] [5])))) : 8963952030135287410));

                for (int i_5 = 2; i_5 < 18;i_5 += 1)
                {
                    var_30 = (max(var_30, (arr_11 [14] [i_5])));
                    arr_18 [i_0] [i_0] [1] [i_5 + 4] [i_4] = 8963952030135287410;
                }
                for (int i_6 = 1; i_6 < 21;i_6 += 1)
                {
                    arr_21 [i_0 - 1] [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 1] = 248;
                    var_31 ^= (arr_16 [i_0]);
                }
                var_32 &= (arr_7 [i_0 + 1] [i_2]);
                var_33 = (max(var_33, ((((arr_19 [i_0 - 1]) ? (((arr_12 [i_4] [2] [i_0]) ? 159 : 11863)) : (arr_11 [i_4] [i_0]))))));
                var_34 = (((arr_4 [i_0 - 1] [i_0 + 1] [i_4]) > 45));
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                var_35 = (arr_12 [21] [i_2] [21]);
                arr_26 [i_0] [i_2] = (((arr_13 [i_0] [i_0] [i_2] [i_7]) ? ((9231 ? (arr_3 [i_0]) : 25038)) : (arr_16 [i_0])));
            }
            arr_27 [i_2] = (max((arr_10 [6] [i_2]), (arr_15 [i_0 + 1] [i_0 - 1])));
            var_36 = (((arr_24 [i_0 - 1] [i_0 - 1] [i_0 - 1]) ^ (arr_24 [i_0 + 1] [i_0 + 1] [i_0 - 1])));
        }
        for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
        {
            arr_30 [i_0] = ((((1073741822 ? 4294967295 : 3221225474))));

            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                var_37 = (min(var_37, 12785));
                arr_33 [i_9] = (max((((8149 <= (arr_3 [i_0 + 1])))), 1));
            }
            arr_34 [15] [i_0] = ((+(max((max((arr_2 [17] [i_8]), 4872609815160018588)), (arr_10 [i_0 - 1] [i_0 + 1])))));
            var_38 = -1;
            var_39 = ((+((+(max((arr_2 [i_0] [i_8]), (arr_17 [i_8])))))));
        }
        for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
        {
            var_40 *= (((((245938766 - (arr_7 [6] [i_10]))) + (arr_22 [20] [i_0 + 1]))));
            var_41 = (arr_31 [i_10] [1] [i_0 - 1] [i_0 + 1]);
        }
        for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
        {
            var_42 = (~-4700629178581516478);
            /* LoopNest 2 */
            for (int i_12 = 2; i_12 < 20;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    {
                        var_43 = ((1 ? (!1402041096) : (arr_41 [i_0 + 1])));
                        arr_45 [i_0] [i_13] [i_13] [i_11] = 216;
                    }
                }
            }
        }
    }
    var_44 -= var_8;
    #pragma endscop
}
