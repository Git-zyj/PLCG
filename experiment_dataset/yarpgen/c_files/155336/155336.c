/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_16 ? var_9 : (((var_8 ? (~2133388831) : -var_14)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [8] = var_1;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_1] = 90;
                        arr_12 [i_0] [i_0] [12] [i_1] [i_1] [i_3] = var_12;
                    }
                }
            }
            var_19 = (((arr_0 [i_0] [i_1]) == var_1));
            arr_13 [i_0] [i_1] = (~var_8);
        }
        arr_14 [i_0] = ((((((arr_0 [i_0] [12]) ? 8302 : -8277))) ? 6740 : (arr_2 [i_0])));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                {
                    var_20 *= var_7;
                    var_21 = (((!12470220590010968481) ? 180 : (((!(arr_8 [i_0]))))));
                }
            }
        }
    }
    var_22 &= var_9;
    #pragma endscop
}
