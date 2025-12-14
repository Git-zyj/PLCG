/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] [5] = (arr_2 [i_2]);
                    arr_8 [15] [i_1] = (arr_0 [13]);
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        arr_12 [i_3] = 2147483647;
        arr_13 [i_3] = ((+(max((arr_6 [i_3] [i_3] [i_3] [i_3]), (((arr_6 [i_3] [6] [i_3] [6]) + (arr_10 [i_3] [i_3])))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        var_17 = ((arr_0 [i_4]) ? -var_6 : var_5);
        var_18 = ((~(arr_9 [i_4] [i_4])));
        arr_17 [i_4] [i_4] = (!38377);
    }
    #pragma endscop
}
