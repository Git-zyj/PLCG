/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_10 = (((arr_3 [i_3] [1] [i_3]) == (arr_6 [i_0 - 2])));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                        {
                            arr_12 [5] [i_1] [8] [i_3] [i_1] = var_5;
                            arr_13 [i_0 - 2] = (8094053182385651208 >> (8094053182385651187 - 8094053182385651154));
                        }
                        for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                        {
                            var_11 = (arr_4 [i_2 + 1]);
                            arr_18 [i_0] [1] [i_2] [i_3] [i_0] = (((((arr_0 [i_0]) >= ((8094053182385651220 ? 8094053182385651225 : var_4)))) ? var_9 : (((((max(11749354308806811254, (arr_3 [i_1] [1] [i_1])))) ? 1 : var_2)))));
                            arr_19 [i_5] [i_3] [i_2] [i_1] [12] = ((-(1 & 8094053182385651235)));
                        }
                        var_12 = (((arr_4 [i_2 - 1]) ? (arr_0 [i_2 - 1]) : (arr_17 [i_2 + 1] [i_2 - 1] [i_0 - 1] [i_0 - 2] [i_0 - 1])));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 20;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 4; i_9 < 20;i_9 += 1)
                        {
                            {
                                arr_34 [i_0] [1] [i_7 - 1] [i_7 - 1] [i_8] [i_9] = ((-var_0 - ((-(var_1 > -18220)))));
                                var_13 = (((arr_6 [i_8]) || (arr_25 [12] [i_8] [i_6] [16])));
                            }
                        }
                    }
                    var_14 = (((arr_22 [i_0]) % ((2147483633 ? ((((arr_31 [i_6] [i_6] [i_6] [i_6] [i_0]) && 1))) : ((max(18202, (arr_28 [i_0] [i_7]))))))));
                    var_15 = ((max(var_8, (arr_7 [17] [i_6] [i_6] [i_7 + 1]))) % (((min((arr_8 [i_0] [i_6] [i_6] [i_6] [i_7] [i_6]), var_1)))));
                }
            }
        }
    }
    var_16 = (!1047);
    var_17 = (((8094053182385651251 * 1) ? var_1 : -var_5));
    #pragma endscop
}
