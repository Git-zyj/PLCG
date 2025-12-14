/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_15 = ((min(19, (((0 ? 2 : 1))))));
                var_16 = (((~(arr_3 [i_0]))));
                var_17 = ((((min((var_8 * var_8), ((var_9 ? (arr_1 [9]) : (arr_1 [i_0])))))) ? ((((((arr_1 [i_1]) ? var_7 : (arr_3 [16])))) ? (var_13 || 1272577509) : (!255))) : (arr_3 [i_1])));
                arr_4 [i_0] [i_1] &= ((((min(5717092785089016588, 58375))) ? (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [15] [i_0]))) : var_14));
            }
        }
    }
    var_18 = (min((max(var_5, 38500)), ((max(var_3, var_10)))));
    var_19 += var_0;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            {
                var_20 = ((!((((arr_1 [3]) / -97)))));
                var_21 = (min((arr_2 [i_3 - 1]), (-15615 / 15618)));
                arr_11 [i_3] [4] = (min(-15615, 38509));
            }
        }
    }
    #pragma endscop
}
