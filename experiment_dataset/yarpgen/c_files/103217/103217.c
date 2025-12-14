/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_11 = -2081243988234616781;
        arr_4 [i_0] [i_0] = (+(min((arr_1 [i_0]), (arr_1 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_12 -= ((((max((arr_2 [i_1]), -2081243988234616793))) ? (max(7, (max((arr_0 [4]), (arr_2 [i_1]))))) : 0));
        var_13 = ((-82 && (arr_6 [i_1])));
    }

    for (int i_2 = 1; i_2 < 24;i_2 += 1)
    {
        var_14 = (min(var_14, ((((((2081243988234616781 ? (1 >= 29362) : ((var_8 ? var_10 : 0))))) ? 9007199254738944 : (((3195056708 ? -2 : 3195056708))))))));
        var_15 = (min(var_15, ((min(438087633, 8589934591)))));

        for (int i_3 = 2; i_3 < 21;i_3 += 1)
        {
            arr_14 [i_2] [i_2] [i_2] = ((((min(16383, ((var_0 ? 2010951939 : 1))))) ? (((((3458764513820540928 ? 2081243988234616775 : (arr_10 [i_2])))) ? ((3195056734 ? -8832894743361237839 : -9007199254738949)) : (min(256, -2081243988234616796)))) : (((((9358105830058759756 ? 214 : (arr_11 [i_2] [i_2]))))))));
            var_16 = (min(var_16, (((-(((5860487752773811911 <= (arr_11 [i_2 + 1] [8])))))))));
        }
        arr_15 [i_2] = (((~(min((arr_13 [i_2] [i_2 + 1]), 9358105830058759756)))));
    }
    #pragma endscop
}
