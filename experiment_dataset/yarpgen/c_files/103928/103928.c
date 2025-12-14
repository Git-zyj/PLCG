/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!var_5);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [9] = (((~65533) ? (arr_2 [i_0] [i_0]) : (min(((232 ? (arr_1 [i_0]) : var_3)), (((1016 ? 100 : (arr_4 [15] [15]))))))));
                arr_6 [i_1] &= (min((((arr_4 [10] [i_0 + 3]) << (6991795148118603019 - 6991795148118603007))), (arr_4 [i_0] [i_0 + 3])));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_18 = (((-(arr_7 [i_0] [i_1] [i_2 - 1] [i_3 + 2]))) != (((var_5 ? (((arr_10 [i_2] [24] [i_2] [i_0]) & (arr_9 [i_0] [i_0 + 2] [i_0] [i_0 + 2]))) : (((arr_2 [i_3] [i_0]) ? 2 : (arr_4 [i_3] [i_1])))))));
                                arr_15 [i_0] [i_0] [i_2] = (((arr_2 [i_2 - 2] [i_0]) ? (min(160299961680945103, (arr_2 [i_2 - 2] [i_0]))) : ((0 ? -1 : 18286444112028606531))));
                                var_19 = -6991795148118603022;
                                arr_16 [i_0] [i_0] [i_0] [i_0] = (((18286444112028606497 ? ((max((arr_9 [i_0] [i_1] [i_2 - 1] [i_3]), (arr_13 [10] [16] [i_2 - 2] [i_2] [i_2] [i_0])))) : ((min(-1025, 4))))) & (((77515293 >= (~105)))));
                            }
                        }
                    }
                }
                var_20 = ((-(((-106 / -2774777420954932535) ? (arr_7 [i_0 + 1] [i_0 + 3] [i_0 + 3] [i_1]) : ((var_12 ? (arr_0 [i_0] [i_1]) : (arr_9 [i_0] [i_0] [i_0] [i_0])))))));
            }
        }
    }
    #pragma endscop
}
