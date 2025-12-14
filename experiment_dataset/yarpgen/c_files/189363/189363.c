/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -var_10;
    var_18 &= 5256158408819075592;
    var_19 = (min(var_19, var_7));

    for (int i_0 = 2; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_20 = (((!(arr_0 [i_0 + 1]))));
        arr_2 [i_0] [i_0] = (max(((((13190585664890476023 ? var_13 : var_12)) >> (4240779502093741469 - 4240779502093741444))), -0));
        arr_3 [i_0] = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_21 = ((~(((((var_9 ? 2245123183082428634 : 1)) > var_5)))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {
                        arr_16 [i_1] [i_1] [i_1] [i_2] = (((max((min(1, var_5), 0)))));
                        var_22 -= (arr_13 [i_1] [i_1] [i_3] [i_4] [i_1]);
                        arr_17 [i_1] [i_2] [i_1] [i_1] |= ((((~(min(var_3, (arr_14 [i_3] [i_3] [i_3])))))) ? var_2 : (-107 | 17285));
                    }
                }
            }
        }
        arr_18 [i_1] = (max(var_3, var_11));
    }
    var_23 = var_8;
    #pragma endscop
}
