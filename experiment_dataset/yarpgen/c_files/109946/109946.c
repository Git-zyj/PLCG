/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((((!(arr_0 [i_1 - 1] [0]))) ? ((~(arr_4 [i_1 - 2]))) : ((41 ? (arr_0 [i_1 - 1] [i_1]) : var_0))));
                arr_7 [i_0] = -20;
            }
        }
    }
    var_10 = (((!var_0) ? var_4 : (19 * -98)));

    /* vectorizable */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_11 -= 32767;
        arr_11 [i_2] [i_2] = ((~(!32767)));
        var_12 = -19;
        arr_12 [i_2] = ((((-18 ? var_6 : (arr_9 [i_2]))) - ((var_1 ? (arr_9 [i_2]) : var_8))));
    }
    for (int i_3 = 1; i_3 < 17;i_3 += 1)
    {
        var_13 = (max(var_13, (min((((!(arr_15 [i_3 - 1])))), (min(27259, (arr_15 [i_3 + 2])))))));
        var_14 |= ((-(--52)));
        arr_16 [i_3] [i_3] = ((((min(var_6, (arr_13 [i_3])))) - (arr_13 [i_3])));
        arr_17 [i_3] = ((((-((min((arr_14 [i_3]), (arr_15 [9])))))) == ((min((arr_14 [i_3 + 1]), (arr_15 [i_3 + 1]))))));
    }
    var_15 |= var_4;
    #pragma endscop
}
