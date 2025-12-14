/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((((max(var_8, var_3))) ? var_5 : (min(var_7, (arr_0 [i_0])))));
        arr_3 [i_0] [7] = (5525807751367685611 ? -41 : 16333);
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_14 = (((arr_1 [i_1]) ? 5525807751367685611 : var_3));
        arr_6 [i_1] [i_1] = min((max(var_5, var_10)), (max(12920936322341866005, (arr_5 [i_1]))));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] [i_2] = ((!(arr_9 [i_2] [i_2])));
        arr_11 [i_2] = (((max(((((arr_0 [i_2]) / (arr_0 [i_2])))), var_7)) * (((max((arr_8 [i_2] [i_2]), 95))))));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
    {
        var_15 = var_9;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    arr_20 [i_3] [5] = ((-(arr_4 [i_3])));
                    arr_21 [i_5] [i_5] [i_5] [i_5] = (~-1995586983);
                }
            }
        }
    }
    var_16 = var_7;
    #pragma endscop
}
