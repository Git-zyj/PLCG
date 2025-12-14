/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 2147483647;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                var_17 = 4398046511103;
                arr_5 [i_0] [i_0] [i_0] |= (-2147483647 - 1);
                var_18 = (((((arr_3 [i_1]) ? 0 : 162787541)) + (((((133955584 ? (-9223372036854775807 - 1) : (arr_3 [i_1])))) ? (arr_3 [i_1 + 3]) : (((-36 ? -64 : -1451142408)))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [5] [i_3] [i_4] [i_3] = (arr_9 [i_0] [i_1] [i_2] [i_3] [i_0]);
                                var_19 = (18446739675663040513 >> (((!(!179)))));
                            }
                        }
                    }
                }
                arr_13 [i_0] [i_1 - 2] = (((arr_10 [i_1 - 1] [i_1] [i_1 + 2] [i_1] [i_1] [i_1 + 1] [i_1 + 2]) <= 115));
            }
        }
    }
    #pragma endscop
}
