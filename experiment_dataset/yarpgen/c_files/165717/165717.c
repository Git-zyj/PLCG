/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    arr_9 [i_3] [i_0] [i_1] [i_0] [i_0] = (62914560 | var_6);
                    arr_10 [i_0] [i_1] [i_1 + 1] = (((8229159491693246762 && 2147483647) || (arr_2 [i_0] [i_0])));
                }
                var_20 = -var_13;
            }
            var_21 = (arr_1 [18]);
        }
        arr_11 [i_0] = (((arr_2 [i_0] [i_0 - 1]) <= (arr_2 [i_0] [i_0 - 1])));
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        arr_14 [13] [i_4] = (-62914529 ^ 4035091436726731744);
        var_22 = max(var_2, (((arr_5 [i_4]) / (arr_6 [1] [i_4] [i_4] [1]))));
    }
    var_23 = ((((!((max(var_4, -1298)))))) <= var_7);
    var_24 -= (((~(65055 ^ 480))));
    #pragma endscop
}
