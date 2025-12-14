/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_9, (max((var_6 >= var_10), (var_4 & var_4)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_21 = ((((min(26, 230))) == ((max((arr_8 [i_0] [i_1 - 2] [i_2 + 3]), (max((arr_4 [i_0] [i_0] [i_2]), (arr_8 [i_0] [i_0] [i_2]))))))));
                    var_22 = (min(var_22, ((max((min((arr_1 [i_0]), (arr_4 [i_0] [i_1] [i_2]))), (max((min((arr_6 [i_1]), (arr_5 [i_1]))), (arr_6 [i_1]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_3] [i_0] [i_2 + 1] [i_0] [i_0] [i_0] = (max((min(((min((arr_11 [i_0] [12] [i_0] [i_3]), (arr_8 [i_0] [7] [i_2 + 1])))), (min((arr_14 [i_4] [i_0] [i_3] [i_2 + 1] [i_0] [i_0]), (arr_1 [i_1]))))), (((0 > (max(-1, 212)))))));
                                var_23 = min((max(-5127328359686649776, -32767)), ((max((min((arr_0 [i_2]), (arr_13 [i_0] [i_0] [i_1] [i_1] [i_2 - 1] [12] [i_0]))), (((arr_8 [i_2] [i_1] [i_3]) * (arr_13 [4] [4] [i_1] [i_2] [2] [17] [i_0])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
