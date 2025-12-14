/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((1085752645 ? 3209214651 : 66));

    for (int i_0 = 1; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_18 = max(1498740704, ((32643 ? (max(3209214656, var_6)) : (((var_11 >> (var_10 - 1721813316)))))));
        var_19 = -17782;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_20 = (~var_15);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    {
                        var_21 = 3209214650;
                        var_22 = (((arr_11 [3] [i_3] [i_4]) ? 67 : (arr_8 [i_1 + 2])));
                    }
                }
            }
        }
        var_23 = (~var_9);
        var_24 = var_6;
    }
    for (int i_5 = 1; i_5 < 16;i_5 += 1) /* same iter space */
    {
        var_25 = (min(var_25, ((((!-164) ? (arr_4 [i_5]) : var_10)))));

        for (int i_6 = 1; i_6 < 17;i_6 += 1) /* same iter space */
        {
            var_26 *= (((arr_3 [i_6]) & 1085752646));
            var_27 = var_7;
            var_28 = 3209214659;
            var_29 = (min(var_29, (arr_8 [7])));
        }
        /* vectorizable */
        for (int i_7 = 1; i_7 < 17;i_7 += 1) /* same iter space */
        {
            var_30 ^= ((63 + (arr_4 [i_5 + 1])));
            var_31 = (!241);
        }
        var_32 = ((!((((-17024 % var_3) ? ((9223372036854775807 ? 9223372036854775807 : 63)) : (((2147483647 ? 0 : 58162))))))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 15;i_9 += 1)
            {
                {
                    var_33 = (((((min(-1, 761289494730017133)))) || ((((arr_24 [9] [0]) ? (~1) : (~var_15))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            {
                                var_34 = ((~var_15) ? (min((-2147483647 - 1), (arr_15 [i_5 + 2]))) : ((var_1 ? 2147483647 : (arr_15 [i_5 + 2]))));
                                var_35 = (min(var_35, (arr_13 [i_10] [i_9 + 1] [i_8])));
                                var_36 = var_13;
                                var_37 -= (((((-((31679 ? 1085752649 : 7357))))) ? ((2147483638 ^ (((3209214652 ? -18124 : var_12))))) : -1012699403));
                            }
                        }
                    }
                }
            }
        }
    }
    var_38 ^= (((((8 && (1815322524 < var_5)))) + (!var_12)));
    var_39 |= ((!((max((~24), (-127 - 1))))));
    var_40 = var_15;
    #pragma endscop
}
