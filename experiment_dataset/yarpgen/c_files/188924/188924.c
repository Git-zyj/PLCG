/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += (((var_12 + 2147483647) >> ((((2741304322275010606 ? -1748 : 0)) + 1768))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_1] = (((0 ? (-1751 * 0) : (arr_2 [i_0] [i_0] [i_1]))));
                    var_21 = (max((((var_7 * (arr_4 [i_1] [i_1])))), var_8));
                }
            }
        }
    }
    var_22 = ((-var_17 | (!203)));
    var_23 = -var_6;
    #pragma endscop
}
