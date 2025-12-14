/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((-(min(((min(2, var_1))), (min(var_7, var_1)))))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_10 [9] [i_1] = (min((min((min(var_2, (arr_6 [i_0] [i_1] [i_0]))), (min(0, var_11)))), ((~(min((arr_9 [i_0] [i_1 - 1] [i_2] [i_0]), var_2))))));
                    var_15 ^= (min(((min((((~(arr_5 [i_1])))), (min((arr_2 [i_2]), -1))))), ((-(min(var_8, var_4))))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        arr_13 [i_3] = (~var_11);

        for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
        {
            var_16 = ((~(~1)));
            /* LoopNest 2 */
            for (int i_5 = 4; i_5 < 7;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    {
                        arr_23 [i_3 - 1] [i_4] [i_4] [i_4] [i_6] [i_6] = ((-(~var_0)));
                        var_17 = ((~(~var_11)));
                        arr_24 [i_4] = ((~(~14588)));
                    }
                }
            }
        }
        for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
        {
            var_18 = (max(var_18, (+-0)));
            arr_27 [0] [i_7 - 1] [0] &= ((!(((~(arr_4 [i_3 - 1] [i_3]))))));
            arr_28 [i_7] = (!var_9);
            arr_29 [i_7] = (+-23668804);
        }
        arr_30 [i_3] = (!-var_9);
        var_19 = (+-24);
    }
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        arr_34 [i_8] = ((!(((-((min(var_1, (arr_7 [i_8])))))))));
        var_20 &= ((((!((min(1, (arr_6 [i_8] [i_8] [i_8]))))))));
        var_21 ^= (min((min((min(var_13, 227)), (((!(arr_5 [i_8])))))), ((min((!46163709), ((!(arr_33 [i_8] [i_8]))))))));
    }
    var_22 = (min(((~(~var_4))), (((~(min(-47, var_7)))))));
    var_23 = (min((((!((min(var_3, var_6)))))), (min((~var_9), (!var_5)))));
    #pragma endscop
}
