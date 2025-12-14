/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_7 [i_0] [10] [4] = (~(max((8158657035409188515 || 1), (((arr_6 [i_0]) / 1)))));
                arr_8 [i_0] = ((3853436496 ? 8158657035409188512 : 220));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_1] [i_0] [i_0] = ((max(0, (var_3 / 3814428959))) / (arr_13 [i_0]));
                            arr_15 [i_2] [i_2] [i_2] = (max((arr_6 [i_3 - 2]), (((-61791 && ((min(var_1, var_3))))))));
                            arr_16 [i_2] [i_1] [i_2] [i_3] |= (arr_13 [i_2]);
                        }
                    }
                }
                arr_17 [i_0] [i_0] [i_0] = (arr_9 [2] [i_1] [i_1]);
                arr_18 [i_0] [i_0] = var_11;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                {
                    arr_26 [8] = (((min(((var_3 ? var_1 : var_9)), var_0)) ^ ((((((17455760173645492650 ? 3744 : (arr_22 [i_5] [i_5] [i_4])))) ? (~var_11) : var_4)))));
                    arr_27 [i_4] [i_4] [i_5] [i_4] = (max((arr_19 [i_4] [i_5]), (((max((arr_4 [i_4]), var_4))))));
                }
            }
        }
    }
    #pragma endscop
}
