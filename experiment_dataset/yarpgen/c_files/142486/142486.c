/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_2] = (min(((-104 ? (arr_4 [i_0] [9] [7]) : (arr_2 [i_2] [i_1] [i_0 - 1]))), 1));
                    arr_8 [i_0 - 2] [i_0] = -18446744073709551615;
                    var_13 = (min(var_13, ((max((~65533), 9223372036854775807)))));
                }
            }
        }
    }
    var_14 = var_3;
    var_15 = 11;
    #pragma endscop
}
