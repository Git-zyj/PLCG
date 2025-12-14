/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((~(((!((min(14998959845700963050, var_11))))))));
    var_20 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_0] [1] [i_2] = ((~((((3447784228008588565 ? (arr_3 [14] [i_1] [i_0]) : 896)) ^ ((min(55, 15)))))));
                    arr_8 [i_2] [i_2] = (min((((~136) + (((arr_0 [i_0]) ? -23 : var_10)))), (min(((~(arr_4 [i_0] [i_2]))), (((!(arr_4 [i_2] [i_0]))))))));
                    var_21 = (arr_2 [i_2]);

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_11 [i_0] [i_2] [i_0] [i_1] [4] [i_1] = (--4);
                        var_22 = var_8;
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_23 = 14998959845700963050;
                        arr_14 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2] = (arr_9 [i_0] [i_0] [i_2] [i_0]);
                        var_24 = (arr_13 [i_0] [i_1] [i_2] [i_4]);
                    }
                    arr_15 [i_0] [i_2] [i_2] [i_0] = -139;
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        arr_19 [i_5] = (min((((arr_17 [i_5] [i_5]) ? (arr_12 [i_5] [i_5] [i_5] [i_5]) : 1)), (((arr_17 [i_5] [i_5]) ? (arr_12 [i_5] [i_5] [i_5] [i_5]) : -1))));
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    {
                        var_25 = ((~(((((3447784228008588577 | (arr_24 [i_7])))) ? (((15 < (arr_24 [1])))) : -1))));
                        var_26 = (arr_24 [i_5]);
                        arr_27 [i_5] [i_5] [i_5] [i_5] [i_6] = var_2;
                    }
                }
            }
        }
    }
    var_27 = var_3;
    #pragma endscop
}
