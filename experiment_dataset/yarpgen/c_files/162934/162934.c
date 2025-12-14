/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((~63) <= (arr_1 [i_0] [i_0]))) && ((max(-32752, (((!(arr_0 [i_0] [i_0])))))))));
        arr_3 [i_0] [i_0] = ((((min(7, (arr_1 [i_0] [i_0]))))) + (min((arr_0 [i_0] [i_0]), 65225)));
        arr_4 [i_0] = 63328;
        arr_5 [i_0] [i_0] = (((var_12 >= 3145728) << ((((((var_5 << (63 - 62))) + ((((arr_1 [i_0] [i_0]) == (arr_1 [i_0] [i_0])))))) - 80280))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (((3145728 / var_7) == ((-(!var_8)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                {
                    var_15 = (((-(arr_6 [i_2] [i_2]))));
                    arr_13 [17] [i_2] [i_3] [i_3] = 32752;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 23;i_5 += 1)
                        {
                            {
                                arr_19 [i_1] [i_3] [i_3 + 2] [0] [i_5] = (((-var_1 + 2147483647) >> var_3));
                                arr_20 [19] [i_2] [i_3] = ((-((max(55, 310)))));
                                var_16 += var_11;
                                var_17 = 8;
                            }
                        }
                    }
                    arr_21 [i_3] [i_2] [i_2] [1] = var_8;
                }
            }
        }
        var_18 = (((((!(arr_16 [i_1] [i_1] [i_1] [i_1] [1])))) >> ((((max(((min(var_1, (arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))), (min(var_4, 310))))) - 282))));
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 0;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 20;i_7 += 1)
        {
            {
                var_19 += (max((((max((arr_16 [i_6] [i_6 + 1] [i_6] [i_6] [10]), 3145719)) << (3145733 - 3145706))), ((max((max(245, (-2147483647 - 1))), ((max(163, var_11))))))));
                arr_26 [i_6] [i_7] = (!var_12);
                var_20 = ((~(((arr_12 [i_6 + 1]) + 1))));
            }
        }
    }
    var_21 &= (min((min(var_10, var_8)), var_8));
    #pragma endscop
}
