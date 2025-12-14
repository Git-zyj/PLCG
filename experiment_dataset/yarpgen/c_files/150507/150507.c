/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_6 [0] |= ((((arr_2 [i_0 + 2] [i_1]) * (arr_2 [i_1] [i_0]))));
            var_18 = (arr_2 [i_1] [19]);
        }
        for (int i_2 = 4; i_2 < 23;i_2 += 1)
        {
            arr_9 [i_0] = (arr_2 [i_2] [i_0 - 1]);
            var_19 = (((arr_8 [i_0] [i_0]) & 16765162399260671012));
            var_20 |= (arr_3 [i_0 - 1]);
        }
        for (int i_3 = 1; i_3 < 24;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_21 = ((~(arr_11 [i_5] [i_4] [i_3 - 1])));
                        var_22 = 2097136;
                        var_23 = (((((arr_16 [i_0] [i_0] [21] [i_0] [19]) - (arr_10 [i_0]))) & (arr_10 [i_5])));
                        var_24 = (arr_16 [i_3 - 1] [i_0 - 2] [i_0 - 1] [i_0 + 1] [i_0 - 1]);
                    }
                }
            }
            arr_17 [i_0] = ((-8600842368246790885 ? (arr_8 [i_3 + 1] [i_3 + 1]) : (arr_8 [i_3 - 1] [i_3 + 1])));
            var_25 = arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [2];
            arr_18 [i_0] [i_0] = (arr_3 [i_0 - 2]);
            var_26 = (((arr_2 [i_3 + 1] [i_3 - 1]) == (~4183102846163202298)));
        }
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                {
                    var_27 = (((((arr_2 [i_0 + 3] [i_0]) + 2147483647)) >> (((arr_11 [i_6 + 2] [i_0 + 1] [i_0]) - 16212))));
                    var_28 = ((((arr_22 [i_0] [i_0] [i_7]) & 3397)));
                }
            }
        }
    }
    var_29 = var_5;
    var_30 = (~var_11);
    var_31 += (min(var_7, (((max(var_1, var_15))))));
    var_32 = -384;
    #pragma endscop
}
