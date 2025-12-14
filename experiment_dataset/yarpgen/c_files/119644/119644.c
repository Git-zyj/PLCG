/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 12197;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_0 - 1] [i_1] [i_2] = ((!((!(arr_6 [i_0] [i_2] [i_0] [i_0 - 3])))));
                    arr_8 [i_0 + 1] [i_0 + 1] [i_2] [5] = var_2;
                    var_13 = (min(var_13, ((((((~(arr_3 [i_0])) * (var_11 < var_7))))))));
                    var_14 = ((!((!(arr_5 [i_2] [i_2])))));
                }
            }
        }
    }
    var_15 = (min(var_15, var_5));
    #pragma endscop
}
