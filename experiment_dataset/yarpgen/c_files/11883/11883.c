/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 = (max(var_12, (((arr_3 [i_0]) ? 1 : (arr_0 [i_0] [i_0])))));
        var_13 = ((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_3 [i_0]))));
        var_14 = 0;
        arr_4 [i_0] = (var_9 ^ -25119);
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 23;i_2 += 1)
        {
            var_15 = (!-1727997998);
            var_16 = (!32767);

            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                arr_17 [i_1] [i_2] [i_3] [i_3] = ((((max((((0 ? -8 : 0))), var_5))) ? (arr_8 [i_2 + 2]) : ((2059271151 ? 457453647 : ((var_11 ? 0 : var_1))))));
                arr_18 [i_1] [i_1] = (((((-(arr_15 [i_3])))) - ((19 ? (arr_15 [i_3]) : var_10))));
            }
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    {
                        arr_25 [i_1] [i_5] [i_4] [7] [i_5] [i_5] = max((arr_14 [i_2 + 1] [8] [14]), (((((1 ? (arr_19 [i_1] [i_1] [i_1] [i_5]) : -30))) ? (arr_11 [i_1] [17]) : ((var_7 - (arr_8 [i_2 - 1]))))));
                        arr_26 [i_1] [i_5] [i_4] [i_5] = ((-8430865619345442634 ? 1 : 254));
                    }
                }
            }
            var_17 = (min(var_17, var_3));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_18 = (max(var_18, -4581882757696640531));
            var_19 = (((arr_8 [i_1]) ? (((((max((arr_16 [i_1] [i_6] [i_1] [i_1]), var_8))) ? ((min(-32766, var_11))) : (~var_1)))) : (((((0 ? -32761 : (arr_6 [18])))) ? (~65531) : -2170784779815981623))));
        }
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            var_20 = (max((((!((((arr_5 [i_7]) + (arr_6 [i_1]))))))), ((((((arr_15 [i_1]) + (arr_5 [i_1])))) ? ((((arr_22 [i_7] [i_1] [i_7] [i_7]) ? (arr_24 [i_1] [i_7] [i_1] [i_1] [i_1]) : (arr_16 [24] [i_7] [i_1] [i_1])))) : var_1))));
            arr_32 [24] [24] [i_1] |= (arr_20 [i_7] [i_7] [4]);
            arr_33 [i_7] [i_7] = -132593354;
            var_21 = (max((!16995765013204488731), (((var_4 >> (2547911102 - 2547911082))))));
            var_22 = (max(var_22, 63));
        }
        var_23 *= 127;
        var_24 = -11969;
    }
    var_25 |= ((var_6 << (((-102 + 125) - 13))));
    #pragma endscop
}
