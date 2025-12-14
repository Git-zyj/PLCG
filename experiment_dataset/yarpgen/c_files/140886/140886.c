/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 1722862104;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_7 [22] [i_1] [6] = (max(((min((arr_5 [i_1] [8] [i_0] [i_1]), (arr_2 [18] [1] [i_2])))), (arr_5 [i_1] [i_1] [i_2] [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] [i_1] [16] [i_4] = ((~(arr_0 [i_0] [i_0])));
                                var_12 *= ((var_9 - (max((arr_10 [i_0] [19] [5] [11]), ((var_1 ? (arr_14 [12] [21] [9] [i_3] [10] [i_3]) : (arr_4 [5] [17] [1])))))));
                            }
                        }
                    }
                    var_13 = (~var_8);
                }
            }
        }
    }
    var_14 = (min(var_14, ((((((~-1291753018) | (~var_5)))) | (min(var_8, var_0))))));
    #pragma endscop
}
