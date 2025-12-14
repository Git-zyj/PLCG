/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_13;
    var_21 = var_4;
    var_22 = var_10;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 - 4] [i_0] = (((arr_1 [i_0] [i_0 - 1]) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0] [i_0 - 1])));
        arr_3 [i_0] [i_0] = (arr_1 [i_0 - 4] [i_0 - 4]);
    }
    for (int i_1 = 4; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_23 = var_14;
        var_24 = ((var_12 == (var_3 / var_5)));
    }
    for (int i_2 = 4; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_25 = ((var_11 ? ((((arr_7 [i_2] [i_2]) ? var_0 : 558551906910208))) : (((~(~5775))))));

        /* vectorizable */
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            var_26 = ((arr_11 [i_2] [i_2] [i_2]) & var_2);
            var_27 = ((((((arr_1 [i_2] [i_3 + 1]) ? (arr_0 [i_2] [i_2]) : (arr_7 [i_2] [i_3 + 1])))) ? (6 || var_6) : (arr_0 [i_2] [i_2])));
        }
        var_28 = ((((((arr_1 [i_2 + 3] [i_2 - 3]) ? var_6 : 214))) != ((72 ? 0 : 29))));
    }
    #pragma endscop
}
