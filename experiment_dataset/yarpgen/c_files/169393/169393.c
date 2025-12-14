/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_10 [6] [11] [10] [10] = (((((arr_4 [i_0 - 3]) ? (arr_4 [i_0 - 3]) : (arr_4 [i_0 + 1]))) > ((13978022263978250358 ? 65514 : (arr_4 [i_0 + 1])))));
                    var_19 = (((((arr_1 [i_1]) ? (arr_5 [i_0 - 3] [i_1] [7]) : (arr_1 [i_0 + 2])))) ? (arr_1 [i_2]) : (arr_5 [i_0] [i_0 + 1] [5]));
                }
            }
        }
    }
    #pragma endscop
}
