/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1 + 1] [i_0] = (arr_2 [i_0] [i_0] [i_0]);
                    var_18 = ((((((arr_5 [i_1 + 2] [i_1 - 1]) % 162))) ? (-2305843009213693952 | -94) : (min((var_12 % var_2), (62 + 274877906943)))));
                    var_19 = (max(1, (arr_4 [i_0])));
                }
            }
        }
    }
    var_20 = (99 ? 1650164961 : 256252700);
    var_21 = ((~(((var_1 | 59) ? var_2 : (var_12 <= var_5)))));
    var_22 = 17937;
    #pragma endscop
}
