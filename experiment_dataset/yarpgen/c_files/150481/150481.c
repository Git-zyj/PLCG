/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, (min((((((min(var_11, var_2)))) + ((1547969542 ? 0 : 2746997754)))), (((-(((arr_3 [i_1] [i_1]) ? 0 : 0)))))))));
                    var_14 = ((~(max((~var_0), var_5))));

                    for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        var_15 = (min(var_15, ((((((~var_5) ? (((4 / (arr_7 [i_0] [i_0] [i_2] [2] [i_3])))) : (((arr_8 [i_0] [i_1] [i_1] [i_3]) ? (arr_6 [i_2] [i_1] [i_2] [6]) : var_4)))) | ((((min(1855298160, -30))))))))));
                        var_16 ^= (((((var_10 ? -255 : (arr_4 [i_0] [i_0] [i_0])))) | (((arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_6 [i_2] [i_1] [i_2] [i_2]) : ((min(-279459146, var_2)))))));
                        var_17 = (var_8 | -29984);
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        arr_11 [i_0] [i_4] [i_1] [i_2] [i_4] [i_4] = ((0 ? (((arr_2 [i_0]) << (arr_5 [2] [2] [i_0]))) : ((~(arr_5 [1] [i_2] [i_0])))));
                        var_18 *= arr_0 [i_4 - 1];
                    }
                    var_19 = ((-(min((((arr_10 [9] [i_1] [i_1] [i_1] [5]) + (arr_2 [i_0]))), ((max((arr_4 [i_0] [i_1] [i_2]), 3)))))));
                }
            }
        }
    }
    var_20 = var_7;
    #pragma endscop
}
