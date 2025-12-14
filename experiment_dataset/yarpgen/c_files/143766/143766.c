/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [10] &= (((1206904064 ? 116 : ((max(253, var_11))))));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    {
                        var_20 = 0;
                        var_21 = ((var_13 ? (arr_0 [i_0] [i_1]) : (((((arr_0 [i_0] [i_2]) & var_3))))));
                        arr_10 [i_0] [1] [i_2] [i_0] = (((max((max(var_17, (arr_5 [i_0] [i_0]))), 63)) == (((51085 ^ (arr_9 [i_0] [i_1] [i_2] [i_3] [i_3]))))));
                        var_22 = ((((max((arr_7 [i_0] [i_0] [i_0]), (arr_0 [i_3 - 1] [i_3 + 1])))) ? ((var_6 / (max(-51, var_17)))) : (arr_7 [i_0] [i_1] [i_0])));
                        arr_11 [4] [i_0] [i_0] = (((max((((var_19 || (arr_7 [i_0] [i_1] [i_0])))), var_16)) << (((((max((arr_9 [i_0] [i_1] [0] [0] [i_3]), var_14))) || ((max((arr_7 [i_0] [i_1] [i_0]), (arr_0 [i_2] [4])))))))));
                    }
                }
            }
            arr_12 [i_0] = (((var_17 ? var_16 : var_10)));
            var_23 = (arr_9 [i_0] [i_0] [i_0] [i_1] [1]);
            arr_13 [i_0] = (((((((!(arr_9 [i_0] [i_0] [1] [1] [i_0])))))) ? 51 : (max((max(var_1, (arr_9 [i_0] [i_0] [i_0] [i_1] [i_1]))), 11))));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            arr_16 [i_0] [i_0] [i_0] = (arr_7 [i_0] [i_0] [i_0]);
            var_24 += ((~(min(((11304128008780455190 ? -1284559124 : 65535)), (arr_1 [0] [8])))));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            arr_21 [2] [i_0] = (arr_20 [i_0]);
            var_25 = (18446744073709551615 / -91);
        }
    }
    var_26 = ((!((((2047 && var_19) + var_15)))));
    var_27 = ((max((((-126 ? var_2 : var_12)), ((3284757658461257970 ? var_15 : var_0))))));
    var_28 = var_19;
    #pragma endscop
}
