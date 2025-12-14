/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_20 -= (((((-(arr_1 [9])))) ? ((var_6 ? (arr_0 [10]) : -29743)) : ((var_3 ? (arr_0 [0]) : 1))));
        var_21 += (((119 ? (arr_0 [16]) : (arr_0 [1]))));
        arr_2 [8] &= (arr_1 [i_0 - 1]);
    }

    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1] = ((((1 >> (((((arr_3 [3]) ? (arr_4 [i_1] [i_1]) : 935120205173675996)) + 115)))) >= (arr_3 [i_1])));
        arr_6 [3] [i_1] = (max(((((arr_1 [i_1]) > (((arr_4 [i_1] [i_1]) ? 1482524663 : (arr_0 [i_1])))))), (((max(1, 3302131794109517185)) & (1482524690 | 2812442633)))));
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                {
                    arr_14 [i_1] = (arr_4 [i_1] [i_1]);
                    arr_15 [i_1] [i_2] [i_1] [1] = ((11963177774913682680 ? 32767 : 32767));
                }
            }
        }
        arr_16 [i_1] = (arr_1 [i_1]);
    }
    #pragma endscop
}
