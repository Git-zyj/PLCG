/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [3] = (((min((max(-7191544578168748558, -7191544578168748558)), var_10)) != 25160));
            var_14 = (((max(var_10, var_4))) ? (7191544578168748548 & -7191544578168748545) : (((-7191544578168748558 & -7191544578168748558) + (~-7191544578168748548))));
        }
        var_15 = 33554431;
        arr_7 [14] [i_0] = 1969651299;
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_16 = var_6;
        arr_12 [i_2] = (~(arr_3 [i_2] [12] [10]));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 15;i_4 += 1)
        {
            {
                arr_18 [i_3] [i_3] &= (max(((((arr_16 [0] [i_4 - 1] [0]) | var_3))), (-1969651300 + 7191544578168748542)));
                var_17 = max((min(var_10, (arr_11 [i_4 - 1]))), var_10);
                var_18 = (-46237823996814699 % 8564382546310913044);

                /* vectorizable */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    arr_22 [13] [i_4] [i_4] = -37464;
                    arr_23 [i_4] [2] [i_5] = 116;
                    var_19 = (-8564382546310913013 - -3415065267377858012);
                    var_20 = (min(var_20, ((((-8 | (arr_17 [i_3])))))));
                }
                for (int i_6 = 2; i_6 < 16;i_6 += 1)
                {
                    var_21 = 7191544578168748548;
                    arr_26 [i_4] [i_4] [1] [i_6] = (min((((-618902967 < -1620922176) ? var_4 : -6816060871956401562)), (var_6 / -1969651299)));
                    var_22 = 5048584277495157391;
                }
            }
        }
    }
    #pragma endscop
}
