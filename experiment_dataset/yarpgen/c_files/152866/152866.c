/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_17 = ((((arr_0 [i_1] [i_0]) % (arr_0 [i_1] [i_1]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_18 = (max((((136885986 ? (arr_3 [i_1]) : (((arr_3 [i_2]) ? (arr_3 [1]) : (arr_10 [i_0] [i_0] [i_2] [i_3])))))), ((34694 ? (arr_5 [i_3] [i_2]) : (min((arr_3 [i_1]), (arr_9 [i_3] [i_1])))))));
                            arr_12 [i_1] [i_1] = var_12;
                            var_19 = var_2;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_22 [0] [i_1] [i_4] [i_5] [i_6 - 1] [0] [i_6 + 1] |= 3;
                                var_20 = arr_16 [i_0];
                            }
                        }
                    }
                }
                var_21 *= (max(var_5, 4294967289));
                var_22 *= ((8879613973235869939 - (!456678502915861702)));
            }
        }
    }
    var_23 = (min(var_5, -var_15));
    #pragma endscop
}
