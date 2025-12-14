/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_2 [7] = -1128260879;
        arr_3 [7] [7] = ((((var_6 >= ((((arr_1 [i_0]) >= 1)))))) >> var_8);
    }
    for (int i_1 = 4; i_1 < 17;i_1 += 1)
    {
        var_16 = (min(var_16, (((((((((arr_6 [i_1] [17]) | var_10))) ? (arr_4 [16] [16]) : 32767))) ? ((((var_11 ? (arr_5 [i_1]) : var_7)))) : (((((arr_6 [i_1 - 4] [i_1]) ? -18189 : var_14))))))));
        arr_7 [i_1] = (arr_6 [i_1] [i_1]);
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {
        var_17 = ((-(arr_9 [i_2])));
        arr_10 [i_2] [i_2] = (((((~((~(arr_9 [17])))))) | (((arr_8 [i_2]) & (arr_9 [i_2])))));
        var_18 = 2630147073;
        arr_11 [i_2] [i_2] = (((!(arr_8 [i_2]))));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
    {
        arr_15 [i_3] [i_3] = (((((((~(arr_14 [i_3] [i_3])))) ? (arr_8 [i_3]) : (((arr_14 [i_3] [i_3]) & (arr_8 [i_3]))))) > ((4587923029605050861 ? (var_1 & var_11) : ((((arr_13 [i_3] [i_3]) ? (arr_13 [i_3] [i_3]) : 99)))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    arr_21 [i_3] [i_3] [i_3] [i_3] = ((((1664820238 ? var_3 : var_6)) != var_12));
                    arr_22 [i_3] [i_3] [i_3] = 1128260878;
                }
            }
        }
    }
    var_19 = var_0;
    var_20 = (~var_5);
    #pragma endscop
}
