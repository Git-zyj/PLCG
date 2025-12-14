/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = arr_1 [i_0] [i_0];
        arr_3 [12] &= (max((~var_11), (((~(arr_1 [i_0 + 1] [i_0 + 1]))))));
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                {
                    var_14 += (min((min((arr_8 [i_1]), 1)), (((((~(arr_5 [i_2] [9])))) ? ((((arr_7 [i_1 + 2] [i_3]) >= (arr_4 [i_1])))) : ((max(var_9, var_6)))))));
                    var_15 = (max(var_15, 477229276));
                    arr_11 [i_3] [i_2] [i_3] = ((((-(max(3760340479223513714, 3760340479223513713)))) % 4611686018427355136));
                    arr_12 [i_1] [6] [i_1 - 2] |= (min(((max((arr_6 [i_3 + 1] [i_3] [i_3 + 2]), (arr_6 [i_3 + 2] [i_3 + 2] [i_3])))), 86));
                }
            }
        }
        arr_13 [i_1 + 3] = (((((1267743315 | (max(0, 36028797018963967))))) ? ((-(max(7866359146288530795, 86)))) : var_0));
        var_16 = (((((15100029889882061011 != 14686403594486037902) && (((arr_9 [i_1] [i_1] [i_1]) && var_4)))) && (arr_1 [i_1 - 2] [i_1])));
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        arr_18 [i_4] = ((((max((arr_5 [i_4] [i_4]), var_6))) + (4611686018427355151 <= -17278)));
        var_17 = ((((max((((arr_10 [i_4]) / var_2)), (((arr_17 [i_4]) >> (524287 - 524263)))))) ? -255 : (!var_8)));
    }

    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        var_18 = ((var_7 ? (((arr_0 [i_5] [i_5]) ? var_1 : 224)) : var_8));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                {
                    arr_28 [i_5] = var_5;
                    var_19 = (~(((var_5 << 30) << ((((var_4 ? 1200335305 : var_6)) - 1200335277)))));
                }
            }
        }
        var_20 = (arr_21 [i_5] [i_5]);
    }
    #pragma endscop
}
