/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = (59 ^ 29);
                var_11 -= ((-979678849 < (arr_0 [i_0])));
                arr_6 [i_1] [i_0] = (((arr_1 [i_1 - 2] [i_1 + 1]) | var_6));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                var_12 = (max(114300462, -1364355263));

                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    arr_17 [i_2] [i_3] [i_4] [i_4] = (~-1289052010);
                    arr_18 [i_2] [10] [i_2] = (max((((arr_3 [i_2]) ? var_8 : -1)), ((((~(arr_3 [i_4]))) ^ ((4294967295 ? 4294967286 : var_6))))));
                }
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        var_13 = (((((3686 * ((96 ? var_10 : (arr_19 [i_2] [i_2] [i_2] [i_2])))))) && ((min(((max(120, -120))), (arr_22 [i_2] [i_2] [i_2] [i_2]))))));
                        arr_25 [i_2] [i_3] = (var_7 && (((-807973926 ? 249 : (arr_20 [i_6] [i_6] [i_6])))));
                        var_14 += (((((((min(var_1, var_1))) ? (((arr_7 [i_2]) / -1784790133)) : (arr_12 [i_2])))) ? ((-117 ? var_9 : -16)) : 979678848));
                        arr_26 [i_2] = (max((arr_1 [i_5] [i_6]), ((-(arr_16 [i_2] [i_5] [i_2])))));
                    }
                    var_15 = (max(((max((arr_22 [i_2] [i_2] [i_5] [i_5]), (arr_22 [i_2] [i_3] [i_2] [i_3])))), (((arr_22 [i_2] [i_3] [i_2] [i_5]) | var_8))));
                }
                var_16 = (((!var_1) && var_9));
                var_17 += (~var_6);
                var_18 = arr_3 [i_3];
            }
        }
    }

    /* vectorizable */
    for (int i_7 = 4; i_7 < 23;i_7 += 1)
    {
        var_19 = (((arr_28 [i_7 - 4] [i_7 - 2]) << (116 - 94)));
        var_20 = (-(arr_28 [i_7 - 1] [i_7 - 2]));
        var_21 = (((28 < (arr_28 [i_7] [i_7]))) ? var_2 : var_8);
    }
    var_22 = var_6;
    #pragma endscop
}
