/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (1171366103 << (((min(-2901403312, 83)) - 83)));
        var_17 -= (((((arr_2 [i_0] [i_0]) / (arr_1 [i_0] [i_0]))) >= (((var_1 % (arr_0 [10] [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_18 = (arr_3 [i_1]);
        var_19 &= (arr_3 [i_1]);
        arr_8 [i_1] = (!-2147483628);
        var_20 = ((~(((arr_1 [i_1] [i_1]) ? (arr_1 [i_1] [i_1]) : var_4))));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
    {
        var_21 = (((min((arr_7 [1]), var_6)) - (arr_7 [0])));
        var_22 = (max(var_22, (arr_3 [i_2])));
        var_23 -= ((((2901403329 ? 1393563984 : 0)) == ((max((arr_2 [i_2] [i_2]), var_10)))));
        var_24 ^= ((((var_6 + (arr_3 [i_2]))) * ((((!((((arr_11 [i_2]) ? (arr_5 [6] [10]) : var_2)))))))));
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] = var_10;
        arr_15 [i_3] [i_3] = (!var_4);
        arr_16 [i_3] = ((1393563990 << (min(((((arr_10 [i_3]) > var_5))), (max(1, 2901403312))))));
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 11;i_6 += 1)
                {
                    {
                        arr_24 [i_3] [i_5] [i_5] [0] [i_3] [i_3] = (((-(arr_1 [i_4 - 1] [i_6 - 1]))));
                        var_25 = ((~(min((max(var_0, (arr_9 [i_6] [i_5]))), ((((arr_23 [6] [i_5] [i_5] [1] [i_6 - 2]) % (arr_21 [i_3] [i_3] [2]))))))));
                    }
                }
            }
        }
    }
    var_26 = (min(var_26, ((max(((var_10 ^ ((max(var_5, var_5))))), var_12)))));
    var_27 = (min(-59849, 2901403329));
    #pragma endscop
}
