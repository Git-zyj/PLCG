/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((((min((!2660553646989239361), -10897))) ? (81 / var_12) : (min((((-18341 | (arr_0 [i_0] [i_0])))), (max(432345564227567616, (arr_1 [i_0])))))));
        var_20 -= ((+(min((arr_0 [i_0] [i_0]), (arr_1 [i_0])))));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_21 = ((-(((((arr_3 [i_0] [i_0] [i_0]) ? 188 : (arr_1 [i_1]))) - var_10))));
            var_22 ^= min(((min(var_14, 2180))), ((((var_12 ? var_13 : 104)))));
            var_23 = (min(var_23, 29352));
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            arr_8 [i_0] [i_0] = ((~(min(var_16, (1842951591 & 4294303795)))));

            for (int i_3 = 4; i_3 < 9;i_3 += 1)
            {
                var_24 = (min(var_24, var_9));
                var_25 = (arr_7 [i_0]);
            }
            /* vectorizable */
            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                var_26 = (min(var_26, (arr_4 [11] [i_4])));
                arr_14 [i_0] [i_0] [i_0] [i_0] = 84;
            }
            var_27 = (max(var_27, ((min(((min(var_17, (arr_0 [i_2] [i_2])))), ((-28637 / (arr_13 [i_0] [i_0] [i_0]))))))));
            var_28 += ((!((max(var_10, (arr_11 [i_0] [i_0] [i_2]))))));
            var_29 = max(-28640, ((17 << (76 - 58))));
        }
        var_30 = ((((((3941126983368915394 <= 84) ? (~856322416) : (((4890631586358635886 ? var_13 : (arr_13 [i_0] [i_0] [i_0]))))))) ? (arr_3 [i_0] [i_0] [i_0]) : (((-1666674374 && (!4064))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
    {
        var_31 = (arr_3 [i_5] [i_5] [i_5]);
        arr_18 [i_5] = 21;
        var_32 ^= 18014398509481984025;
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                {
                    var_33 = (min(var_33, (~var_13)));
                    var_34 = (max(var_34, var_9));
                    var_35 = 122;
                    var_36 ^= (((8192 < 5965708730645263934) ? -4890631586358635887 : 2025827153));
                    arr_24 [i_7] [i_7] = (arr_21 [i_6] [i_7]);
                }
            }
        }
    }
    var_37 = (max(((59227 ? -5728 : 8192)), -5483));
    var_38 = (~var_11);
    #pragma endscop
}
