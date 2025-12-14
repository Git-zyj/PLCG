/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_17 = -9486153440880436333;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_1] = (arr_5 [i_0] [i_1] [i_2]);
                                var_18 = ((+((9486153440880436333 ? (arr_1 [i_4 - 1] [15]) : (arr_2 [i_4 + 1])))));
                                var_19 = ((((max(9486153440880436345, 9486153440880436333))) ? ((((var_9 | (arr_6 [i_1] [i_2] [15]))))) : (((5956611969251823994 || 125097125) & (9486153440880436333 % 58164)))));
                                var_20 ^= ((((min((arr_1 [i_2 + 1] [i_3 + 1]), (min((arr_4 [i_0] [i_2] [i_0]), (arr_6 [i_0] [10] [i_0])))))) ? ((((min(var_12, var_7))) ? (arr_6 [i_0] [i_1] [i_2]) : (7371 & 58145))) : ((((arr_6 [i_0] [i_1] [10]) == var_9)))));
                                var_21 = var_8;
                            }
                        }
                    }
                    var_22 = -688022396;
                }
            }
        }
    }
    var_23 &= var_9;
    var_24 *= ((var_10 % (4032 % 7391)));

    for (int i_5 = 1; i_5 < 8;i_5 += 1)
    {
        var_25 = var_15;
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 7;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 9;i_8 += 1)
                {
                    {
                        arr_22 [i_5 - 1] [i_8] [i_7] = -7371;
                        var_26 = (~var_3);
                    }
                }
            }
        }
    }
    #pragma endscop
}
