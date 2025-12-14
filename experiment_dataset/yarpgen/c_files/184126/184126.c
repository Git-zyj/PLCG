/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [3] [i_1] [i_1] [i_1] = ((((var_17 && (arr_4 [i_0 - 2] [i_0 + 1] [i_3]))) || ((max((arr_8 [i_0] [i_0 - 1] [i_0]), 1440645106)))));
                        arr_11 [i_2] [i_0] = var_9;
                    }
                }
            }
        }
        var_20 ^= ((((!(arr_7 [i_0] [13] [8]))) ? -1102761601 : (max(1102761601, (arr_1 [i_0 - 2] [i_0 - 2])))));
        arr_12 [i_0] [i_0 + 1] = var_9;
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_15 [i_4] = var_11;
        arr_16 [i_4] = (((arr_14 [i_4] [i_4]) - (max(-1102761589, 1102761601))));
        arr_17 [i_4] = (max(var_7, (((((max(1102761573, -1102761601))) != 2884206161)))));
    }
    var_21 = 2884206161;
    #pragma endscop
}
