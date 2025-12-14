/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (((-(((((~var_16) + 2147483647)) << ((((var_9 ? var_13 : var_12)) - 1)))))))));
    var_18 = ((~var_4) ? ((((var_11 < ((var_2 ? var_15 : 3667701458)))))) : (((((var_1 ? -1 : 6466164170638844384))) ? var_0 : 1)));
    var_19 = (max(var_19, ((max(3971333628, -1)))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_20 = (min(var_20, (~var_5)));
            arr_4 [i_0] [i_1] [i_1] &= var_7;
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] = ((var_5 ? var_5 : var_14));
                        var_21 -= ((39 ? var_3 : 0));
                        var_22 -= (~var_12);
                        arr_11 [i_0] [i_1] [i_2] [i_3] &= var_13;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 13;i_5 += 1)
            {
                {
                    arr_18 [i_5] [i_5] [i_5] [i_0] = min((max(((1 ? -6466164170638844384 : 217)), 5987588345531854390)), (min(28, ((6466164170638844387 ? -6466164170638844385 : var_5)))));
                    arr_19 [i_5] [i_5] = var_16;
                    arr_20 [i_0] [i_5] = (max(1683655399, 79));
                    var_23 = (min(var_23, ((((-1 | 1) ? var_12 : (-6466164170638844385 & 203))))));
                    arr_21 [i_0] [i_5] [i_0] = var_8;
                }
            }
        }
        var_24 = (min(var_24, (((((((!24643235) < (((-6466164170638844370 + 9223372036854775807) >> (-7788744160805391322 + 7788744160805391385))))))) + -311227599824216648))));
        var_25 = ((-(max((arr_1 [i_0] [i_0]), var_9))));
        var_26 = ((arr_6 [i_0] [i_0] [i_0]) || ((((((min(-18, 48)))) ^ ((var_7 ? var_9 : var_16))))));
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        var_27 = (min(var_27, (((!4108940648994342146) ? (((-((var_10 ? 1380489875 : (arr_22 [i_6])))))) : ((216 ? var_13 : -9185641752305267652))))));
        var_28 = (max(var_28, ((max(137, 165)))));
        arr_26 [i_6] = var_7;
    }
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 9;i_9 += 1)
            {
                {
                    arr_35 [i_7] [i_8] [i_7] = var_9;
                    arr_36 [i_8] = var_10;
                    var_29 |= (((55 <= (-6466164170638844385 != -311227599824216648))));
                    var_30 = ((((min((max(var_11, -6466164170638844392)), (arr_13 [i_7] [i_7])))) ? ((~(var_5 ^ var_7))) : (arr_24 [i_7])));
                }
            }
        }
        var_31 = (~var_7);
        arr_37 [i_7] [i_7] = min(((((118 - 124) * (136 <= -6466164170638844398)))), 1762142640897196791);
        /* LoopNest 2 */
        for (int i_10 = 3; i_10 < 10;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                {
                    var_32 = var_13;
                    var_33 = (min(var_33, (((~((((((var_12 ? 3697610731 : var_14))) < (max(6466164170638844356, var_1))))))))));
                }
            }
        }
    }
    #pragma endscop
}
