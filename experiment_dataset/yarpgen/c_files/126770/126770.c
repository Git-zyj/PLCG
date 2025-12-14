/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_11 = ((!((!(min(var_7, var_7))))));
                        arr_13 [i_0] = (max(var_4, var_7));

                        for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                        {
                            arr_17 [8] [i_1] [i_2 + 1] [i_1] [i_0] &= var_3;
                            var_12 *= var_1;
                        }
                        for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                        {
                            var_13 = var_2;
                            var_14 = ((max(var_4, (arr_6 [i_0 + 1] [i_0] [i_0 + 3]))));
                            var_15 = (max(var_15, ((max((max(var_8, var_9)), ((max(var_3, (arr_15 [i_3] [6])))))))));
                            var_16 = var_1;
                        }
                    }
                }
            }
        }
        var_17 = var_10;
    }
    for (int i_6 = 0; i_6 < 0;i_6 += 1)
    {
        arr_24 [i_6] = min((max((((!(arr_22 [i_6 + 1])))), (max(var_2, var_8)))), ((min(var_7, (arr_23 [i_6] [i_6])))));
        var_18 &= var_8;
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        var_19 = var_6;
        arr_27 [i_7] [i_7] = (+-var_9);
        var_20 ^= (max((max((arr_25 [i_7]), ((max(var_7, var_2))))), (arr_25 [i_7])));
    }
    var_21 = (max(var_9, var_4));
    #pragma endscop
}
