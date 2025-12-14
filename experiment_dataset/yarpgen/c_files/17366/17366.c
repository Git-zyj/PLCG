/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 6;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_1] = (min(9629, (max(var_13, -9640))));
                    arr_9 [i_1] [i_2] = (max((arr_4 [i_0] [i_0 - 2]), (((var_9 ? ((min(-1934, -1))) : (((var_5 == (arr_5 [i_0])))))))));
                }
            }
        }
    }
    var_14 += ((((((min(var_10, -4737882475797219687))) ? (18446744073709551615 - var_5) : (((var_10 ? var_11 : 9628))))) > ((((!(((var_8 ? var_3 : var_2)))))))));
    #pragma endscop
}
