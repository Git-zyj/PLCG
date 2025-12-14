/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((44374 ? 0 : 44374));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    arr_11 [i_1] [i_2] [i_2 - 1] [4] = ((-((min(19725, 178)))));
                    var_17 += (max(9, 9));
                }
            }
        }
        arr_12 [1] = 0;
        arr_13 [11] = ((14124 ? (arr_3 [i_0]) : (arr_3 [i_0])));
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        arr_17 [i_3] = ((-((-((19725 ? 19725 : (arr_7 [6])))))));
        var_18 ^= 28;
    }
    #pragma endscop
}
