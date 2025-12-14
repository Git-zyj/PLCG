/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] = var_7;
                var_11 *= ((max(9820, var_5)));
                arr_5 [i_0] [i_0] = (var_9 * var_2);
                var_12 = (((((arr_2 [i_0] [i_0]) < (arr_2 [i_0] [i_0]))) ? ((var_4 ? var_8 : var_4)) : (60 <= 7925609209512574177)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                var_13 = 236;
                var_14 |= (((((var_8 ? var_10 : var_4))) - (min((arr_3 [i_2] [i_2]), var_5))));

                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    var_15 ^= 25698;
                    var_16 = (min(var_16, (arr_2 [i_3] [i_2])));
                    arr_15 [i_4] = ((((max(((var_7 | (arr_13 [i_2] [i_3] [i_2] [i_2]))), ((var_7 >> (var_3 + 5437160122463252310)))))) ? (((236 ? 65535 : 2741))) : (max(((var_0 ? var_2 : var_9)), (~127)))));
                    arr_16 [i_4] = (arr_1 [i_4]);
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                arr_24 [i_6] = var_6;
                                arr_25 [i_2] [i_6] [i_5] [i_6] [i_7] [i_3] [i_2] = ((var_9 ? ((((arr_2 [i_2] [i_6]) * var_4))) : ((var_7 ? var_2 : var_9))));
                            }
                        }
                    }
                    var_17 *= (~var_2);
                }
            }
        }
    }
    var_18 -= (((((min(-1, 1)))) ? 1 : var_8));
    #pragma endscop
}
