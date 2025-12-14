/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;
    var_13 = var_0;
    var_14 = (549805924 <= 549805942);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_15 = (min((((-(var_5 - var_4)))), (min(8209360503199984711, 3745161346))));
                    arr_7 [i_0] [i_0] [i_2 - 1] = (max(((min(var_10, 0))), (max(40081, 0))));
                    arr_8 [i_2] [i_0] [i_0] [i_0] = (max(((min((arr_2 [i_0 + 2] [i_0 - 3] [i_1 + 1]), (arr_2 [i_0 - 3] [i_0 - 2] [i_1 + 1])))), 56201));

                    for (int i_3 = 2; i_3 < 12;i_3 += 1) /* same iter space */
                    {
                        arr_12 [i_0] [i_0] [i_2] [3] = ((549805952 ^ ((max(var_11, ((40089 ? 549805952 : 1215202025)))))));
                        arr_13 [i_0] [i_0] [i_1] [i_0] [i_0] = ((~(((4294967287 | 3079765270) ? var_1 : ((78282694 ? var_3 : 16))))));
                        var_16 = (max(((min(-6565954066225261745, 1215202036))), var_9));
                    }
                    for (int i_4 = 2; i_4 < 12;i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_0] [i_0] [i_2] [i_4] [i_2] [15] = ((var_9 || ((max((((arr_1 [i_0] [i_0]) ? var_7 : 3079765256)), (arr_4 [i_0] [i_0] [i_0]))))));
                        var_17 = (min(var_17, (((~((((33824 & 10) < 3079765266))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
