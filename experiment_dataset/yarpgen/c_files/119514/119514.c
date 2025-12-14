/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_13 = var_4;
                var_14 = (((min((((var_3 ? var_7 : var_5))), ((9663912141830244450 ? 8671424755863596682 : 0))))) ? (1 >> 1) : (((arr_1 [3]) >> ((((~(arr_6 [i_0] [i_0]))) - 50112219)))));
                var_15 = ((((((var_0 >= ((0 ? 18446744073709551599 : 65514)))))) <= (((arr_3 [i_0] [i_0]) ? 36 : var_4))));
            }
        }
    }
    #pragma endscop
}
