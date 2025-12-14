/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_19 = -1;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_20 += var_18;
                                var_21 = -977188922936796835;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_22 |= (((((-(min(-262144, 216185471))))) ? ((((min((arr_1 [i_0] [8]), 99))) ? (arr_11 [i_0] [i_0] [i_2] [i_6 - 3] [i_5 - 3]) : (arr_1 [1] [1]))) : ((min((~65535), 262144)))));
                                var_23 = 1;
                                var_24 = ((-216185472 ? (((9223372036854775807 ? var_16 : -605579378))) : ((1895546683 ? 1489100155814613445 : -1))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        var_25 |= max(9223372036854775807, -216185452);
        var_26 = ((var_6 >> (var_9 - 46654)));
    }
    #pragma endscop
}
