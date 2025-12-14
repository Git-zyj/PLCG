/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~var_5);
    var_21 = ((((var_7 ? (var_4 && 3) : (-119 || var_15))) & var_13));
    var_22 = (min(var_22, (((91 ? ((max(-7, 115))) : var_9)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_23 = var_5;
                    var_24 = (max(var_24, ((((arr_0 [i_0]) != var_18)))));
                    var_25 = max(70, (max(88, (arr_0 [i_2]))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_26 = ((((((max(122, var_9))) ? (((!(arr_5 [i_3] [i_3] [i_3] [i_3])))) : (((!(arr_0 [i_3])))))) << var_15));
        var_27 = arr_2 [i_3];
        arr_10 [i_3] = (max((~var_18), (((arr_2 [i_3]) & (arr_5 [14] [i_3] [i_3] [i_3])))));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_28 = (min(var_2, ((((!(arr_12 [i_4] [i_4]))) ? var_14 : 96))));
        arr_13 [10] = ((~(arr_12 [i_4] [i_4])));
    }
    #pragma endscop
}
