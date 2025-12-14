/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -1;
    var_12 -= (((var_7 && var_10) ? 61 : ((~(max(var_4, var_4))))));
    var_13 = (max(var_13, ((((((var_7 ? -8332 : var_1) << (((max(var_9, -28)) + 47)))))))));
    var_14 = ((var_2 ? 1 : var_10));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] = ((!((max(((min(-20, 57))), (max(var_6, -1)))))));
                    var_15 = max((((((255 ? var_7 : (arr_3 [i_1] [i_1])))) ? ((4041294068 ? -1257509217 : (arr_3 [i_1] [i_0]))) : -103)), var_0);
                }
            }
        }
    }
    #pragma endscop
}
