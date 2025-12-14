/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = var_3;
        arr_3 [i_0] = (((var_0 ? var_8 : var_2)));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_14 += ((((((((var_13 ? var_11 : var_11))) ? (var_4 & var_12) : ((var_9 ? var_10 : var_8))))) ? ((min(((var_5 ? var_4 : var_6)), ((min(var_5, var_2)))))) : ((~((var_0 ? var_13 : var_3))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    var_15 -= ((1570473125 ? 18446744073709551612 : 8191));
                    arr_13 [i_1] [i_1] [i_1] [i_1] = var_1;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_16 = (((var_6 | var_7) ? ((var_5 >> (var_3 - 5034190422138522463))) : ((var_9 >> (var_6 - 52618)))));
        var_17 ^= ((var_4 ? var_8 : var_3));
        arr_18 [i_4] = (((((var_5 ? var_13 : var_0))) ? ((var_1 ? var_11 : var_5)) : (!var_10)));
    }
    var_18 = ((((min((~var_7), (~var_9)))) ? (max(((16380 ? 3 : 255)), (max(14, 18446744073709551593)))) : ((max(((var_8 ? var_4 : var_4)), (~var_1))))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            {
                var_19 *= ((-((var_4 ? ((max(var_0, var_9))) : ((var_0 ? var_11 : var_1))))));

                /* vectorizable */
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    var_20 = (min(var_20, (((-((var_10 ? var_5 : var_9)))))));
                    arr_27 [i_6] = (((((var_9 ? var_6 : var_12))) ? (~var_13) : (var_10 && var_2)));
                    arr_28 [i_6] [i_5] [i_6] [i_7] = (var_5 >= var_3);
                    var_21 &= (!var_8);
                    arr_29 [i_5] [i_5] [i_6] = (((1 && -81) ? var_4 : var_4));
                }
                arr_30 [i_5] [i_6] = ((((!(var_4 && var_0))) ? (min((!var_0), ((var_7 ? var_1 : var_11)))) : ((((max(var_12, var_12))) ? (var_5 | var_9) : -var_0))));
                arr_31 [i_5] [i_6] = -var_13;
            }
        }
    }
    #pragma endscop
}
