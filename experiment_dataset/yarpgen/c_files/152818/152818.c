/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = (min(var_13, ((-(min((arr_3 [i_1]), (!-6987713496257365820)))))));
                var_14 = (((((-(((arr_0 [i_0]) / var_11))))) && (-82 ^ 9223372036854775807)));
                var_15 = (min(var_15, (~-9223372036854775807)));
            }
        }
    }
    var_16 = ((((((max(var_0, var_9))) || (!9223372036854775807))) ? -4090193192238210980 : ((min(-17592186044416, var_8)))));
    var_17 = max(0, -7141356147082384078);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            {
                var_18 = ((((1465598752268229630 ? (min(8901906092669496993, var_8)) : (9223372036854775806 & -1))) == ((((!(arr_9 [i_3 + 1] [i_3])))))));
                arr_11 [i_2] = ((-6898207590088268685 ? ((((-7310217877517461067 && (arr_5 [i_3 + 1]))))) : (max((-9223372036854775806 / -4090193192238210980), ((((arr_8 [i_3]) <= var_10)))))));
                var_19 = max((max((arr_9 [i_3 + 2] [i_3 + 1]), -4090193192238210980)), (max(((-(arr_10 [i_2] [i_3]))), (arr_7 [i_3 + 1] [i_3 + 1]))));
                var_20 = (((((((((arr_7 [i_2] [i_3]) / (arr_6 [i_2])))) ? (363233924 > 9223372036854775807) : (((arr_4 [i_2]) ? (arr_4 [i_2]) : (arr_7 [i_2] [i_2])))))) ? (min((~-6375969411059763777), ((max((arr_4 [i_3 - 1]), 105))))) : -5299883102592409469));
            }
        }
    }
    #pragma endscop
}
