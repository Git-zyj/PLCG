/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_15 = ((var_11 ? var_12 : (arr_0 [i_0 + 2] [10])));
        arr_2 [i_0 - 1] = var_13;
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_16 = (arr_4 [i_1]);
        var_17 += (arr_5 [14]);
        arr_6 [1] &= (min((min((var_11 + 2147483648), ((var_10 >> (arr_3 [12] [i_1]))))), var_9));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_9 [10] [10] &= ((!(var_14 && var_11)));
            var_18 += (!17693112816349321186);
            var_19 = (((arr_8 [i_1] [i_1 + 3] [i_1]) % var_7));
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_20 |= var_14;
                        arr_17 [i_1] [i_1] [i_1] [i_5] [i_5] = (arr_8 [i_1] [i_4] [i_4]);
                    }
                }
            }
            var_21 &= (max((((var_5 - var_9) | (arr_16 [5] [i_1 + 1]))), (((!((min((arr_4 [6]), var_6))))))));
            arr_18 [22] [i_1] [22] |= ((197 ? -6476072230566245846 : var_1));
            var_22 = var_1;
        }
    }
    var_23 += 0;
    #pragma endscop
}
