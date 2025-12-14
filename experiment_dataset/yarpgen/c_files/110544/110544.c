/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_11 = (max((arr_3 [i_1]), (arr_6 [i_0] [i_0 - 1] [i_0 - 1])));
                    var_12 = (max(((((arr_6 [i_0 + 2] [i_0 + 1] [3]) || (arr_5 [i_0 - 2] [i_0 - 2] [i_1])))), (((((arr_1 [i_0]) + 2147483647)) >> (((arr_5 [i_0] [i_0 + 1] [i_2]) + 1582702749838624087))))));
                }
            }
        }
    }
    var_13 = 162;
    #pragma endscop
}
