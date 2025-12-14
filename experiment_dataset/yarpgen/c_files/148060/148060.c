/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -61;
    var_14 = 234;
    var_15 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (min((((arr_2 [i_0 - 1] [i_0 + 1]) * (arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1]))), ((((((~(arr_1 [i_0])))) ? (arr_2 [i_0 - 3] [i_0 - 2]) : var_6)))));
                arr_7 [7] [i_0 - 3] [i_1] = (max(47, (arr_1 [i_0])));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    arr_11 [i_0] [i_0] [i_0] = ((~(arr_9 [i_2] [16] [16] [i_0])));
                    var_16 = (min(var_16, 0));
                }
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    arr_15 [i_3] = (var_9 < var_4);
                    var_17 = (max(var_17, (~218990052945573561)));
                }
            }
        }
    }
    #pragma endscop
}
