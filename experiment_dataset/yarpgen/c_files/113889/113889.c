/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_17 = 56;
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] [4] [i_0] = (arr_4 [i_0] [i_1] [i_3]);
                        arr_12 [i_0] [i_0] [i_0] [i_0] [9] = ((119 ? (max((arr_5 [i_3]), 4095)) : (((((max(40397, (arr_8 [i_0] [i_2] [i_1 - 1] [i_0])))) | var_14)))));
                        arr_13 [i_0] [i_2] [i_1 + 2] [i_0] = (max((min(2097088, (~4294963200))), (~50254)));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
    {
        arr_17 [i_4] [i_4] = (var_16 & var_1);
        var_18 = 49152;
        arr_18 [i_4] [4] = (4294967293 | 6993895782267143814);
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
    {
        arr_23 [i_5] = (min((max((!var_12), var_4)), (arr_7 [i_5] [i_5] [i_5])));
        arr_24 [i_5] = (arr_19 [i_5]);
    }

    for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
    {
        arr_27 [i_6] [i_6] = var_6;
        var_19 = (arr_26 [i_6]);
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
    {
        arr_32 [i_7] = (arr_30 [i_7]);
        var_20 = arr_30 [i_7];
    }
    #pragma endscop
}
