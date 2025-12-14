/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        {

                            for (int i_4 = 2; i_4 < 10;i_4 += 1)
                            {
                                var_16 = (max(var_16, ((~(((arr_8 [i_3 - 1]) ^ (arr_8 [i_3 - 2])))))));
                                var_17 = (!(arr_11 [i_2] [i_3 - 2] [i_4 + 4] [i_4 - 1]));
                                arr_14 [i_2] [i_2] = (arr_3 [i_3 - 2] [i_0]);
                            }
                            for (int i_5 = 2; i_5 < 12;i_5 += 1)
                            {
                                var_18 = 1648447654;
                                arr_18 [i_2] [i_2] [i_2] = (((arr_10 [i_3 + 1]) - (arr_10 [i_3 - 2])));
                                arr_19 [i_2] [i_3 - 1] [i_2] [i_2] [i_2] = (((!(-9223372036854775807 - 1))));
                            }
                            var_19 = ((arr_13 [i_3] [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_2]) * (arr_9 [i_3]));
                        }
                    }
                }
                arr_20 [i_1] [i_0] = (arr_17 [i_1] [i_0]);
            }
        }
    }
    var_20 *= -var_6;
    var_21 = var_10;
    var_22 *= var_6;
    #pragma endscop
}
