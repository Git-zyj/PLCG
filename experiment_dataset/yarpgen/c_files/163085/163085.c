/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, 65535));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [i_0]);
        var_14 = ((6 ? 2 : 191));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {

                        for (int i_4 = 3; i_4 < 6;i_4 += 1)
                        {
                            arr_15 [i_0] [i_0] = -59520;
                            var_15 = 2;
                        }
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_16 = 16777215;
                            var_17 *= (~65534);
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_0] = (((arr_18 [i_1] [i_1] [i_2 + 1] [i_3] [i_3] [i_6]) ? -8104527603287286976 : (((-12612 ? -12635 : -12640)))));
                            var_18 = arr_1 [i_6];
                        }
                        arr_21 [i_0] [i_1] [i_2] [i_3] = (arr_16 [i_0] [i_0] [i_0] [0] [i_0]);
                        var_19 ^= ((25988 ? 13609 : (arr_14 [i_3] [i_2 + 2] [i_2 + 2] [i_3] [i_1])));
                    }
                }
            }
        }
        var_20 += 12611;
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        var_21 = 25988;
        arr_24 [i_7] [i_7] = (((arr_23 [i_7]) ? 1217461215 : 102));
    }
    var_22 = 30278;
    var_23 = (255 ? ((var_5 ? ((min(7, 45473))) : -1217461216)) : (((!((max(65535, var_1)))))));
    #pragma endscop
}
