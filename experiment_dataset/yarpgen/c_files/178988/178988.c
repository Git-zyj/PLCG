/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (-var_1 / -var_5);

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [10] = (arr_2 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1 - 2] [i_0] = (~var_12);
                    arr_9 [i_0] [5] [1] = ((((!(((13688 ? var_3 : 28280)))))));
                    arr_10 [i_2] [i_0] = (var_10 + 16128);
                }
            }
        }
    }
    var_19 = (((var_1 / var_15) ? var_17 : ((13675 ? 4294967295 : var_17))));
    #pragma endscop
}
