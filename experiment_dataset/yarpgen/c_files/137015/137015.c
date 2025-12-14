/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_6, var_9));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = (((min(var_12, -48))) > ((-(arr_2 [1] [i_1] [1]))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    var_16 = (min(var_16, ((!(4507534895680894696 + var_11)))));
                    var_17 += (2123240526 > 63);
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 4; i_4 < 9;i_4 += 1)
                    {
                        {
                            var_18 = (arr_7 [i_1] [1] [i_3] [1]);
                            arr_12 [i_0] [i_3] [i_1] |= (((((arr_3 [i_4]) <= var_5))) << (!-48));
                            var_19 = (max(1, 13939209178028656923));
                            var_20 = 13939209178028656917;
                        }
                    }
                }
                arr_13 [i_0] = var_10;
            }
        }
    }
    var_21 = (567453553048682496 <= 224);
    var_22 = ((((max((max(-2123240538, var_4)), (~var_2)))) < (((255 | 13939209178028656919) | -1))));
    #pragma endscop
}
