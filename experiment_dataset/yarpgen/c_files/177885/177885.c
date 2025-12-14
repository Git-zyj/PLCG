/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_17 || var_3);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = max((arr_1 [i_0]), (arr_2 [i_0]));
                var_20 ^= var_7;

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_21 = (max(var_21, (min(((((((arr_4 [i_0] [i_0 + 1] [i_0] [i_0 - 1]) || (arr_2 [i_0])))) % (arr_5 [i_0] [10] [i_2]))), ((((arr_1 [i_0 - 1]) && ((max(var_4, var_16))))))))));
                    var_22 = (arr_1 [i_0]);
                    arr_6 [i_0] [i_2] [22] [i_0] = (((((var_15 & (arr_0 [i_0 + 1])))) ? (~4692741920803159497) : (((1749213147 ^ (arr_0 [i_0 - 1]))))));
                    arr_7 [i_2] [i_0] [i_0 + 1] [i_0 + 1] = (min(((-(((arr_4 [i_0 - 1] [2] [i_0 - 1] [i_2]) ? (arr_4 [i_1 + 2] [i_1] [i_1] [i_1]) : var_13)))), (((max((arr_5 [21] [i_2] [i_0 + 1]), var_10))))));
                }
                arr_8 [i_0 - 1] = (((~(arr_1 [i_0 + 1]))));
                arr_9 [i_1] = (arr_1 [1]);
            }
        }
    }
    var_23 = (((-(max(-32755, -1)))));
    #pragma endscop
}
