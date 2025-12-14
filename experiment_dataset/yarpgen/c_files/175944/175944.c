/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((min(var_2, 0)) & var_16));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 = ((((arr_2 [i_0]) & (arr_2 [6]))));
        arr_3 [i_0] [i_0] = (((arr_1 [i_0]) ? (((~((-32766 ? (arr_1 [i_0]) : var_17))))) : var_9));
        var_20 = (13931 / -24774);
        var_21 = (max((arr_0 [i_0] [i_0]), (max(var_4, ((51605 ? 177 : 4294967295))))));
        var_22 = (((arr_1 [i_0]) ? var_14 : 14521));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_23 = (max(((((min((arr_4 [i_1] [i_1]), var_2))) % (max((arr_0 [i_1] [i_1]), var_4)))), (((24767 && ((max(1686579503, 1))))))));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 7;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 8;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 7;i_5 += 1)
                        {
                            {
                                var_24 = (max(var_3, 1));
                                var_25 = (((-27346 + 2147483647) >> ((((((((arr_8 [i_3]) ? 51617 : (arr_6 [i_2])))) ? (arr_17 [i_3]) : (((arr_15 [i_1]) ? (arr_17 [i_1]) : (arr_15 [i_2]))))) - 734850016352399674))));
                            }
                        }
                    }
                    var_26 = (min(((min(1, (arr_1 [i_2])))), (max((arr_11 [i_3]), (arr_4 [i_1] [9])))));
                    var_27 = (arr_2 [0]);
                    var_28 = (arr_10 [i_1] [i_1] [i_3] [i_3]);
                }
            }
        }
        var_29 = var_10;
        arr_18 [i_1] = ((+(((((var_0 ? (arr_6 [0]) : var_3))) ? 13930 : (((!(arr_16 [i_1] [i_1] [i_1] [i_1]))))))));
    }
    var_30 = ((~((~(2768840346 ^ 4147817005911447655)))));
    #pragma endscop
}
