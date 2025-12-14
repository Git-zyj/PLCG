/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_10 = (((arr_0 [i_0] [i_0]) + -14980));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    var_11 = (((((((((arr_7 [i_0]) * (arr_5 [i_0] [i_2])))) ? (arr_0 [i_0] [i_1]) : var_9))) ? (arr_3 [i_1] [i_2 + 1]) : ((5953925721479934472 & (((min((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0])))))))));
                    var_12 = (((((max(-64, 3706136823671889601)) <= ((max(var_6, 1073741823))))) ? (arr_1 [i_0]) : ((((1 ? 88 : (arr_2 [i_0])))))));
                }
            }
        }
        arr_8 [i_0] = (min(((7866284260619706074 ? 1 : 17620033151960626745)), (min(7866284260619706074, 3226623113523737541))));
        arr_9 [i_0] = (arr_1 [7]);
        var_13 ^= (((max((((arr_0 [i_0] [i_0]) != var_4)), (arr_5 [i_0] [i_0]))) ? (arr_6 [10] [i_0] [10] [0]) : 63));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_14 = 3221225478;
        arr_12 [i_3] [i_3] = arr_10 [12] [i_3];
        arr_13 [i_3] = ((var_6 < ((var_8 >> (((arr_10 [i_3] [i_3]) - 19022))))));
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 8;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        {
                            var_15 ^= ((((max(2387030109, 3140852683))) ? (arr_5 [i_4] [i_6 + 1]) : (arr_20 [i_4] [i_7] [i_7])));
                            var_16 ^= ((-1 ? 826710921748924871 : -7));
                        }
                    }
                }
                var_17 = (1907937192 >> 1);
            }
        }
    }
    var_18 = ((var_4 ? ((((max(var_9, var_0))))) : (max((~var_1), var_5))));
    var_19 = (((max((var_9 > var_0), var_5)) - var_2));
    #pragma endscop
}
