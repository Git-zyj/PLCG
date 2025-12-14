/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 2148100278;
    var_17 &= var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (((arr_0 [i_0] [i_0]) ? ((((-397208929 + 2147483647) >> (((arr_0 [i_0] [i_0]) - 42977))))) : 1588164168));
        var_18 &= var_15;
        arr_4 [i_0] = ((~(arr_2 [i_0])));
        var_19 |= 3352893292;
        var_20 = (arr_2 [i_0]);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((((1588164168 ? 14522150401019904120 : (arr_6 [i_1])))) ? 70368744175616 : (min(var_14, (arr_0 [i_1] [8]))));
        var_21 = (min((arr_5 [i_1]), 125));
        var_22 = (max(1111693803, 4554));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_23 = (arr_2 [7]);
        var_24 = -var_9;
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_4 = 2; i_4 < 15;i_4 += 1)
        {
            arr_15 [11] = 0;
            arr_16 [i_4] [i_3] = ((var_9 ? (arr_12 [i_4 - 1] [i_4]) : 246));
            var_25 -= ((14522150401019904120 ? 2481994732 : var_2));
        }
        arr_17 [i_3] = (max(var_13, var_1));
    }
    #pragma endscop
}
