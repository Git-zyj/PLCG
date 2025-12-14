/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_2] [i_0] = ((min(6144, 2)));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_3] = (min((min((arr_3 [i_0] [i_0]), -18463)), (arr_11 [i_0] [i_1] [i_2] [i_2])));
                        arr_13 [i_2] [i_1] = 3758096384;
                        arr_14 [i_2] [i_2] [i_2] [i_2] [i_2] = (min((arr_4 [i_0] [i_0] [i_2] [i_3]), 536870911));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_17 [i_2] = (arr_5 [i_2]);
                        arr_18 [i_0] [i_1] [i_2] [i_1] [i_2] [i_4] = (arr_9 [i_0] [i_0] [i_0] [i_0] [i_2]);
                        arr_19 [i_1] [i_2] [i_4] = ((3758096385 ? (((arr_9 [i_0] [i_0] [i_0] [i_0] [i_2]) ? ((64 ? 3758096384 : (arr_6 [i_0] [i_1] [i_2]))) : (arr_15 [i_2] [i_1] [i_2] [i_4]))) : (arr_9 [i_0] [i_0] [i_0] [i_0] [i_2])));
                    }
                    arr_20 [i_0] [i_0] [i_2] = (min((arr_11 [i_0] [i_0] [i_1] [i_2]), (min((arr_11 [i_0] [i_0] [i_0] [i_2]), (arr_6 [i_0] [i_1] [i_2])))));
                }
            }
        }
    }
    #pragma endscop
}
