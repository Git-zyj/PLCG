/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = (max(0, (arr_1 [i_0] [i_0])));
        var_10 = (((max((max((arr_3 [18] [i_0]), (arr_3 [i_0] [i_0]))), (arr_1 [i_0] [i_0]))) * 2047588724));
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 22;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_1] [i_1] [i_2] = (((((~(arr_5 [i_1 + 2] [i_3 + 1])))) ? ((11417598886430101235 ? 1 : -8790575330125411751)) : (((min((arr_10 [i_1] [i_1] [i_3 - 3]), (arr_8 [i_2])))))));
                    var_11 = ((!(((arr_2 [i_2]) < (~var_5)))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    arr_19 [i_1] = ((+(min((arr_13 [i_5]), var_8))));

                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_12 += (arr_9 [i_1] [i_4] [i_1 + 1]);
                        var_13 *= (max((~1), -3203));
                        var_14 = (arr_11 [i_1] [i_5] [i_4] [i_1]);
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            {

                /* vectorizable */
                for (int i_9 = 2; i_9 < 15;i_9 += 1)
                {
                    arr_35 [i_9 + 1] [i_7] [i_7] [i_7] = (-(arr_20 [i_7] [i_9 - 2] [i_9] [i_9 + 1] [i_9] [i_9]));
                    var_15 = (arr_25 [i_7] [i_8]);
                }
                arr_36 [i_8] [4] [i_7] = ((32577 << (((min(1, (((arr_32 [i_7]) ? (arr_33 [i_8] [i_7]) : (arr_11 [i_7] [i_8] [i_7] [i_8]))))) + 178271174))));
            }
        }
    }
    #pragma endscop
}
