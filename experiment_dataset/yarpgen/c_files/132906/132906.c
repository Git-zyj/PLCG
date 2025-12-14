/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, -var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_0] = ((-(min(((var_3 ? 4281494517 : var_6)), 4281494523))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_11 = 13373813220896118075;
                        arr_12 [i_0] [2] [i_2] [i_2] [i_3] [i_2] = (var_6 - var_4);
                    }
                    arr_13 [i_0] [i_2] [i_0] [i_0] = ((arr_0 [i_1]) >> (((arr_0 [i_0]) - 423595486)));
                }
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    arr_18 [i_0] [i_1] [i_0] = (min(5072930852813433528, 5));
                    arr_19 [i_1] = ((((-(arr_1 [i_0]))) > (((!(arr_1 [i_0]))))));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        var_12 = (arr_23 [i_5]);
        var_13 = max(((((arr_23 [i_5]) ? (arr_23 [i_5]) : (arr_23 [i_5])))), (min((min(var_9, var_9)), (arr_21 [i_5]))));
        arr_24 [19] = (((arr_23 [i_5]) ? ((((!(arr_23 [i_5]))))) : (max((min(4281494535, (arr_23 [i_5]))), var_8))));
    }
    #pragma endscop
}
