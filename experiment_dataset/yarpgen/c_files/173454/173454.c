/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_20 = ((~(((arr_0 [i_0]) ? (arr_1 [i_0]) : 1))));
        arr_2 [i_0] = var_11;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] = (arr_3 [i_0] [i_1] [1]);
                    arr_10 [9] [i_0] [i_2] = ((18 <= var_13) <= (!var_1));
                    var_21 = 3586101173;
                    arr_11 [i_0] = (((((195 ? 708866107 : 536870911))) ? (3586101189 && 708866123) : (!var_12)));
                    arr_12 [i_0] [i_0] = (max((((arr_0 [i_0]) * (arr_3 [i_2] [i_1] [i_0]))), 37));
                }
            }
        }
        var_22 = ((18446744073709551605 ? var_1 : (arr_6 [i_0] [i_0] [i_0])));
        var_23 = (2611481813764509381 / 4294967287);
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
    {
        var_24 = (((min((~676684486), (arr_0 [2])))) ? ((min((~17215), ((4294967280 ? (arr_1 [i_3]) : var_1))))) : (arr_13 [i_3]));
        var_25 = ((!((((arr_3 [i_3] [i_3] [i_3]) * (((arr_6 [i_3] [i_3] [1]) ? (arr_4 [9] [i_3]) : var_9)))))));
        var_26 = ((65529 ? -114 : 17215));
        var_27 = (((((~((max(var_3, var_7)))))) * 594776333));
        arr_15 [i_3] = (arr_1 [i_3]);
    }
    var_28 = ((!((!(((var_13 ? 1190401128 : var_11)))))));
    var_29 = var_13;
    var_30 = (max(var_30, var_10));
    #pragma endscop
}
