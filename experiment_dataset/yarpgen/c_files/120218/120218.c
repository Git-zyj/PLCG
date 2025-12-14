/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [16] = ((-((-(arr_1 [i_0])))));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = ((~(((var_8 ? var_8 : var_9)))));
            var_12 = (((((arr_0 [i_0]) | (arr_0 [i_0])))) ? ((min(var_4, var_8))) : 1);
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_8 [5] [i_0] [i_0] = ((+(min((arr_3 [i_0] [7] [7]), 16))));
            var_13 += (((arr_6 [9] [3]) ? (max(((min(1, (arr_6 [i_0] [i_0])))), var_11)) : (arr_6 [0] [i_2])));
        }
    }
    var_14 = ((var_8 ? var_5 : var_11));
    var_15 = (min(var_15, var_3));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            {
                arr_14 [9] = (min(((min((arr_12 [i_3]), var_7))), (max((~var_10), (~24)))));
                arr_15 [i_3] [i_4] = ((!((max(((max(8, 1487948985))), (arr_11 [i_3]))))));
                arr_16 [8] = (arr_0 [i_4]);
            }
        }
    }
    #pragma endscop
}
