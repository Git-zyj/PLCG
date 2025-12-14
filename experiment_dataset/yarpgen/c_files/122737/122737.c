/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    var_11 &= ((max(-100, 3343814746)));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [i_3] [i_4] = ((min(1961, 78)));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = (min(var_8, (max(1020106291579842746, ((((arr_11 [i_0] [i_0] [i_2] [i_3]) + 0)))))));
                            }
                        }
                    }
                    arr_16 [i_0] [i_0] [i_0] = (((((arr_11 [i_0] [i_0] [i_0] [i_0]) ? (((arr_10 [i_0] [i_1] [i_2] [i_0] [i_1]) - var_1)) : var_3)) - (arr_9 [i_0] [i_0] [i_0])));
                }
            }
        }
    }
    var_12 = (max(((var_5 ? var_2 : ((min(226, 28204))))), var_4));

    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        var_13 = (~var_3);
        arr_20 [i_5] = (max((((arr_6 [i_5]) ? (((var_5 && (arr_3 [i_5] [i_5])))) : var_7)), (~var_4)));
        arr_21 [i_5] [i_5] = var_5;
        arr_22 [i_5] = (((arr_1 [i_5]) | (((15093 != (arr_1 [i_5]))))));
        var_14 = (~30);
    }
    #pragma endscop
}
