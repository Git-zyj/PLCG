/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_1] = var_11;

                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    var_14 = (min(var_14, (arr_5 [3])));
                    arr_9 [i_0] [i_0] [i_0] = -1;
                    var_15 = (max(((max((arr_4 [i_0]), (arr_7 [i_2 - 1] [i_2] [i_1 + 2] [i_1 + 1])))), (arr_1 [i_1 - 3] [i_2 + 1])));
                }
                arr_10 [i_0] [i_1] = ((((min(var_12, (arr_0 [i_1 + 1])))) ? (((arr_1 [i_0] [i_1]) ^ var_4)) : ((((arr_8 [i_0] [i_0] [i_1 + 2] [i_1 - 2]) * 3)))));
            }
        }
    }
    var_16 |= 126;
    var_17 = (min(var_17, (((var_12 ? 2147483647 : var_2)))));
    #pragma endscop
}
