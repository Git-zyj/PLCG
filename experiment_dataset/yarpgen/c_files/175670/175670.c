/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_8 + 9223372036854775807);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_1] = (min((((arr_3 [i_2 - 1] [i_1 + 1] [i_0 + 3]) * (arr_7 [i_0 + 2] [i_1 + 2] [i_2 + 1]))), (((!(arr_7 [i_0 - 1] [i_1 + 3] [i_2 + 1]))))));
                    var_21 |= (max((((arr_6 [i_0] [i_1 + 3] [i_2 - 1]) ? (arr_5 [i_1 + 3] [i_0 + 2]) : (arr_3 [i_0] [i_0] [i_0 + 3]))), (((!1039170941) ? (((arr_5 [4] [i_2]) ? var_16 : 3487710906233972534)) : (arr_3 [i_2 - 2] [i_0] [i_0])))));
                }
            }
        }
    }
    #pragma endscop
}
