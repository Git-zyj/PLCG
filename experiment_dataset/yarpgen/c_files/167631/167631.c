/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_9));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_11 = -var_9;
        var_12 += ((~((754269163 / (arr_1 [11] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_13 ^= (((-2121156428159635783 != var_5) == (((arr_2 [i_1]) & var_8))));

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_14 = (((((var_3 - 119) != (arr_0 [i_2]))) ? -1850854220 : ((+(min((arr_3 [7] [7]), var_0))))));
            var_15 = (max(var_15, (arr_5 [i_1] [i_1])));

            for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
            {
                var_16 = (max((arr_2 [i_2]), var_8));
                var_17 = (max(var_17, (-127 - 1)));
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
            {
                var_18 = (max(var_18, ((((arr_2 [i_4]) >= var_9)))));

                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    arr_14 [1] [i_1] [i_1] [i_1] [i_1] = ((4294967295 ? var_4 : -2121156428159635783));
                    arr_15 [i_1] [i_2] [i_2] [i_2] = (-127 - 1);
                    arr_16 [i_1] [18] [i_4] [17] = var_8;
                    var_19 = -2121156428159635783;
                }
                arr_17 [i_1] [i_1] [i_1] [i_1] = var_0;
                var_20 ^= var_5;
                arr_18 [i_1] = ((~((((-127 - 1) && -857030504283062203)))));
            }
        }
        arr_19 [i_1] = ((((min((arr_11 [i_1] [1] [i_1] [i_1]), (arr_11 [i_1] [i_1] [i_1] [i_1])))) ? var_3 : (min((arr_10 [i_1] [i_1] [i_1]), (arr_10 [i_1] [21] [i_1])))));
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
    {
        var_21 += (arr_11 [4] [i_6] [4] [i_6]);
        arr_23 [i_6] = (max((arr_13 [i_6] [i_6] [i_6] [20]), -2121156428159635783));
    }
    var_22 = 127;
    var_23 |= var_4;
    #pragma endscop
}
