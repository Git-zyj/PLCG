/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_11 = 8237874712712553005;
        var_12 = (arr_0 [i_0] [i_0]);
        var_13 = 27796;
    }
    for (int i_1 = 1; i_1 < 24;i_1 += 1)
    {
        var_14 = (max(var_14, -27803));
        var_15 = (((((arr_1 [1] [i_1 - 1]) ? (arr_1 [i_1] [i_1]) : (((!(arr_0 [i_1] [i_1])))))) <= 723281106));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_16 = var_6;
                    arr_10 [i_1] [i_2] [i_2] [i_2] = ((((((~(arr_2 [i_2])))) ? (~723281107) : var_0)));
                    var_17 = (!0);
                    var_18 = -27786;
                    var_19 = (max(var_19, 79));
                }
            }
        }
        arr_11 [i_1] = ((~(min((((var_1 ? 3539485725 : (arr_9 [i_1])))), (((arr_6 [i_1 - 1]) ? (arr_7 [1] [i_1 + 1] [i_1]) : (arr_5 [i_1])))))));
        var_20 *= ((1 > ((-(-723281107 / -9155)))));
    }
    var_21 = (max(var_21, var_5));
    #pragma endscop
}
