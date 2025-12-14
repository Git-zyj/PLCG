/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((!var_10) ? var_6 : var_15))) ? ((136 / (13617140731795773102 / 1913))) : ((max((var_0 / var_10), (var_5 == var_0))))));
    var_18 = ((((var_0 ? (~10880637175862943028) : (var_3 * 121))) > ((min(-var_15, ((var_2 ? var_14 : var_10)))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_19 = ((((var_12 ? (~-30) : var_6)) << (((arr_1 [i_0] [i_0]) - 37883))));
        arr_2 [i_0] = (((var_3 && var_16) / ((var_16 ? (arr_0 [i_0]) : -5485377931353933165))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            arr_9 [i_1] = (arr_7 [1]);
            var_20 = (((arr_7 [i_2 - 2]) ? (arr_7 [i_2 - 2]) : var_1));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            arr_12 [i_1] [i_1] [i_3] = var_3;
            arr_13 [i_1] = (((arr_0 [i_1]) || (arr_6 [i_3] [i_3] [i_3])));
            var_21 = (max(var_21, (9309 + var_15)));
            var_22 = (arr_1 [7] [7]);
            var_23 = (max(var_23, (!110)));
        }
        var_24 = (((arr_1 [3] [i_1]) ? ((min((arr_1 [i_1] [4]), (arr_1 [i_1] [i_1])))) : (((arr_1 [i_1] [i_1]) >> (((arr_1 [i_1] [i_1]) - 37890))))));
        var_25 = (min((min((var_13 > 0), (max(var_4, var_16)))), ((min((arr_5 [i_1]), (min(-1820244436, (arr_0 [i_1]))))))));
        var_26 = min(((-(arr_7 [i_1]))), (var_10 % 119));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] = (var_9 >> (var_13 - 11121));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                {
                    var_27 = ((~((17 ? var_8 : var_5))));
                    var_28 = (min(var_28, (((var_0 << (((var_4 / var_16) - 122177265955291230)))))));
                }
            }
        }
    }
    #pragma endscop
}
