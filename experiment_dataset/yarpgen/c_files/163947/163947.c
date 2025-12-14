/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_19 = (max((min((((arr_0 [i_0] [i_1]) - var_18)), (arr_1 [i_1 - 1] [i_1 + 1]))), (arr_2 [i_0] [5])));
                arr_7 [9] [i_0] [9] = (arr_6 [i_0] [i_0] [i_1]);
                var_20 *= ((!(((~(arr_6 [i_1 - 2] [i_1 + 3] [i_1 + 3]))))));
                arr_8 [i_0] [7] [i_1] = ((-(~-32755)));
            }
        }
    }
    var_21 = (!var_3);
    #pragma endscop
}
