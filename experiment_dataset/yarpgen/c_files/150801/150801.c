/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= var_7;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_0 + 2] [i_0 + 2] [i_2] = (-28794 ? 1 : 49152);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_11 = (min(var_11, ((max(0, 147)))));
                                arr_13 [i_0] [i_0 + 1] [i_0] [i_3] [i_0] [i_0] = (((((arr_9 [i_0] [3] [i_4 - 1] [i_0 + 1] [i_1 - 1] [i_4]) ? var_3 : (arr_9 [i_3] [i_1] [i_4 + 3] [i_0 + 1] [i_1 - 1] [i_3])))) ? (arr_11 [1] [i_1] [i_3] [i_1] [i_1 - 1] [1] [i_1]) : (min(1, (min(96, 917980933969052853)))));
                                arr_14 [i_3] = (arr_3 [i_1] [i_3]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_12 = ((var_6 >= ((((var_7 == (var_2 && var_3)))))));
    var_13 = (min(var_13, (((0 ? 1750782212 : 260638352)))));
    var_14 = (max(var_14, 142));
    #pragma endscop
}
