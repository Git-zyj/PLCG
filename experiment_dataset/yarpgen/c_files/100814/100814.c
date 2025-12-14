/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_12 [i_1] = ((((~((-21502 ? 150 : -21)))) != (arr_3 [i_1])));
                        arr_13 [i_2] [i_1] = (((arr_2 [i_0] [i_0]) ? (max(var_8, ((min(1, 36679))))) : ((((((var_13 ? 36679 : (arr_1 [i_3]))) != (min(var_16, (arr_9 [i_1] [i_2] [i_1] [i_1])))))))));
                    }
                }
            }
        }
        var_19 = (min(((((((arr_9 [10] [i_0] [i_0] [i_0]) / 1))) ? 17878170164990313800 : (arr_9 [10] [i_0] [i_0] [10]))), (arr_9 [0] [0] [i_0] [i_0])));

        for (int i_4 = 2; i_4 < 17;i_4 += 1)
        {
            var_20 = ((((arr_4 [i_0] [i_0] [i_0]) << (((17462 ^ var_7) - 10460886400688970441)))));
            var_21 = var_16;
        }
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 14;i_5 += 1)
    {
        var_22 = (min(var_22, (arr_17 [14])));
        var_23 = ((~(arr_14 [i_5] [11])));
    }
    var_24 = (min(var_24, ((((min((-1856402791219484294 % 17477), var_1))) && var_14))));
    #pragma endscop
}
