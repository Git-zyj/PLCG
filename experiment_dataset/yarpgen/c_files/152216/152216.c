/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((-(var_4 - var_6)))) ? ((var_4 / (min(549755813824, -16)))) : ((((((min(163, 163)))) - 0)))));
    var_14 = var_10;
    var_15 = 163;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_16 = ((233 < (arr_0 [i_0 - 1])));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_17 = (max((!31416), (-127 + 1)));
            var_18 = var_10;
            var_19 &= ((var_5 ? (((arr_5 [i_0 + 1]) + (arr_1 [i_0 - 1]))) : (245 || 9223372036854775807)));
            var_20 = -var_3;
        }
        var_21 -= ((3921 ? (((48786 ? var_10 : 141))) : (((((var_12 - (arr_3 [i_0 + 1])))) ? ((((arr_6 [i_0]) ? var_1 : var_6))) : (min(0, var_3))))));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_22 = ((var_8 / (--63)));
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {
                {
                    var_23 = (arr_13 [i_2] [i_3] [i_4 - 1]);
                    var_24 = (min((-6847786869212893750 == -6847786869212893750), (var_10 | var_12)));
                    var_25 = ((0 - (arr_11 [i_2] [i_3] [i_3])));
                }
            }
        }
        var_26 = (max(var_26, -18446744073709551615));
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 12;i_7 += 1)
                {
                    {
                        var_27 = (min((((min(1152903912420802560, 0)))), -111));
                        arr_22 [2] [i_5] [10] [12] = (max((!-1179162654971065734), (((arr_10 [0] [i_7]) ^ -10497))));
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        /* LoopNest 3 */
        for (int i_9 = 1; i_9 < 22;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 23;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    {
                        var_28 = ((((-(var_1 + var_2))) ^ 0));
                        var_29 += ((((((min(30192, var_11))) && (var_10 && var_10))) ? (3621691114817889438 - var_7) : var_12));
                    }
                }
            }
        }
        var_30 = (min(var_6, ((min(var_11, var_3)))));
    }
    #pragma endscop
}
