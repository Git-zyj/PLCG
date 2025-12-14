/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_19 = (max(((8 ? 18446744073709551615 : (arr_7 [i_0] [i_1 + 1] [i_2] [i_1 + 1]))), 4));
                            arr_11 [i_3] = -3846958952588284961;
                            var_20 = var_17;
                            var_21 = (max(var_21, (arr_5 [i_0] [i_3 + 1])));
                        }
                    }
                }
            }
            var_22 = (((((-((68719476735 ? -68719476735 : -68719476742))))) ? var_7 : 2097136));
            var_23 = (min(var_23, (arr_3 [i_0])));
        }
        var_24 = (3814389663920000863 && 68719476741);
    }
    for (int i_5 = 3; i_5 < 8;i_5 += 1)
    {
        var_25 = (((68719476735 == (arr_2 [i_5 - 3]))) ? 8 : (arr_1 [i_5 + 1] [i_5 + 2]));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                {
                    var_26 = ((max(var_12, (arr_20 [i_6]))) - (((arr_13 [i_5 - 3]) ? -16032 : (-2147483647 - 1))));
                    var_27 = var_7;
                }
            }
        }

        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            arr_23 [i_5] [9] = -12;
            var_28 = (-1 / ((max(var_5, var_10))));
            arr_24 [i_5] [i_5 - 3] [i_5] &= (~2142132032);
        }
    }
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {
        arr_29 [i_9] = (arr_25 [i_9]);
        arr_30 [i_9] [i_9] = 9090403619406656169;
        arr_31 [i_9] [i_9] = ((((((-2147483647 - 1) ? 1 : (arr_28 [i_9] [i_9])))) ? (((var_13 > -1451450918) >> (255 - 253))) : ((-12 ? var_12 : -25))));
    }
    #pragma endscop
}
