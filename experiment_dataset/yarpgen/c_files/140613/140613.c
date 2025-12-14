/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((-1295052548 ? (arr_1 [i_0] [i_0]) : -4009008667518677544));
        arr_4 [i_0] [i_0] = (-2147483647 - 1);
        arr_5 [i_0] = (~-4009008667518677529);
    }
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {
        var_14 -= (((arr_0 [i_1] [14]) > (max((((-2147483647 - 1) / 182)), 44))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 12;i_4 += 1)
                {
                    {
                        arr_17 [i_3] [i_2] [0] = ((+(min((!0), 13156))));
                        arr_18 [i_1] [4] [i_1] = 394191535003604289;
                        arr_19 [9] [i_1] [i_2] [i_1] = ((((-(max(-4408645557884807493, (arr_6 [i_2]))))) >= ((394191535003604289 ? 2799247405291969111 : 15766))));
                    }
                }
            }
        }
    }
    for (int i_5 = 2; i_5 < 18;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 17;i_7 += 1)
            {
                {
                    arr_26 [i_5] [i_5] [15] [i_7 - 4] = (max(-7942508262682953500, ((~(max(107, 17226218144382279867))))));
                    var_15 = (-((500844787 * ((7328 ? 0 : 1)))));
                    var_16 -= (~-1392626664184919179);
                }
            }
        }
        arr_27 [i_5] = ((-(((arr_23 [i_5 + 1]) & -2799247405291969112))));
    }
    var_17 = (((max(((((var_3 + 2147483647) >> (8650047774652294836 - 8650047774652294834)))), -8084402155736665423)) > (max(1, (max(var_11, 2799247405291969112))))));
    #pragma endscop
}
