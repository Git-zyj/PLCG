/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_15 = (max(var_15, (((!(2600065455603467545 + 15066567745965082917))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 4; i_3 < 15;i_3 += 1)
                    {
                        var_16 = ((max((max(4837, (arr_5 [i_0] [i_1] [i_0]))), (9223372036854775807 >= 2150761159110254345))) / (max(((((arr_4 [i_1] [i_2] [i_3 - 4]) < (arr_0 [i_2])))), (3752615570 / 19177))));
                        var_17 -= (65535 < 123);
                        var_18 = (min(var_18, 0));
                        var_19 -= (((arr_1 [i_0] [i_0]) ? (arr_11 [i_2]) : (arr_3 [i_0] [i_0])));
                        arr_12 [i_0] = 15846678618106084067;
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        var_20 *= (((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? ((((!(arr_13 [i_0] [i_1] [i_2]))))) : -8573126438853196187));
                        var_21 &= (((arr_8 [i_0] [i_1] [i_1] [i_4 - 1]) >= (arr_8 [i_0] [i_1] [i_2] [i_4 - 1])));
                        var_22 = (15846678618106084059 + 60688);
                        var_23 = ((!(arr_9 [i_1] [i_1] [i_1])));
                    }
                    var_24 = ((((~(~16515072))) >> (((min(48, ((65535 ? 9223372036854775791 : 1)))) - 47))));
                    var_25 = (max(var_25, (((((((arr_3 [i_0] [i_1]) == (7321 > 1718861919370060696))))) - (min((arr_10 [i_0]), ((((arr_10 [i_0]) > (arr_6 [i_0] [i_0] [i_0]))))))))));
                    arr_15 [i_0] [i_0] [i_0] [i_2] = max((arr_5 [i_0] [i_0] [i_0]), ((-((10 - (arr_2 [i_0]))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            var_26 = (~1);
            var_27 = ((-(arr_17 [i_5] [i_6])));
        }
        /* LoopNest 2 */
        for (int i_7 = 3; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 13;i_8 += 1)
            {
                {
                    var_28 = ((-74541041 && (((-11 ? 1 : 65519)))));
                    var_29 = ((32425 ? (~56) : (((arr_19 [i_5] [i_8]) ? (arr_0 [i_5]) : (arr_8 [i_5] [i_5] [i_8 + 1] [i_8])))));
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 14;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            {
                                var_30 = ((2251520646475889223 ? (arr_1 [i_7 - 1] [i_8 - 1]) : (((arr_3 [i_5] [i_7]) + (-9223372036854775807 - 1)))));
                                var_31 ^= (arr_4 [i_8 + 2] [i_8 + 2] [i_9 - 2]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_32 = (((!65490) ? (((var_0 || (((var_2 ? -9223372036854775785 : var_12)))))) : (1063745101 / 1063745111)));
    var_33 = ((((min((~var_12), 31))) & ((((max(119, var_9))) ? (var_11 / 19038) : (((max(50, 28))))))));
    var_34 = (-13674 - (min((((13680 ? var_11 : var_1))), (15 * 13027207188221713184))));
    #pragma endscop
}
