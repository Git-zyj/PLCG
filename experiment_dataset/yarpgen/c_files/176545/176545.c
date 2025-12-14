/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_20 = (min((((arr_1 [1]) ? (((-3921083661549513035 - (arr_0 [i_0 + 1])))) : (max(0, 17179852800)))), (arr_0 [i_0])));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_21 = (min(var_21, ((((((-76136249 || 141) || (arr_3 [i_0] [i_0] [11]))) ? (((arr_1 [i_1]) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 + 1]))) : (min(-var_10, (!var_10))))))));
            var_22 = (min(var_22, (((((max(0, (arr_0 [i_1])))) << (-236972085 - 6081))))));
        }
        for (int i_2 = 3; i_2 < 18;i_2 += 1) /* same iter space */
        {
            arr_9 [i_2] = (arr_3 [i_0] [i_2] [i_0]);
            var_23 = (min((((arr_8 [i_2]) ? (!55051) : (((var_4 > (arr_8 [i_2])))))), 9));
        }
        for (int i_3 = 3; i_3 < 18;i_3 += 1) /* same iter space */
        {
            arr_12 [i_0] [i_0] |= (arr_10 [i_0] [i_0]);
            var_24 = ((+(max((((arr_2 [i_0] [i_3 - 2] [i_0]) ? var_18 : var_11)), (((!(arr_7 [i_0] [i_0] [i_0]))))))));
            var_25 = var_5;
            var_26 = var_10;
        }
        var_27 = (min(var_27, (arr_8 [2])));
    }
    var_28 = var_6;
    var_29 = var_17;
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 12;i_6 += 1)
            {
                {
                    var_30 = 115;
                    arr_22 [i_6] [1] [i_4] = (max((min(0, 0)), (arr_2 [i_6 - 1] [i_6 - 1] [i_6 + 2])));
                    var_31 = (236972077 ? 7202638277309950517 : 141);
                    arr_23 [i_4] [i_5] = var_8;
                }
            }
        }
    }
    var_32 &= (min(var_15, var_14));
    #pragma endscop
}
