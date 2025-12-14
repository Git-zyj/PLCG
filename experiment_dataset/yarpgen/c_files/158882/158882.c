/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_4 [11] [11] = (!-4377250907091156211);
        arr_5 [i_0] = var_6;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_10 = (((-(var_9 / -4580074800953684277))));
        arr_9 [i_1] = 4377250907091156234;
        var_11 = (min(var_11, (min(((((arr_8 [i_1]) < (~var_6)))), (arr_2 [9] [i_1])))));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_13 [i_2] = (var_7 % 9007199254708224);
        var_12 = (max(var_12, 4377250907091156230));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 8;i_5 += 1)
                {
                    {
                        var_13 = ((((min(-4377250907091156192, (arr_19 [i_2] [i_2])) + 4377250907091156210))));
                        arr_21 [i_3] [i_3] [i_3] = (((var_4 == 18446744073709551605) >> ((((((((arr_16 [i_4]) ? var_5 : 0))) ? (var_6 ^ 4209879019) : -2)) - 7531571539767921409))));
                    }
                }
            }
        }
        arr_22 [i_2] [i_2] = (~10);
    }
    var_14 = ((var_9 ^ (min(18446744073709551615, 0))));
    var_15 = var_9;
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                {
                    var_16 = (1141742594850101265 && var_5);

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        var_17 += (arr_25 [i_8] [15]);
                        var_18 = (1141742594850101265 & (arr_26 [i_6]));
                        arr_32 [i_8] = ((4286578688 >= (arr_24 [i_6])));
                    }
                    var_19 = (2437445903 > 2959735310);
                    var_20 ^= min(var_1, ((((arr_24 [12]) || (-4286578681 & 9658638528893694934)))));
                }
            }
        }
    }
    var_21 = var_9;
    #pragma endscop
}
