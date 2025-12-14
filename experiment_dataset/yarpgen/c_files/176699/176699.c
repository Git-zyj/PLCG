/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_15 = (min(var_15, (!60)));
                    arr_7 [i_1] [i_1] = (48 && -48);
                    arr_8 [i_0 + 1] [i_1] [i_1] = (((((min(0, 58)))) ^ (((arr_1 [i_0 - 1]) ? (arr_6 [7] [7] [8] [i_0 + 1]) : var_9))));
                    var_16 = (min(var_16, ((max(((((((33776997205278720 ? var_5 : var_0))) <= (max((arr_6 [i_0 + 1] [1] [9] [i_2]), var_8))))), (arr_2 [i_2]))))));
                    arr_9 [i_0] [i_1] [i_0] = (arr_5 [i_0] [3] [3]);
                }
            }
        }
    }
    var_17 = (max((min((max(15863894452990910574, 4198907479)), var_8)), (((-2990693778051246629 - ((var_4 ? -2990693778051246629 : var_4)))))));
    var_18 += ((0 ? 4198907493 : (((~2147483647) ? -22769 : -2990693778051246641))));
    #pragma endscop
}
