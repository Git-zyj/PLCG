/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_9 ^ var_2) ? (min(var_0, (min(-111, var_4)))) : var_8);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_0 - 1] [i_0] [i_1 - 1] [i_1 + 1] = (i_0 % 2 == zero) ? ((((((arr_5 [i_0] [i_2 + 4]) % (((min(var_3, (arr_3 [i_0]))))))) | ((min(((var_7 ? 107 : (arr_3 [i_0]))), ((max(var_5, 13184))))))))) : ((((((arr_5 [i_0] [i_2 + 4]) * (((min(var_3, (arr_3 [i_0]))))))) | ((min(((var_7 ? 107 : (arr_3 [i_0]))), ((max(var_5, 13184)))))))));
                    arr_10 [i_0 - 1] [i_2 + 4] [i_2] [i_0] = (((arr_2 [i_0] [i_1]) == var_1));
                    var_11 = (arr_5 [i_0] [i_1 + 1]);
                }
            }
        }
    }
    #pragma endscop
}
