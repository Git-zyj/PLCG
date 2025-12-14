/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_20 = ((+((min((arr_3 [i_2 + 4]), (arr_2 [i_2 + 1] [i_1 + 1]))))));
                        arr_11 [i_0] [i_0] [i_1] [i_2 + 2] [i_2 + 3] [i_3] &= (arr_10 [i_0] [i_1 + 1] [i_2 + 2] [i_3]);
                        var_21 = ((-(arr_2 [i_2 - 1] [i_1 + 1])));
                        arr_12 [i_0] = var_9;
                    }
                    arr_13 [i_0] = max((((-(arr_8 [i_1 - 1] [i_1 - 1])))), (((arr_8 [i_0] [i_1 - 2]) ? var_7 : (((~(arr_3 [i_1 + 1])))))));
                    var_22 = var_14;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {
                    arr_24 [i_4] [i_4] [i_4] [i_6] = (max((!var_7), ((var_17 | (((((arr_10 [i_4] [i_4] [i_5] [i_6]) == var_1))))))));
                    var_23 = ((((((var_0 < (arr_4 [i_6] [i_5]))))) > ((+(max((arr_17 [i_5]), var_10))))));
                }
            }
        }
    }
    var_24 = ((((((var_11 ? var_14 : var_8)) & var_16))) ? var_17 : ((-var_12 - (~var_15))));
    #pragma endscop
}
