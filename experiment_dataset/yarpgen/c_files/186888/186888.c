/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_5 ? ((max(var_6, (max(var_4, -62))))) : (((20 + var_3) * var_2))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [7] [i_1] [i_1] = ((+((1514542549 ? (arr_0 [i_1]) : var_1))));
                arr_6 [10] = (min(((var_11 >= (max(var_8, var_5)))), (!var_3)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 16;i_4 += 1)
            {
                {
                    var_13 = (max((((arr_11 [i_4 + 1] [i_4 - 1] [i_3] [i_4 - 1]) | var_7)), (var_5 != var_2)));
                    arr_13 [i_3] [9] [i_3] [i_3] = -62;
                    arr_14 [i_2] [i_2] [i_3] = ((((((var_9 < var_5) ? (!8658) : var_8))) ? (min((arr_9 [13] [i_3]), (((arr_7 [i_2]) ? var_0 : 62)))) : (((-(~62))))));
                }
            }
        }
    }
    #pragma endscop
}
