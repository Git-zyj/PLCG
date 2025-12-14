/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (~1792);
        var_18 = ((~(arr_1 [i_0])));
        var_19 -= (((arr_1 [1]) ? (((!(arr_1 [2])))) : (((arr_1 [0]) ? (arr_1 [4]) : (arr_1 [6])))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_20 -= -var_10;
        arr_4 [i_1] [i_1] = (arr_3 [i_1]);
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 6;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 7;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 8;i_4 += 1)
                {
                    {
                        arr_12 [i_4] [i_3] [i_3] [0] = (min((arr_5 [i_2 + 4] [i_2 + 3]), 111));
                        arr_13 [i_1] [i_3] = (((((5 ? 10 : 16718))) ? (arr_11 [i_4] [i_3] [i_3] [i_3 - 1] [i_3] [i_3 + 1]) : (((arr_7 [i_2] [i_2] [i_2 + 2]) ? 4 : (arr_11 [9] [i_3] [i_3 - 2] [i_3 - 2] [i_3] [i_3])))));
                    }
                }
            }
        }
    }
    var_21 = (min(var_1, (((((var_9 ? var_12 : var_1))) ? ((var_1 ? 1573419488199971959 : -49)) : ((max(var_1, var_3)))))));
    var_22 = (((((!var_11) && -603877691)) && ((!((max(var_4, 1170083222)))))));
    var_23 += var_0;
    #pragma endscop
}
