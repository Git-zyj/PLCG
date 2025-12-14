/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_12 = (min(var_12, 2537376977));
        arr_3 [i_0] [i_0] = (min(2612293851122930829, var_3));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_13 = var_4;
            arr_6 [i_1] = (18446744073709551615 - var_10);
        }
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        arr_10 [i_2] = (var_1 | ((((((63 ? var_3 : var_5)) > (max((arr_9 [i_2 - 1] [i_2 - 1]), -3733485127524503449)))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    {
                        var_14 -= (~var_2);
                        arr_18 [i_2] [i_2 - 1] [i_2] [i_2] = (((~65) ? (-1 / 8653667480492090265) : (max(13851195120025440285, ((max(96, 3688306251)))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
