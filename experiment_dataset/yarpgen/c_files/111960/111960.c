/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= (~var_10);

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_13 = var_0;

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_14 = max(var_7, (min((!var_5), ((var_5 ? (arr_5 [i_0] [i_0]) : -28607)))));
            var_15 = (((max(((var_5 ? var_0 : 8112338094975038348)), (((var_4 ? -28607 : 28606))))) - (arr_6 [i_0] [9] [i_0])));
        }
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_12 [i_2] = ((var_3 ? var_1 : ((((arr_11 [i_2]) < ((var_11 ? (arr_11 [i_2]) : 4078279291)))))));
        var_16 -= ((~((((((arr_8 [i_2]) - 131071))) ? (~42125) : ((var_11 ? (arr_10 [i_2] [i_2]) : 1))))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_16 [i_3] = ((!(arr_9 [i_3])));
        var_17 = ((arr_14 [i_3]) ? (((arr_10 [i_3] [i_3]) ? var_4 : var_0)) : ((((!(arr_13 [i_3]))))));
    }
    var_18 = ((30652 ? var_7 : ((max(var_8, var_8)))));

    /* vectorizable */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        arr_19 [i_4] [i_4] = (22212 | 158);
        var_19 = ((var_1 < ((var_4 ? var_8 : -1))));
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        arr_23 [i_5] = ((((((arr_15 [i_5]) ? 244 : 11))) > (((((~(arr_11 [i_5])))) ? (!22212) : 1319561407))));
        var_20 = ((((((-2147483647 - 1) ? ((-(arr_13 [i_5]))) : (arr_21 [i_5] [i_5])))) ? ((-var_6 / (((arr_17 [i_5]) ? 18446744073709551615 : var_0)))) : var_5));
    }
    #pragma endscop
}
