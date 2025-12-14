/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;

    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_12 = (min(var_12, (arr_11 [i_0 + 2] [i_2 - 2])));
                        arr_12 [i_0] [i_1] [i_1] [i_3] = (((((((arr_11 [i_0] [i_0]) ? var_0 : 3812888322092715576))) ? (((arr_4 [i_3]) ? var_7 : var_9)) : (var_4 * 13796))));
                        var_13 = ((((max(13796, var_4))) ? ((((max(-2857847592453571356, (arr_7 [i_1]))) == var_0))) : (arr_4 [i_0 - 4])));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            arr_17 [i_0] [i_1] [i_0] [i_3] [i_1] = ((var_1 ? (arr_9 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]) : -21));
                            arr_18 [i_4] [i_3] [i_2] [i_0] [i_0] = -22447;
                        }
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            arr_22 [i_5] [i_5] [i_5] [i_5] [i_5] = (((arr_0 [i_3]) ? ((13804 ? 158 : 1204500504917765334)) : -32758));
                            var_14 = 261632;
                            arr_23 [i_2] [i_1] [i_5] [i_1] [i_1] = (((arr_7 [i_0]) * (!var_9)));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_26 [i_0] [i_1] [i_2 - 2] [i_6] = (arr_19 [i_0 - 1] [i_2 - 1] [i_2 - 1] [i_2] [i_0 - 1] [i_2] [i_2 - 1]);
                            var_15 = (max(var_15, (((((4914 ? 734215609835045755 : 6298)) + ((2143289344 ? (arr_5 [i_0]) : -534993629560858850)))))));
                        }
                        for (int i_7 = 3; i_7 < 21;i_7 += 1)
                        {
                            var_16 = (max(6298, 37));
                            var_17 = (((var_6 >= var_3) ? (((!(arr_8 [i_0 - 4])))) : -64));
                        }
                    }
                    for (int i_8 = 3; i_8 < 23;i_8 += 1)
                    {
                        arr_32 [i_0] [i_0] [i_2] [i_0] [i_8] = (arr_11 [i_0 + 2] [i_8 - 2]);

                        for (int i_9 = 3; i_9 < 22;i_9 += 1)
                        {
                            var_18 = (max(var_18, (((((40 << (var_5 - 28746))))))));
                            arr_35 [i_0] = ((min((arr_24 [i_2 - 1] [i_2 - 1] [i_8 - 1] [i_8] [i_9 - 1]), 534993629560858849)));
                            var_19 *= var_4;
                            var_20 &= ((((!(arr_13 [i_0] [i_9 - 1] [i_9 - 1] [i_8 - 3] [i_0])))));
                        }
                        arr_36 [i_0] = (arr_34 [i_0] [i_1] [i_1] [i_1] [i_0]);
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 25;i_11 += 1)
                        {
                            {
                                arr_42 [i_1] [i_2] = (min(80, (102 / var_8)));
                                arr_43 [i_0 - 1] [i_10] [i_2] [i_1] [i_0 - 1] [i_0 - 1] = var_1;
                            }
                        }
                    }
                }
            }
        }
        var_21 = (max(var_21, var_5));
        arr_44 [i_0 - 3] [i_0 - 1] = (((min(var_8, (53 + var_10))) - ((((arr_27 [i_0 - 1] [i_0 - 3] [i_0] [i_0] [i_0]) + (min((arr_8 [i_0 - 1]), (arr_28 [i_0] [i_0] [i_0]))))))));
    }
    var_22 += var_4;
    #pragma endscop
}
