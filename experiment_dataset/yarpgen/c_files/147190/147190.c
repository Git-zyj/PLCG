/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_17 &= (min((max((max((arr_2 [i_0]), var_14)), 75)), ((max(64, 51)))));
        arr_3 [i_0] = (((261115694 ? 191 : 192)));
        var_18 ^= ((~((((arr_0 [i_0]) > var_12)))));
        arr_4 [i_0] [i_0] = (arr_1 [i_0]);
        var_19 = 4033851602;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_20 = ((arr_9 [i_1] [i_1] [i_1]) ? 1 : var_7);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        arr_17 [i_1] = (max(2047, (max((var_9 && var_0), (arr_13 [18])))));
                        var_21 -= var_4;
                        var_22 = max((240 == -14055), (max((arr_12 [i_1] [i_1] [i_3] [i_4]), (arr_15 [i_1] [i_1] [i_2] [i_3] [i_4]))));
                    }
                }
            }
            var_23 = (-14039 && 14039);
            var_24 = var_7;
        }
        arr_18 [i_1] [1] = (1 == 14039);
        var_25 = (arr_10 [i_1] [i_1]);
        var_26 = var_16;
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                {
                    var_27 += ((12372914847108033037 ? -1114367626 : 536870784));
                    arr_27 [i_7] [i_6] [i_6] [i_5] = -4033851613;
                    var_28 = (min(var_28, ((min((arr_21 [i_6] [2]), ((~(min(var_14, -349364944)))))))));
                }
            }
        }
    }
    var_29 = (min(var_29, var_7));
    #pragma endscop
}
