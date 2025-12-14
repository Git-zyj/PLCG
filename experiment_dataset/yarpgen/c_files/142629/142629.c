/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_3] |= 5;
                            var_15 = (((((((1 ? var_3 : 112))) || (arr_8 [i_2 - 2] [i_2 + 3] [i_2] [i_2 + 2]))) ? (min(((81 ? 1 : (arr_10 [9] [i_2 + 3] [13] [i_0] [i_0]))), (arr_10 [7] [i_1] [i_1] [i_3] [10]))) : (min(((9223372036854775807 ^ (arr_10 [i_0] [i_0] [i_0] [i_0] [0]))), (var_7 <= var_10)))));
                        }
                    }
                }
                var_16 = (max(var_16, ((((((arr_8 [i_0] [i_0] [i_0] [i_0]) + 2147483647)) << ((((2220912034214761476 ? 11 : (arr_8 [i_0] [i_1] [i_0] [i_1]))) - 11)))))));
                arr_12 [i_0] [i_0] = 4630280957277097101;
            }
        }
    }
    #pragma endscop
}
