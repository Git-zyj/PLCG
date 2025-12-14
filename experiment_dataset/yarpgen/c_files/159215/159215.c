/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((!1708183635) - var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = -3;
                arr_5 [i_1] = ((!(((arr_2 [i_0] [i_1] [i_1]) && -4762))));
                arr_6 [i_1] [i_1] = ((-(min(var_9, (((arr_2 [13] [i_0] [i_1]) + -6328134101364533940))))));
                arr_7 [i_0] [12] [i_1] = (((((var_5 != (arr_4 [i_0] [i_1])))) | var_8));
            }
        }
    }
    var_14 = ((((((1708183635 << (((-32766 + 32777) - 11)))))) ? var_8 : (~var_1)));
    #pragma endscop
}
