/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_10 [i_0 - 1] [i_0 - 1] [i_0] = var_8;
                    arr_11 [i_0] = 57499;
                }
            }
        }
    }

    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        var_13 = var_0;
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 15;i_5 += 1)
            {
                {
                    arr_19 [i_5] [i_4 + 1] [i_5] = ((+(((arr_6 [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_5]) ? (arr_6 [i_3] [i_3 + 1] [i_3] [i_5]) : (arr_6 [7] [i_3 - 1] [i_4] [i_5])))));
                    arr_20 [i_5] [i_5] = ((((((arr_8 [i_3] [i_5] [i_4] [i_3]) ? 14 : 57481))) ? ((((min(3762, 12855311811932364361))) ? (((32271 ? (arr_18 [i_5] [3] [i_5]) : var_9))) : var_11)) : (((((var_11 ? var_9 : 65024))) ? ((2603274542 >> (var_11 - 834385061))) : var_1))));
                    var_14 = var_8;
                }
            }
        }
        arr_21 [i_3 - 1] [i_3 - 1] = (((max(8160, ((17898 ? var_10 : var_3)))) < ((((((arr_15 [10] [i_3] [i_3]) == var_6)) ? (((2147483647 ? 95 : var_6))) : (((arr_2 [i_3 + 1] [i_3]) ? var_5 : var_4)))))));
    }
    var_15 = ((((~(~var_4)))) ? (((var_10 ? (2973011759 < var_7) : var_8))) : ((0 ? (max(1218264651, var_7)) : var_9)));
    #pragma endscop
}
