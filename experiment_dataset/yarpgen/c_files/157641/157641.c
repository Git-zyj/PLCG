/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (min((max(var_18, (min(var_12, var_14)))), var_18))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_10 [i_2] = (max(((-(arr_8 [i_0 + 2] [i_2] [i_2] [i_0 + 2]))), (arr_8 [i_0 - 1] [i_0] [i_2] [i_0 + 2])));
                    var_20 -= (max((arr_9 [i_0] [i_0 - 2] [i_0] [i_0]), -24));
                    var_21 -= (((max(((max((arr_9 [i_0 - 2] [i_1] [i_1] [i_0]), (arr_6 [i_0 - 1] [i_0] [i_0] [i_0])))), (arr_4 [i_0] [i_0 - 2] [i_0 + 1]))) >> (((max(((min((arr_8 [i_0] [i_0] [i_0] [i_0 - 2]), (arr_4 [i_0] [i_2] [i_2])))), (arr_5 [i_1]))) - 795573105))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_18 [i_2] [i_2] [i_4] = (arr_17 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3 + 2]);
                                arr_19 [i_2] = (max(((min((arr_7 [i_0 + 1] [i_0 - 1] [i_0 - 1]), (arr_7 [i_0 + 2] [i_0 + 1] [i_0 - 2])))), (max((min((arr_14 [i_2] [i_3] [i_2] [i_1] [i_0] [i_2]), (arr_9 [i_3] [i_1] [i_2] [i_2]))), (min((arr_1 [i_0] [i_0 + 2]), (arr_13 [i_1])))))));
                                var_22 = (i_2 % 2 == 0) ? ((((arr_8 [i_0] [i_1] [i_2] [i_3]) << (((arr_14 [i_0] [2] [i_2] [i_2] [i_3] [i_2]) - 7827239661382691005))))) : ((((arr_8 [i_0] [i_1] [i_2] [i_3]) << (((((arr_14 [i_0] [2] [i_2] [i_2] [i_3] [i_2]) - 7827239661382691005)) - 8837110329388960647)))));
                            }
                        }
                    }
                    arr_20 [i_2] [1] [i_2] = (min((((~(arr_2 [i_1] [i_2])))), (((arr_13 [i_0 - 1]) & (arr_14 [i_0] [i_0 - 2] [i_0] [i_1] [7] [i_2])))));
                }
            }
        }
    }
    #pragma endscop
}
