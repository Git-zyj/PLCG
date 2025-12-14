/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (min(var_18, 3989009925870351795));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 6;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_1] [8] = var_8;
                        arr_10 [i_3] [i_1] = 6252445182092812209;

                        for (int i_4 = 4; i_4 < 7;i_4 += 1)
                        {
                            arr_14 [i_4] [i_3] [2] [i_1] [i_0] = ((((((~(arr_6 [i_2] [i_4 - 4] [i_2] [i_2 - 1] [1]))) + 2147483647)) << ((((~(27997 ^ var_0))) - 5520516008789156199))));
                            arr_15 [i_0] [i_1] [i_0] [i_3] [i_3] = 3496237404;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
