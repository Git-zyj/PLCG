/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_15 += (max((((-(arr_6 [i_1] [i_1])))), ((-(max(var_11, var_7))))));
                            arr_9 [i_1] [i_2] [i_0] = (i_0 % 2 == 0) ? ((((max((arr_0 [i_0]), (arr_7 [i_0 - 1] [i_1] [i_1] [i_2] [i_1]))) >> (((arr_0 [i_0]) + 692790011))))) : ((((max((arr_0 [i_0]), (arr_7 [i_0 - 1] [i_1] [i_1] [i_2] [i_1]))) >> (((((arr_0 [i_0]) + 692790011)) - 862748567)))));
                            var_16 = (max(var_16, ((max((((min((arr_8 [16] [i_1] [i_1] [i_1] [i_1]), var_4)) * (((18956 ? var_10 : var_13))))), (max((min(var_9, (arr_5 [i_0] [6] [i_0]))), var_9)))))));
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 2; i_4 < 18;i_4 += 1)
                {
                    var_17 = (arr_1 [i_1] [i_4 + 1]);
                    var_18 = (arr_2 [i_0] [i_1] [i_0]);
                    var_19 = ((!((0 <= (arr_6 [i_0 - 1] [i_0 - 1])))));
                }
                for (int i_5 = 4; i_5 < 17;i_5 += 1)
                {
                    var_20 = ((0 ? 65535 : 18931));
                    var_21 = ((~(min((arr_7 [i_0] [i_0 + 2] [i_0 + 2] [i_5 - 2] [i_5]), var_6))));
                }
                /* vectorizable */
                for (int i_6 = 4; i_6 < 19;i_6 += 1)
                {
                    arr_16 [i_1] [i_0] [i_1] = ((var_2 > ((var_10 ? (arr_14 [i_0] [i_0] [i_0] [i_0]) : -3640549871621703212))));
                    var_22 ^= (~1);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 17;i_8 += 1)
                        {
                            {
                                var_23 = (min(var_23, ((((((var_9 ? (arr_2 [i_0] [i_6] [i_7]) : var_11))) ? (~var_8) : var_3)))));
                                arr_22 [i_0] = (arr_6 [i_0 - 1] [i_8 + 1]);
                                var_24 += (((((arr_19 [i_0] [i_1] [i_0] [i_8]) && (arr_0 [i_1]))) ? (((arr_10 [i_6] [i_7]) ? 56460 : 2996551173)) : (arr_10 [i_1] [i_1])));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_9 = 1; i_9 < 18;i_9 += 1)
                {
                    arr_27 [i_0] = 1;

                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        var_25 = (max(var_25, (((var_10 ? (arr_10 [i_0] [i_10]) : (arr_15 [i_0 + 2] [i_0] [i_9 - 1] [i_9]))))));
                        var_26 += var_1;
                        var_27 = (max(var_27, var_9));
                        arr_30 [i_0] = (2384531212659881791 ? 21 : -7659253622739510541);
                    }
                    var_28 = (max(var_28, 46575));
                    var_29 = (max(var_29, (((65528 ? (1 && var_12) : (((arr_18 [i_9] [i_9 - 1] [i_9] [i_1] [i_9] [i_9]) ? 1 : -2561979817648385209)))))));
                    var_30 = var_10;
                }
                arr_31 [i_1] [i_1] |= arr_7 [i_0] [i_0] [i_0] [i_1] [i_0];
            }
        }
    }
    var_31 = (min(var_31, (((((((var_2 * 13386) ? var_13 : (min(8987554778847671031, var_13))))) && ((((var_2 || var_4) ? ((-5279183006189998778 ? var_8 : 255)) : 255))))))));
    var_32 = var_1;
    #pragma endscop
}
