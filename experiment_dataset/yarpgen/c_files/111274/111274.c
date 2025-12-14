/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_1] [i_2] = (max((((~var_6) ? ((((-20486 <= (arr_6 [i_0] [i_0] [i_0]))))) : var_0)), 1));
                    var_10 = (max((max((arr_1 [i_0 - 2] [i_0 - 2]), 65521)), 1));
                    var_11 = ((!((min(((10 ? 1 : var_7)), (((1048572 <= (arr_9 [i_0] [i_1] [i_2])))))))));
                }
            }
        }
    }
    var_12 = ((((max(var_5, var_5)))) ? var_7 : var_7);
    #pragma endscop
}
