/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= var_5;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = (min(((((max((arr_1 [i_0]), var_0))) ? (min((arr_1 [i_0]), (arr_0 [i_0] [i_0]))) : var_6)), (min((arr_1 [0]), 2039126329))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    var_11 &= ((((min((((arr_6 [i_1] [i_2]) ? (arr_2 [i_2] [i_1]) : (arr_7 [i_0]))), var_3))) ? (!var_4) : (((arr_4 [i_0]) ? 2143846992 : -var_3))));
                    arr_9 [9] [i_2] [i_1] [i_0] = (max(((min((arr_8 [i_2] [i_2 + 3] [i_2 + 3] [i_2 + 1]), (arr_8 [i_2 + 1] [i_2 - 1] [i_2 + 2] [i_2])))), ((2039126329 ? 32401 : 123))));
                }
            }
        }
    }
    #pragma endscop
}
