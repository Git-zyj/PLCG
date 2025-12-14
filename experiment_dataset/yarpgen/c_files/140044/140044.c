/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= -150;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_12 &= (((arr_8 [i_2] [i_1] [i_1] [15]) ? (((~((max((arr_6 [i_2] [8] [i_0]), (arr_6 [i_0] [i_0] [i_0]))))))) : (max(((((arr_5 [i_1] [i_2]) << var_9))), (min(-5207597754552315896, (arr_5 [i_0] [5])))))));
                    arr_9 [3] [6] [i_0] = (arr_7 [6] [6]);
                }
            }
        }
    }
    var_13 = var_4;
    var_14 = (max((!var_1), var_5));
    #pragma endscop
}
