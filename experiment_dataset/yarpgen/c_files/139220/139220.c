/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -23511;

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (max(-2129672336, (~2147483647)));
        arr_5 [i_0] [i_0] = 31135;
        arr_6 [i_0] = (max((max(((-(arr_1 [i_0]))), 1)), ((max((arr_3 [i_0]), (arr_0 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = 127;
        arr_10 [i_1] = 127;
        arr_11 [i_1] = ((!(arr_3 [i_1])));
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_14 [i_2] = (arr_12 [12]);
        arr_15 [i_2] = (~1);
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    arr_21 [i_2] [i_3] [i_3] = -5594156370939644987;
                    arr_22 [i_4] [i_3] [i_2] = 9;
                }
            }
        }
        arr_23 [i_2] = -1;
    }
    var_19 = 2458088136;
    #pragma endscop
}
