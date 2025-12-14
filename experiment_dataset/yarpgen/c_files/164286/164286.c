/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_6));
    var_13 = (((((-(var_7 != var_10)))) ? var_7 : ((((var_7 + var_0) > ((2251799809490944 ? var_3 : 38576)))))));
    var_14 = ((((((((2305843009213693951 ? 12271033491763166018 : 26959))) ? ((var_0 ? var_1 : var_8)) : (~var_8)))) ? ((((((var_11 ? var_8 : var_7))) ? var_6 : var_2))) : (((var_5 | var_9) ? (((var_6 ? var_11 : var_3))) : (min(var_7, var_1))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 += (max(var_10, (+-3154)));
        arr_4 [i_0] = ((min(var_2, ((var_0 ? var_5 : (arr_0 [4]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_2] [i_0] = ((var_1 ? (((-((38574 ? var_0 : var_2))))) : (((((var_8 ? var_5 : var_11))) ? (((var_1 ? var_2 : (arr_9 [i_2] [i_2])))) : (max(0, var_10))))));
                    var_16 = ((((28287 ? 1 : 18446744073709551615))) ? ((((((arr_2 [i_2]) ? (arr_8 [i_1] [i_2] [i_1] [i_1]) : (arr_5 [i_0] [i_1] [i_2])))) ? (arr_0 [i_2]) : (((arr_5 [i_0] [i_1] [i_2]) / (arr_1 [i_2] [i_2]))))) : ((57635 - ((var_8 ? var_1 : var_0)))));
                    var_17 = -6;
                    var_18 |= (!(~127));
                }
            }
        }
        var_19 = (((((5067 ? (arr_3 [i_0]) : (arr_3 [i_0])))) ? (((arr_3 [i_0]) ? (arr_3 [i_0]) : var_2)) : ((10 ? var_5 : 0))));
        var_20 = ((((var_0 ^ ((max((arr_0 [i_0]), var_6)))))) ? ((((((arr_8 [i_0] [10] [i_0] [i_0]) ? (arr_7 [i_0] [i_0]) : var_7)) < var_11))) : var_0);
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_14 [i_3] = (max(((min(((((arr_9 [i_3] [i_3]) && var_10))), (min(var_2, var_1))))), (((~var_6) ? (((arr_10 [i_3] [i_3] [i_3]) ? (arr_7 [i_3] [i_3]) : var_9)) : (min(var_9, (arr_8 [3] [i_3] [i_3] [i_3])))))));
        arr_15 [i_3] = (((((((arr_8 [i_3] [i_3] [i_3] [i_3]) ? var_2 : (arr_3 [i_3])))) && (((var_3 ? (arr_8 [i_3] [i_3] [i_3] [i_3]) : var_8))))) ? ((min(((var_5 ? -443803757 : var_6)), (88 >= var_4)))) : var_9);
    }
    #pragma endscop
}
