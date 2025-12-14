/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= (3333445540 * 0);

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_8 [24] [i_1] = (((~14209) != 255));
                    var_11 = ((!(((var_0 ? 14209 : (max(var_5, var_4)))))));
                    var_12 = (max(var_12, ((-(((var_7 == (((!(arr_7 [i_0] [i_2] [10])))))))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    arr_15 [i_3] [23] = (max(15, ((max((arr_10 [i_3] [i_3]), (arr_14 [i_3] [i_3] [i_3]))))));
                    var_13 = 14209;
                }
            }
        }
        arr_16 [i_0] = (min(var_6, (max((arr_7 [i_0] [i_0] [i_0]), (arr_7 [i_0] [i_0] [i_0])))));
        var_14 -= (!42);
    }
    var_15 = (max(var_15, ((max(var_3, ((~(max(-248479649, 887324925607932978)))))))));
    var_16 = ((!((min((min(var_9, var_2)), (max(var_9, -27971)))))));
    #pragma endscop
}
