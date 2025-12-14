/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (max(((((max((arr_1 [i_0] [i_0]), (arr_0 [i_0])))) ? ((-(arr_1 [i_0] [i_0]))) : 118)), 118));
        var_20 = ((30939 ? (((arr_1 [i_0] [i_0]) ? (min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))) : -1)) : (!139)));
    }
    var_21 = (~var_7);
    var_22 = (max(var_22, (((!(((var_12 ? (max(var_13, 169)) : ((max(1013021020, var_4)))))))))));
    var_23 = var_7;

    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_24 = (arr_2 [i_1]);
        arr_5 [i_1] = ((min((arr_2 [i_1 - 1]), (arr_2 [i_1 + 2]))));
    }
    for (int i_2 = 2; i_2 < 11;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    arr_15 [i_2] [i_2] [i_4] [i_4] |= ((!(arr_11 [i_3 + 1])));
                    var_25 -= (max(((~(arr_14 [i_2 + 3] [i_3] [i_3] [i_4]))), (max((~116), (arr_7 [i_2 + 2])))));
                }
            }
        }
        arr_16 [i_2 - 2] = 118;
        var_26 = (arr_1 [i_2 - 1] [i_2]);
        var_27 = 0;
        arr_17 [i_2] = (3 > 0);
    }
    #pragma endscop
}
