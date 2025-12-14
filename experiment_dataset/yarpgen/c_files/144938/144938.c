/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_11 [0] [i_1] [i_1] [i_1] [i_1] [i_0] = (min((min((1 & var_2), 1)), var_9));
                        arr_12 [i_0] [i_0] [3] [i_1] = var_12;
                    }
                    arr_13 [i_2] [i_1] [i_1] [i_0] = (arr_7 [i_0] [i_1] [i_0] [i_0]);
                }
            }
        }
        arr_14 [i_0] = (arr_9 [i_0] [1] [i_0]);

        /* vectorizable */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            arr_18 [i_4] [i_0] [i_0] = ((var_9 ? (-32767 - 1) : (arr_4 [i_0] [i_4])));
            arr_19 [0] [i_4] = (arr_4 [i_4] [i_4]);
            arr_20 [i_4] [i_0] = (((arr_7 [i_0] [i_4] [6] [i_0]) ? (arr_3 [i_0]) : 4294967295));
        }
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            arr_23 [i_5] = var_13;
            arr_24 [i_0] = 32759;
            arr_25 [3] [3] &= 18446744073709551615;
        }
    }
    var_18 = var_16;
    #pragma endscop
}
