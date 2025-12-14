/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_0 - 1] [i_1] [i_1] [i_2] = (((((max((arr_1 [i_0 - 1]), (arr_6 [i_2] [i_0 - 1] [i_2]))))) % (((arr_2 [i_0 - 1] [i_0 + 1] [i_0 - 1]) - ((((!(arr_6 [i_1] [14] [i_1])))))))));
                    var_12 *= (-(arr_7 [i_0 - 1] [i_2]));
                    var_13 = (((arr_3 [5]) + ((min(var_10, 1023)))));
                }
            }
        }
    }
    var_14 &= 0;
    var_15 = var_5;
    var_16 = (min(var_16, ((max(var_6, (((!(var_9 * var_2)))))))));
    #pragma endscop
}
