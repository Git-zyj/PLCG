/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= var_10;
    var_16 = (max(var_12, ((var_13 ? var_13 : -188))));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_17 = ((-(max((arr_0 [i_0 + 1] [i_0 - 2]), var_2))));
            var_18 -= (max((arr_3 [i_0] [0] [i_0]), 169));
            arr_5 [i_1] = (((!(arr_4 [i_0 - 2] [i_0 - 2]))));
            var_19 += 151;
        }
        var_20 = ((1152921367167893504 ? (min((arr_4 [6] [6]), (arr_1 [i_0 - 2]))) : (arr_3 [i_0] [12] [i_0])));

        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {

                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    var_21 = 19;
                    arr_13 [i_0] [i_2] [i_3] [i_4] = (arr_0 [i_0 - 1] [i_2 + 2]);

                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_22 *= var_8;
                        var_23 = (max(var_23, ((min((~179), (arr_4 [i_0 - 1] [i_2]))))));
                        var_24 -= (var_2 | -7956251375318521531);
                        var_25 = (((var_11 ? ((var_2 ? var_5 : var_7)) : (~75))));
                    }

                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        arr_18 [i_0 - 2] [i_3] [i_3] [i_0 - 2] [i_0 - 2] [i_6] &= (arr_4 [i_0 - 2] [i_2 + 4]);
                        var_26 = (min(var_26, var_3));
                        var_27 = var_2;
                    }
                    for (int i_7 = 3; i_7 < 16;i_7 += 1)
                    {
                        var_28 -= 192;
                        var_29 += -160;
                        var_30 -= ((-28 ? ((max(78, -3043))) : ((((max(70, var_14))) ? (max((arr_19 [i_0] [i_2] [i_2] [i_3] [i_4] [i_3]), (arr_0 [12] [12]))) : (!var_6)))));
                        var_31 = (max(var_31, ((((((((max(var_10, var_7))) ? (((6561071587048032635 <= (arr_7 [i_2 + 3] [10] [i_2 + 3])))) : ((max(27, var_7)))))) ? 174 : ((-(max(21, var_0)))))))));
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        {
                            var_32 ^= ((5038822572045170777 ? 151 : -3049));
                            arr_28 [i_2] [0] [16] [i_8] [16] = ((-(((28966 < (arr_10 [i_2] [i_2] [1]))))));
                        }
                    }
                }
                var_33 = (min(((var_10 ? (arr_9 [i_0] [i_2 + 4] [i_0 - 2]) : (arr_9 [i_2] [i_2 + 4] [i_0 - 2]))), ((761629589 ? 35 : 63531))));
                arr_29 [i_2] [i_3] = (((((((76 + (arr_4 [i_0] [i_3])))) || ((max(-1732566394, var_1))))) ? (((((max((arr_9 [i_0] [3] [i_0]), 163))) ? ((min(var_6, 1))) : ((max(-38, (arr_19 [i_0] [i_0] [i_2 + 1] [i_2] [i_2 + 1] [i_2]))))))) : var_0));
                var_34 = (+(((arr_21 [8] [i_0 - 2] [i_2 + 3]) ? var_13 : -14179)));
            }
            var_35 -= (((arr_7 [i_2] [i_2] [i_2]) ? ((((((!(arr_2 [i_0])))) == -32))) : var_1));
        }
        var_36 = ((((max((arr_22 [i_0] [i_0] [i_0] [8]), var_14))) ? (arr_22 [i_0] [i_0 + 1] [i_0 + 1] [12]) : (var_5 * var_0)));
    }
    for (int i_10 = 0; i_10 < 10;i_10 += 1)
    {
        var_37 = (-0 ? ((((max(225, var_12))) ? (((195 ? 8 : 3041))) : var_13)) : ((((arr_26 [i_10] [i_10] [i_10] [i_10] [i_10]) ? ((max(-14164, 14188))) : (min(var_6, 1732566393))))));
        var_38 = (max(var_38, var_5));
    }

    for (int i_11 = 1; i_11 < 11;i_11 += 1)
    {
        var_39 = 14015;
        var_40 = (max(var_40, ((min(var_1, -1)))));
        var_41 = (max(var_41, var_6));
        var_42 = -39850;
    }
    #pragma endscop
}
