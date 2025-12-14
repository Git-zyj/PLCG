/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_18 = var_7;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((~(min(((var_4 ? var_15 : (arr_5 [i_1] [i_1] [i_3]))), ((min(var_13, 65522)))))));
                                arr_11 [i_4 + 2] [i_3] [i_1] [i_1] [i_0] = (arr_0 [i_3]);
                                arr_12 [i_0] [i_1 + 1] [i_3] = (max((min(17499306427932637694, 28672)), ((max(0, 88)))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_4 [i_0] [i_3]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = ((((((!(~231))))) < var_4));

    for (int i_5 = 3; i_5 < 23;i_5 += 1)
    {
        arr_17 [i_5] = ((~(arr_15 [i_5 - 2])));
        arr_18 [i_5] [i_5] = ((((min((arr_15 [i_5]), (28672 >= var_13)))) | (((((var_0 - (arr_14 [i_5] [i_5])))) ? 32767 : ((min(40385, (arr_16 [11]))))))));
    }
    for (int i_6 = 1; i_6 < 19;i_6 += 1)
    {
        var_20 = ((16383 / ((min(42876, (65535 / 1))))));
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 17;i_9 += 1)
                {
                    {
                        var_21 += (!132);
                        var_22 *= (((~18446744073709551615) ? (min((((!(arr_15 [i_7 + 3])))), (min(var_6, 198)))) : var_11));
                    }
                }
            }
        }
        arr_31 [i_6 + 1] = (((((!(arr_14 [i_6] [i_6 - 1])))) != 250));
    }
    var_23 += var_15;
    var_24 |= var_5;
    #pragma endscop
}
