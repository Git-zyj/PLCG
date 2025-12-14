/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_19 = (max(var_19, (((((min((arr_0 [i_0] [i_0]), 136))) ? ((-(arr_0 [i_0] [i_0]))) : ((((arr_0 [i_0] [i_0]) > (arr_0 [i_0] [i_0])))))))));
        var_20 = (min(var_20, ((((-753991963499848313 ? (arr_0 [10] [i_0]) : ((~(arr_1 [i_0])))))))));
        arr_2 [i_0] &= var_0;
        var_21 = (min(0, ((var_16 ? 25 : 0))));
    }
    for (int i_1 = 3; i_1 < 11;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {
                        var_22 = (-32767 - 1);
                        var_23 = (min(((((min(var_3, (arr_8 [i_1])))) ? var_7 : ((254 ? (arr_11 [i_4] [i_3] [10] [i_1]) : 0)))), (arr_7 [i_1] [2] [i_2])));
                        var_24 *= ((((min((arr_5 [9] [i_2] [i_3]), (((arr_0 [i_1] [i_1]) ? 24560 : 597381488))))) ? ((max(2147483647, 252))) : ((-39 ? (min(var_6, -5766275018288714135)) : ((((arr_9 [i_4] [i_3] [i_3]) ? 255 : (arr_5 [i_2] [i_2] [i_2]))))))));
                        var_25 = (!19048);
                    }
                }
            }
        }
        var_26 = ((((((arr_5 [i_1 - 2] [i_1] [i_1]) ? (arr_12 [i_1 + 3] [i_1] [i_1] [i_1 + 2]) : 2906982541135617321))) ? (((4001887871 ? 255 : (arr_7 [i_1] [13] [i_1])))) : (((40975 ? 0 : 25)))));
        var_27 = (max(var_27, (arr_7 [10] [i_1 + 3] [i_1])));
        var_28 = 15056038580862851291;
    }

    for (int i_5 = 1; i_5 < 15;i_5 += 1) /* same iter space */
    {
        var_29 = 252;
        var_30 ^= ((51735 * 0) ? (((max((arr_15 [i_5 + 1]), (arr_15 [i_5 + 2]))))) : var_16);
        var_31 = (max(var_31, var_1));
    }
    for (int i_6 = 1; i_6 < 15;i_6 += 1) /* same iter space */
    {
        var_32 = min(252, 597381488);
        var_33 |= ((-0 ? (min(86, 3247149954725335103)) : (((min(var_0, (((!(arr_17 [i_6 + 2] [i_6]))))))))));
        var_34 = (min(((2147483647 ? 65510 : 65510)), (((!(arr_14 [i_6]))))));
        var_35 |= (min((arr_14 [i_6 - 1]), (arr_14 [i_6 + 1])));
    }
    #pragma endscop
}
