/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_12 ^= (((var_3 ? var_6 : (max(var_6, var_9)))));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        arr_10 [i_0] [i_2] [i_1 + 1] [i_0] = var_7;
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_4 [i_0 + 2] [i_0 + 1] [i_0 + 2]);
                        var_13 += (arr_3 [i_0 + 1] [i_0 + 1] [i_2 - 3]);
                    }
                    for (int i_4 = 1; i_4 < 15;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            var_14 = 2338126070359570509;
                            var_15 = (max(var_15, 2338126070359570509));
                            var_16 = (i_0 % 2 == 0) ? ((((-9233 + 2147483647) << (((arr_7 [i_0] [i_0]) - 487799145))))) : ((((-9233 + 2147483647) << (((((arr_7 [i_0] [i_0]) - 487799145)) - 2663652293)))));
                            arr_18 [i_0] [i_1] [i_5] = var_2;
                            var_17 = ((var_5 | (arr_0 [i_0] [i_0])));
                        }
                        arr_19 [i_0 - 1] [i_0 - 1] [i_1] [i_2] [4] [i_0] = var_0;
                        var_18 = (min(var_18, var_11));
                        var_19 = (!var_7);
                        var_20 = -2338126070359570509;
                    }
                    var_21 = (min(var_21, ((((var_11 | 43914) == (arr_0 [i_1] [i_2]))))));
                }
            }
        }
    }
    var_22 = (((-((35184372088831 ? var_11 : 8184)))));
    var_23 = (((var_6 ? 78 : (~43904))));
    /* LoopNest 3 */
    for (int i_6 = 1; i_6 < 14;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                {
                    var_24 ^= (((max(((max(var_8, (arr_24 [i_6 - 1] [i_6 - 1])))), -18446744073709543432)) / (((max((-32767 - 1), (var_6 >= var_6)))))));
                    var_25 += ((~((31100 << (((~var_9) - 3721378858))))));
                }
            }
        }
    }
    #pragma endscop
}
