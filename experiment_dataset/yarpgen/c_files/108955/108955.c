/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += (~var_10);
    var_12 = (!4294967295);
    var_13 = ((((((max(var_6, var_6))) ? var_8 : (1325866415 > var_1))) * var_7));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = var_0;
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    arr_10 [i_0] = 2130524828;
                    var_15 = ((15019587645159178973 >> ((((7 ? var_0 : var_6)) >> (44210 - 44197)))));
                }
            }
        }
        var_16 = (((1 ? (((!(arr_3 [5] [i_0])))) : (arr_5 [i_0] [i_0] [i_0]))));
        arr_11 [i_0] = ((((min((arr_8 [i_0] [i_0] [i_0] [i_0]), 1))) ? -1245873278358421994 : ((((65510 ? var_9 : var_4))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 21;i_4 += 1)
            {
                {
                    var_17 = 0;
                    var_18 -= ((-1 ? (arr_9 [i_4 - 1] [i_3] [i_3] [i_4 + 4]) : (~-297540088182584932)));

                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_19 = -var_10;
                        arr_19 [10] [i_0] [i_0] [1] = (min(((((min(var_2, (arr_3 [i_0] [i_5])))) ? -17396 : ((var_10 % (arr_4 [i_0] [i_4 + 3] [i_5]))))), 243));
                        var_20 -= ((((arr_16 [24] [i_3] [24]) == 24)));
                        var_21 = (arr_16 [i_0] [i_3] [i_0]);
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_22 = ((!((((max(1842878057756144672, (arr_4 [i_0] [i_4] [i_4]))) % (-18651 <= 2072609662))))));
                        var_23 &= (min((((!var_3) ? 4056703191 : (((0 ? var_6 : var_5))))), ((((~var_1) < ((min(2, 26318))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
