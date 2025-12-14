/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (3718385335 & 3515940811233874072);
    var_11 = ((min((max(96, 2977633392872057545), ((min(1024, var_9)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = (max((!2643978335), (arr_0 [i_0])));
                arr_5 [i_1] = (((min(136, var_5))));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    arr_8 [i_1] [i_1] [i_1] = ((((max(432345564227567616, var_8)) & (((-9794 ? 917310149 : (arr_7 [i_2] [i_1] [i_1] [i_0])))))));
                    arr_9 [i_0] [i_1] [i_2] [i_0] = max(20794, 8078);
                    arr_10 [i_1] = (min(((((arr_6 [i_1]) != -73))), ((1 ? -96 : 0))));
                }
                for (int i_3 = 4; i_3 < 15;i_3 += 1)
                {
                    arr_14 [i_0] [i_1] [i_3] = (((12433849625403723449 ? (min(-8958829582548152949, 288230376151711743)) : var_8)));
                    var_13 = (max(var_13, (((1488 + (((max(var_7, var_8)) / (((arr_6 [16]) ? var_8 : var_3)))))))));
                    var_14 = (arr_13 [i_1]);
                    arr_15 [14] [i_1] [14] &= (max((max(0, 49)), ((((arr_3 [i_3 - 1] [1]) ? (arr_11 [i_3 - 1]) : var_3)))));
                    arr_16 [i_0] [i_1] [i_1] [i_0] = (arr_0 [i_3]);
                }
            }
        }
    }
    #pragma endscop
}
