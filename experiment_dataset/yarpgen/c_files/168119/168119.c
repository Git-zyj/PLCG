/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_10 = (((((max(1, (arr_1 [i_0] [i_0]))) >> (var_6 - 59))) << var_4));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 22;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 4; i_4 < 22;i_4 += 1)
                        {
                            var_11 ^= ((30 << (var_5 - 9833776629381496095)));
                            var_12 ^= ((1 ? (((arr_0 [19]) ? var_3 : var_2)) : 247));
                        }
                        var_13 += 2147483647;

                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_14 += (((((10 ? var_1 : var_7))) ? 1 : (!1588474500)));
                            var_15 = ((~(min(-1, ((min(var_6, (arr_15 [i_0] [1] [i_0] [18] [i_5] [i_2] [i_5]))))))));
                            var_16 += ((!((-var_9 != (!var_6)))));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_17 = arr_11 [i_0] [i_1] [i_2] [i_3] [i_6] [i_1] [i_6];
                            var_18 = var_8;
                        }
                        for (int i_7 = 1; i_7 < 22;i_7 += 1)
                        {
                            var_19 ^= (((-(arr_8 [18] [i_2] [i_2 + 1]))));
                            var_20 *= ((!((min((((arr_10 [i_7 + 1] [i_0] [i_2] [i_1] [i_0]) / (arr_3 [i_1]))), (!var_0))))));
                        }
                        arr_24 [i_0] [6] [i_3] [i_3] [i_0] = max((!var_8), var_8);
                    }
                }
            }
        }
    }
    var_21 = -1588474501;
    #pragma endscop
}
