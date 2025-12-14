/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] [9] [i_1] = (arr_2 [i_0] [i_1]);
                var_16 = (var_3 + var_3);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {
                arr_10 [i_2 - 2] [i_3] [i_3] = ((~(arr_1 [i_2 - 3])));
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_17 = ((!((max((arr_9 [i_2] [i_3] [i_3]), (arr_17 [i_2 - 1] [i_3] [i_4] [i_5] [i_6]))))));
                                arr_18 [i_3] [i_3] = (max(((((((arr_1 [i_6]) ? 1726425573198442102 : (arr_2 [i_3] [i_6]))) > (((min(var_0, -82))))))), var_6));
                                arr_19 [i_2] [i_3] [i_2] [i_3] [i_3] = ((var_7 ? (min((arr_11 [i_2] [i_2] [11]), (arr_3 [i_6]))) : ((((((arr_1 [i_3]) ? (arr_6 [i_5 + 2] [i_5 + 2]) : -13456))) ? (arr_0 [3]) : (arr_7 [i_3])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
