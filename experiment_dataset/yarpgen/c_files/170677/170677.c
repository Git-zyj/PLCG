/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (arr_0 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_1] = var_9;
                    arr_9 [i_0] [i_1] [i_2] &= -1368496690;
                    arr_10 [i_2] [i_1] [i_2] = (arr_0 [i_0] [i_1]);
                }
            }
        }
        arr_11 [i_0] [i_0] = (((((arr_4 [i_0] [i_0] [i_0]) != var_7)) ? ((181622319 + (arr_7 [i_0]))) : 1479412985));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] &= ((~(arr_5 [i_3] [i_3] [i_3])));
        arr_15 [i_3] [i_3] = (((arr_3 [i_3] [i_3]) ? -16128 : 326645312031392937));
        arr_16 [i_3] = (arr_5 [i_3] [i_3] [i_3]);
        arr_17 [i_3] [i_3] = (arr_0 [i_3] [i_3]);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
    {
        arr_20 [i_4] [i_4] = (45010 * 45010);
        arr_21 [i_4] = 45025;
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                {
                    arr_29 [i_5] [i_6] [i_7] [i_7] = (min(-9, -9));

                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        arr_32 [i_8] [i_6] [i_7] [i_8] = (min(((min((arr_3 [i_5] [i_8]), (arr_3 [i_5] [i_6])))), (min((((!(arr_0 [i_6] [i_5])))), 20525))));
                        arr_33 [12] = (min((arr_0 [i_7] [i_5]), -1438735729828745135));
                        arr_34 [i_5] [0] [i_5] [i_5] [i_5] [i_5] = (min(((max(8, 4113344965))), (((45010 * -18931) ? 3693 : var_8))));
                        arr_35 [i_8] [i_8] [i_8] [i_5] = ((20504 <= ((min((arr_19 [i_6]), (arr_5 [i_5] [i_6] [i_7]))))));
                        arr_36 [i_8] [i_8] [i_8] [i_5] = (((min(1366385304060699642, (((-(arr_24 [i_6])))))) >> ((((-((~(arr_4 [i_7] [i_6] [i_5]))))) + 115))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
