/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_15 = (var_6 + 1);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_16 = ((((((arr_5 [i_0]) ? 1 : 1))) ? (((5 ? 124 : 32767))) : ((var_5 ? 0 : var_3))));
            var_17 = (((1 >> (-1 + 17))) & (!32757));
        }
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        var_18 = (((arr_11 [i_0] [i_0 + 2]) + var_7));
                        var_19 = ((32767 >= (((-399707643 + 2147483647) >> (var_10 + 12488)))));
                        var_20 = (377026438345968088 && 470784570);
                    }
                }
            }
        }
    }
    var_21 = (min((((!(((var_9 ? var_0 : 124)))))), (max(0, -1313094458))));
    #pragma endscop
}
