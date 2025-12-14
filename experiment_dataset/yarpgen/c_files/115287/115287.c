/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((3542142926 || 1) ? var_8 : var_11);

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_18 += var_5;
        var_19 = (max(var_19, (((-(min(12637, 1513261082)))))));
        arr_4 [i_0] = (0 << 1);
        var_20 = arr_3 [5] [i_0];
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_21 = (((((arr_0 [i_1]) > (arr_0 [i_1]))) || (arr_0 [i_1])));
        var_22 &= ((var_3 * (!15)));
        arr_8 [i_1] [i_1] = ((((((arr_0 [i_1]) ? var_11 : (arr_0 [i_1])))) && ((((((arr_1 [i_1]) ? 12623 : var_16))) || (arr_6 [i_1])))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {
        var_23 = (var_16 <= 8948132761314380820);
        var_24 = (arr_11 [i_2]);
        var_25 = (max(var_25, (arr_0 [0])));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
    {
        arr_17 [i_3] = (-2111169913 - 25165824);
        var_26 = (max(((max(((var_12 ? (arr_9 [i_3] [i_3]) : (arr_0 [i_3]))), var_4))), (max(61440, -1513261083))));
    }
    #pragma endscop
}
