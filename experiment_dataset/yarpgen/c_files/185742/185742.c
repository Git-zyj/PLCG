/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((((!-7046369056304396300) - ((~(min(var_1, 17348552783597804062)))))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 16;i_3 += 1)
                {
                    {
                        var_14 = 11400375017405155315;
                        var_15 = ((63396 / var_10) != (((((((arr_0 [i_0] [i_0]) ? 268435392 : var_0))) || var_6))));
                        var_16 = ((((((!11400375017405155332) ? (arr_1 [i_2 - 4]) : (((!(arr_7 [i_1] [i_2] [i_1]))))))) ? (max(11400375017405155330, (arr_3 [i_0] [i_0]))) : (max((arr_4 [i_0] [i_0]), 1))));
                        arr_9 [i_3 + 1] [i_2] [i_2] [i_2] [i_1] [i_0] = (max(8, 9534136067628842340));
                    }
                }
            }
        }
        var_17 = -1;
        var_18 = ((((7091175670753116579 ? 10 : 1730683126)) >> (((min(52066616717935829, 11400375017405155304)) - 52066616717935819))));
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_19 = (max(var_3, var_1));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 17;i_6 += 1)
            {
                {
                    var_20 = (((((-10443 ? 960923275 : (arr_17 [i_4] [i_6 + 1] [i_4] [i_6])))) ? var_5 : (min((6689065813149028842 + 2140), (min(10607548382967462044, 5647912565964913867))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 15;i_8 += 1)
                        {
                            {
                                var_21 = -8410009991070083372;
                                var_22 = arr_17 [i_4] [i_4] [i_6] [i_6];
                                arr_23 [i_4] [i_6] = 67;
                                var_23 = ((((max(16470519805315809670, -8410009991070083372))) ? (arr_21 [i_6 - 1] [i_6] [i_6 - 1]) : (((max((arr_22 [i_8 - 3] [i_6] [i_6 - 1] [15] [i_6] [i_6]), (arr_22 [i_8 + 2] [i_6] [i_6 - 1] [i_6] [i_6] [i_4])))))));
                            }
                        }
                    }

                    for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
                    {
                        var_24 ^= arr_25 [i_4] [i_5] [i_5] [i_9];
                        var_25 = (!10);
                        var_26 -= 0;
                        var_27 = (max(var_27, (19207 + 1)));
                        var_28 = (!((max(var_3, 18446744073709551605))));
                    }
                    for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
                    {
                        var_29 = (max(var_29, ((((53742 ? 52345 : 303531197))))));
                        var_30 = (((((min(-4, 34410)))) >= 4217982773));
                        var_31 = (min(var_31, var_4));
                        var_32 *= ((-((((arr_19 [i_6 - 1] [i_6 - 1] [i_5] [i_5]) > 4761549434629524359)))));
                        arr_31 [i_6] = var_3;
                    }
                }
            }
        }
    }
    #pragma endscop
}
