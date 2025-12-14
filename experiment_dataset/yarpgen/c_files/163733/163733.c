/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= (((((var_1 ? (!var_4) : (!var_6)))) || var_8));
    var_11 = var_4;

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_12 = (min(var_12, ((max(71, (arr_0 [18] [i_0]))))));
        arr_3 [i_0] = ((((((((282279210 ? 53 : 71))) ? (arr_0 [8] [8]) : ((((arr_0 [i_0] [i_0]) ? -32764 : var_9)))))) ? ((((((arr_0 [i_0] [i_0]) > var_2))))) : -0));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 23;i_4 += 1)
                {
                    {
                        var_13 = (min(var_13, (((~(((((arr_1 [i_1] [15]) ? var_2 : -23603)))))))));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_14 = ((arr_4 [i_3 + 1] [i_4 - 1]) ? (arr_4 [i_3 - 1] [i_4 - 1]) : (arr_4 [i_3 + 2] [i_4 - 1]));
                            var_15 = (min(var_15, -9143772962248391738));
                            arr_17 [i_1] [i_2] [i_2] [19] [i_4] = ((!(arr_9 [i_2])));
                        }
                        var_16 = ((((!(!1861087439))) ? (((!((32764 || (arr_5 [i_2])))))) : (arr_11 [i_4] [i_3] [i_1])));
                    }
                }
            }
        }
        var_17 *= var_4;
        var_18 = (((((+(max((arr_8 [i_1] [i_1]), (arr_7 [i_1])))))) ? (((var_7 ? (arr_0 [i_1] [i_1]) : (arr_2 [i_1] [i_1])))) : ((((min(75, 2477943906))) ? (((arr_7 [i_1]) ? (arr_12 [i_1] [4] [4] [i_1]) : var_8)) : (max((arr_2 [i_1] [i_1]), (arr_12 [i_1] [8] [i_1] [i_1])))))));
        var_19 = ((((~0) ^ ((~(arr_12 [i_1] [10] [10] [i_1]))))));
    }
    var_20 *= ((((!(var_8 / 101))) ? var_4 : ((((((var_7 ? var_3 : var_4))) ? (max(2140673406, var_2)) : (max(var_5, -29)))))));
    #pragma endscop
}
