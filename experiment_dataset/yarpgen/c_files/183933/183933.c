/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [1] &= ((-(var_15 % -51177293)));
        var_17 = ((((!(arr_0 [i_0])))) > (arr_0 [i_0]));
        arr_3 [i_0] [i_0] = (!var_3);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        var_18 = (((((arr_13 [i_3]) + (arr_13 [i_3]))) << (((!(arr_14 [i_3] [i_2] [i_4] [i_2]))))));
                        arr_16 [i_1] [i_3] = (~-1172410223);
                        var_19 = (max(var_19, ((var_16 <= (arr_12 [i_1] [2] [i_1] [2])))));
                    }
                }
            }
        }
        var_20 += (((51177293 >> (arr_9 [0] [i_1 + 1] [i_1]))));
        var_21 = (max(var_21, (arr_12 [i_1] [i_1] [i_1] [i_1])));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        var_22 = -var_0;
        var_23 = (((arr_17 [i_5] [i_5]) >= (arr_18 [i_5] [i_5])));
        arr_19 [i_5] [i_5] = (((arr_18 [i_5] [i_5]) % (arr_18 [i_5] [i_5])));
        var_24 = (min(var_24, var_1));
    }
    var_25 = (max(var_25, var_15));
    #pragma endscop
}
