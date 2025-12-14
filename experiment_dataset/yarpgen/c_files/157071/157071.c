/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_12 = (max((min(50896, 17)), (!-2978597666)));
                                var_13 = ((2978597673 ? (min((arr_4 [i_1] [i_0]), var_7)) : ((((arr_5 [i_4 - 3] [i_4 - 3]) / var_9)))));
                                var_14 = (arr_5 [i_1 + 2] [i_1 + 2]);
                                arr_15 [i_0] [i_1 - 1] [i_1] [i_3] [i_1 - 1] = (max(234884423, ((4060082876 ? 18151889535168254484 : (arr_5 [i_1 + 1] [i_4 - 2])))));
                                arr_16 [i_0] [i_1 - 1] [i_4] [1] [i_3] &= (arr_1 [i_4 - 3]);
                            }
                        }
                    }
                    var_15 = ((((min((arr_12 [11] [i_1 - 1] [1] [i_1 + 1] [i_0] [i_0]), (arr_12 [i_2] [i_1 - 2] [i_1 + 1] [i_1 + 1] [i_0] [i_0])))) >> ((((min((arr_3 [i_1 - 1]), (arr_3 [i_1 + 1])))) - 59890))));
                    arr_17 [i_0] [i_1] [i_0] [12] = (arr_6 [i_1 - 2] [i_1 + 2] [i_1 - 1]);
                }
            }
        }
    }
    var_16 += (max(((((min(var_10, var_0))) ? 2978597662 : var_2)), (min((min(var_2, var_6)), var_10))));
    #pragma endscop
}
