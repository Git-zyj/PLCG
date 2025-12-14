/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_3 ? var_2 : (min(((var_7 ? var_4 : var_4)), ((max(0, 130)))))));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, var_6));
                    var_15 = (max(var_15, var_9));
                    arr_8 [i_1] = (~var_11);
                }
            }
        }
        var_16 = (max(var_16, ((((((var_0 ? 3729218971366023720 : 3729218971366023720))) ? (((arr_0 [i_0 + 2]) >> (((arr_4 [i_0] [3] [i_0 + 1]) - 930972781)))) : -var_0)))));
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 12;i_4 += 1)
            {
                {
                    var_17 = (min(var_17, (((-(((var_2 + 2147483647) >> (var_10 - 12623))))))));
                    var_18 -= ((((max(var_8, var_11))) - (((!var_8) ? var_7 : var_4))));
                    var_19 = (max(var_19, (((-1276580025 * (min((arr_12 [i_0 + 1] [12] [10] [i_3 - 1]), (arr_12 [i_0 + 2] [10] [0] [i_0 + 2]))))))));
                    arr_14 [i_4] [i_4] [i_4] [i_4] = (max(((-(min(var_3, var_1)))), (arr_5 [i_3 + 2])));
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 21;i_5 += 1)
    {
        arr_18 [21] [i_5] = var_8;
        var_20 &= -var_0;
        var_21 -= ((min((arr_17 [i_5 + 1]), 7408878043678563354)));
        var_22 = (!var_12);
    }
    #pragma endscop
}
