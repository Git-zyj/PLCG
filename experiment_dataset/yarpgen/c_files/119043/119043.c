/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_12 |= ((((var_0 > (arr_4 [i_1] [3])))));
                var_13 = ((((var_11 ? var_0 : (arr_3 [i_0])))) ? (arr_3 [i_0]) : (min((arr_3 [1]), (arr_3 [i_1]))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_9 [i_2] = 2462523829;
        arr_10 [i_2] &= var_5;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        arr_13 [i_3] [i_3] = (((arr_7 [i_3]) ? var_0 : (arr_7 [i_3])));
        arr_14 [i_3] [i_3] = ((6046342127330387870 ? (arr_8 [i_3]) : var_4));
        var_14 -= (((arr_7 [i_3]) ? (var_8 || 3034872749682683647) : (arr_11 [i_3] [i_3])));

        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_15 = (arr_7 [i_3]);
            var_16 = (var_3 ^ var_1);
            arr_17 [i_3] [i_4] [i_4] |= (((~var_2) ? var_2 : (-1603698969 && var_2)));
        }
    }
    #pragma endscop
}
