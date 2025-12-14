/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 += (((((min(7, (arr_1 [i_0]))))) ? (min((((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0]))), ((((arr_0 [i_0]) <= (arr_1 [i_0])))))) : ((((max((arr_0 [i_0]), var_12))) ? (~var_10) : ((-(arr_1 [i_0])))))));
        arr_2 [i_0] [i_0] = ((-20175 == (((!(arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 10;i_4 += 1)
                {
                    {
                        var_14 = (arr_7 [i_4 - 3]);
                        var_15 = var_8;
                        var_16 = ((((~(arr_1 [i_4 - 3]))) == (((~(arr_4 [i_4 - 3]))))));
                    }
                }
            }
        }
        arr_12 [i_1] [i_1] = (var_3 ? ((min(((20191 & (arr_6 [i_1] [i_1]))), (var_12 | var_5)))) : ((0 ? (~2) : 6)));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_17 = (var_0 ? (arr_0 [i_5]) : (arr_1 [i_5]));
        var_18 = (((arr_14 [i_5] [i_5]) || (arr_14 [i_5] [i_5])));
        /* LoopNest 3 */
        for (int i_6 = 3; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    {
                        var_19 = (((arr_20 [i_5] [i_6 - 1] [i_6 + 3] [i_8]) || (arr_16 [i_6] [i_7] [i_8])));
                        arr_22 [i_5] [i_5] [i_6] = 4294967295;
                    }
                }
            }
        }
        var_20 = (max(var_20, (((!((32759 == (arr_1 [i_5]))))))));
        var_21 = (arr_1 [i_5]);
    }
    var_22 = var_8;
    #pragma endscop
}
