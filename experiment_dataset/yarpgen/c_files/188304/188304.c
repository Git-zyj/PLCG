/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_16 = (arr_9 [i_0 - 2] [i_0 - 2] [10] [i_3]);
                                arr_15 [i_0] [i_1] [i_3] [i_3] [i_4] [i_1 + 3] = ((+(((arr_4 [i_2 + 1] [i_2 + 1]) ? 6663564912154356252 : var_1))));
                                arr_16 [i_0] [i_1] [2] [i_3] [i_4] = 20193;
                            }
                        }
                    }
                    var_17 = (((arr_5 [i_2] [i_2 - 3] [i_1 - 1]) ? ((((arr_5 [i_2] [i_2 + 2] [i_1 + 3]) ? 32 : var_0))) : (arr_1 [i_2 + 2])));
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_18 = (min(((-((0 ? var_13 : var_14)))), var_2));
                                arr_22 [i_5] [6] [i_2 - 1] [i_5] [i_6] [i_5 + 1] = var_10;
                                var_19 = ((18446744073709551615 || ((min(((634047563 ? (arr_7 [i_0 + 3]) : (arr_3 [i_0]))), var_7)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (max(var_20, ((((((var_7 - 9223372036854775807) ? var_14 : (min(var_0, var_0)))) >> (min((!4257527292892167510), (min(9, var_14)))))))));
    var_21 = ((~(((var_10 ? 157008663892934605 : var_1)))));
    #pragma endscop
}
