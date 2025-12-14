/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (34130 / -6643956206375688922);
    var_14 = (max(var_14, -100));
    var_15 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_16 = (arr_3 [i_0] [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_17 = ((1 ? (arr_8 [0] [i_0 - 4] [i_0 + 1]) : (arr_8 [i_3] [i_0 + 1] [i_0 - 1])));
                                var_18 = ((2502 ? (arr_11 [i_0 - 4] [i_0] [9] [i_0 - 1] [i_4]) : 51));
                                var_19 = (~809592820);
                            }
                        }
                    }
                    var_20 = 1;
                    var_21 = ((~(~var_1)));
                }
                for (int i_5 = 3; i_5 < 11;i_5 += 1)
                {

                    for (int i_6 = 3; i_6 < 10;i_6 += 1)
                    {
                        var_22 = -1;
                        var_23 = (arr_13 [i_0] [i_1] [i_5 - 1] [i_6 - 3] [i_6 - 1] [i_1] [i_6 - 1]);
                        var_24 = (((((((max((arr_20 [i_0] [i_1] [i_5 - 1] [i_6] [4]), (arr_3 [i_1] [i_5 - 3])))) ? 16172213790658776881 : ((0 ? var_12 : -6168976841856777964))))) ? 0 : (min((!6168976841856777963), (arr_5 [i_0] [8] [i_5] [i_6 + 2])))));
                    }
                    var_25 = ((((min(var_3, (((-6168976841856777964 == (arr_19 [i_0] [i_1] [i_5 - 1]))))))) ? (max(((150 ? var_9 : (arr_11 [i_0] [i_1] [i_1] [i_5] [3]))), var_2)) : 6643956206375688918));
                    var_26 = (-2147483643 | var_5);
                }
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    arr_23 [i_0] [i_0] = ((!((max((((var_3 && (arr_15 [1] [i_1])))), var_1)))));
                    var_27 = ((((((1 >= -6168976841856777990) ? ((((arr_5 [5] [i_1] [i_7] [i_7]) > (arr_10 [i_7] [i_7] [5] [5])))) : (arr_10 [i_7] [i_1] [5] [6])))) ? (((!(((1 ? var_1 : 1)))))) : ((((max(75, 0))) << ((((-24334 ? (arr_4 [i_7] [i_1] [i_0] [0]) : 1)) + 1164702910))))));
                    var_28 = (min(var_28, 8428232160153513413));
                    var_29 = ((!(((((max(57, var_1))) ? var_8 : ((15855 ? 11 : var_12)))))));
                    var_30 = 100;
                }
                var_31 = (max(var_31, var_10));
                var_32 = 14385290671370284290;
            }
        }
    }
    var_33 = var_2;
    #pragma endscop
}
