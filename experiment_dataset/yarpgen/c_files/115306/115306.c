/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_6 ^ var_8);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [15] [i_0] = ((((max(var_3, var_12))) ? (((min((!-116), 110)))) : (max(16093431578923545048, 0))));
        var_15 = (((((~((var_5 ? var_13 : var_12))))) ? (~var_13) : -var_8));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_16 = ((-(min(-2617471402902592812, 1903057675))));
        var_17 = (min((((-(~var_2)))), (max(4293918720, (((var_9 ? var_12 : var_2)))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                arr_10 [i_3] = (var_12 && ((!((max(var_8, var_12))))));
                arr_11 [i_2] = (~9223372036854775807);
                arr_12 [i_2] [i_2] = (~-326083010);
                arr_13 [i_2] [10] [i_2] = ((--68) ? ((-68 ? -16077 : -48)) : 1087764184);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        {
                            arr_20 [i_2] [i_4] [i_2] [1] [8] [i_5] = (!var_10);
                            arr_21 [i_2] [i_2] [i_4] [9] = var_12;
                            var_18 = (max((((591026928446982271 != (min(67, var_11))))), (max(var_7, (max(var_2, var_6))))));
                            var_19 = (max(13007655327034819993, 22496));
                        }
                    }
                }
            }
        }
    }

    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 0;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                {

                    for (int i_9 = 1; i_9 < 18;i_9 += 1)
                    {
                        var_20 = (((-(max(var_7, var_4)))));
                        arr_32 [i_7] = 4502541052513017489;
                    }
                    var_21 = (((((var_9 ? var_12 : var_11))) ? (((~var_4) - (min(var_11, var_0)))) : ((max(((var_11 ? var_8 : var_8)), ((min(76, 228))))))));
                    var_22 = (((var_0 ? (~var_4) : (~76))));
                    var_23 = ((~(var_7 | var_9)));
                }
            }
        }
        var_24 = (-(((((48 ? 459699371 : 0))) ? ((var_4 ? var_13 : var_8)) : (var_7 | var_0))));
    }
    for (int i_10 = 2; i_10 < 11;i_10 += 1)
    {

        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            var_25 = ((var_2 ? var_6 : ((var_10 ? var_9 : var_13))));
            var_26 = ((~((~(max(var_9, var_4))))));
        }
        /* LoopNest 2 */
        for (int i_12 = 3; i_12 < 12;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 13;i_13 += 1)
            {
                {
                    var_27 = ((!((min((!var_8), var_0)))));
                    var_28 = (max(((-(max(var_11, var_4)))), (((var_3 ? ((var_11 ? var_0 : var_13)) : ((var_13 ? var_3 : var_10)))))));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 13;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 13;i_15 += 1)
                        {
                            {
                                var_29 = ((var_7 | (min(((min(var_8, var_3))), var_10))));
                                var_30 = ((~(min(var_11, ((max(var_4, var_4)))))));
                                var_31 = var_0;
                            }
                        }
                    }
                    var_32 = -var_12;
                    arr_48 [i_10] [i_10] [i_13] = 2646239434;
                }
            }
        }
    }
    #pragma endscop
}
