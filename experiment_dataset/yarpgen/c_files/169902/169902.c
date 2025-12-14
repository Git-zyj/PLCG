/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 = (-(arr_4 [i_1] [i_1]));
                    arr_8 [i_0] [i_1 - 2] [i_2 + 2] [i_1] = -var_9;
                    arr_9 [i_0] [i_1] [i_1] [i_2] = (arr_6 [i_0] [i_1] [19]);
                    arr_10 [i_1] = 51855;
                }
            }
        }
    }
    var_19 = ((var_12 - (((1046393318 ? -1350376226 : -3318)))));
    #pragma endscop
}
