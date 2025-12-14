/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_16;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = (max(var_5, ((((((2623364411 ? -764395867 : var_1))) && (arr_12 [i_3 + 1] [i_3 - 2] [i_3 + 1] [i_3 + 1] [i_3]))))));
                                var_21 = (min(var_21, (((!(((36577 ? 18446744073709551615 : 16029))))))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_22 = (min(var_22, (arr_1 [i_0])));
                        arr_17 [i_0] [i_0] [6] [3] [i_0] = (((~((max(var_10, (arr_12 [i_0] [i_1] [5] [i_5] [i_5])))))));
                    }
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        var_23 = (((((~((3365824549792688328 ? var_12 : (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? var_6 : (!11099173281181525278)));
                        var_24 = (max(var_24, ((((arr_8 [i_0] [i_0]) ? (min((arr_0 [i_0]), 48673)) : (((((max((arr_11 [i_0] [5] [i_2 + 2] [i_6] [i_2 + 2]), 65535))) ? (((!(arr_8 [15] [4])))) : (arr_15 [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 2])))))))));
                        arr_20 [i_6] [i_2] [1] [i_0] = var_18;
                        var_25 ^= 618410615712310440;
                    }
                    for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                    {
                        var_26 ^= 48673;
                        var_27 *= 9927;
                        arr_23 [i_0] [i_0] [i_0] [14] [i_0] &= var_12;
                        arr_24 [i_1] = (((arr_16 [i_0] [i_2] [i_2] [i_7] [i_1]) ? (((0 ? (arr_14 [i_2 + 2] [i_2 - 2] [i_2] [i_2]) : 255))) : (arr_19 [i_0] [i_1] [i_2 + 3] [i_7] [i_1])));
                        arr_25 [i_0] = ((3426937091933661837 ? ((((min(var_3, -59))) ? 1 : ((var_13 ? var_7 : var_4)))) : (((((((arr_8 [i_0] [i_0]) ? 1839294269 : 16776960))) ? 16863 : 16737279862895679231)))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
                    {
                        arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] = ((~(-2147483647 - 1)));
                        arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [12] = (((arr_15 [i_2] [i_2 - 2] [i_2 + 2] [i_2 + 3]) ? (((arr_16 [i_1] [i_1] [i_1] [i_1] [i_1]) ? var_9 : 12661150995092061647)) : (~var_3)));
                    }
                    arr_30 [i_0] [i_1] [i_2] [11] = ((((min((arr_15 [i_0] [i_1] [i_2] [i_2]), ((16737279862895679240 ? (arr_3 [i_2] [i_1] [i_0]) : (arr_27 [i_2] [i_0] [i_0])))))) ? -2863 : ((39634 ? 1664 : 205))));
                }
            }
        }
    }
    var_28 = (max(var_10, ((-(~var_5)))));
    var_29 = (min(var_29, (((-618410615712310440 ? ((16850 ? (max(1387942740, -1)) : 16)) : ((max(var_0, var_15))))))));
    var_30 &= var_13;
    #pragma endscop
}
