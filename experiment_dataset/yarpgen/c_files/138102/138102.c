/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_15 [i_3] = ((!((((-(arr_4 [i_3] [i_0] [i_0])))))));
                            var_13 -= (min(((((((arr_10 [i_0] [i_1 + 1] [i_2] [0]) ^ var_1)) * 0))), (((arr_12 [i_0]) ? (arr_7 [i_3]) : (((max((arr_13 [12] [10] [i_2] [i_3]), 0))))))));
                        }
                    }
                }
                var_14 = var_11;
                var_15 = (min(var_15, (((((((var_0 == var_5) - var_2))) && 17919464961308440470)))));
                var_16 = (min(var_16, ((max(1737589363, 10738)))));
            }
        }
    }
    var_17 -= var_8;
    #pragma endscop
}
