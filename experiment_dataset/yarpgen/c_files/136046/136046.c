/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [2]);
        arr_4 [i_0] [0] = (arr_1 [i_0 + 1]);
        arr_5 [i_0] = (max(((-188 ? -1886011920 : (arr_0 [i_0]))), (-20 + 21839)));
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            arr_10 [i_1] [15] [i_1 - 1] = (arr_8 [1] [i_1] [i_2]);
            arr_11 [i_1] [13] [i_1] = (arr_6 [i_2 - 2]);
            arr_12 [i_1 + 1] [10] [i_1 - 1] = ((arr_9 [i_2 - 2] [i_2 + 1]) ? (arr_9 [i_1] [i_2 - 2]) : (arr_9 [i_2] [i_2 + 4]));
        }
        /* vectorizable */
        for (int i_3 = 3; i_3 < 14;i_3 += 1)
        {
            arr_17 [i_3] = ((-(((20844 || (arr_8 [i_3] [i_3] [i_1 - 2]))))));
            arr_18 [i_3] [5] = ((!(arr_6 [i_3 - 1])));
        }
        var_11 ^= ((((max((arr_13 [i_1 + 1] [i_1 + 1]), (((!(arr_13 [i_1] [6]))))))) ? ((max(((1 && (arr_15 [i_1] [i_1] [i_1]))), ((!(arr_6 [5])))))) : (9223372036854775807 || -123)));
    }
    var_12 = 0;
    var_13 -= (((((var_6 >> (var_0 - 159)))) <= (3861905384717182904 | 9221)));
    var_14 = ((~((var_9 ? var_6 : (var_5 * var_4)))));
    var_15 = ((((((-32767 - 1) ? (min(378375117, var_0)) : ((max(var_5, var_9)))))) ? (!995462437) : var_8));
    #pragma endscop
}
