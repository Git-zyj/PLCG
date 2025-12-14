/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= (((((min(var_11, var_4)))) ? ((((min(var_4, var_10))))) : ((var_1 ? var_5 : var_9))));
    var_13 = (max(var_13, (9609504109858878640 < 13)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_14 = 18446744073709551615;
                                arr_16 [i_1] [i_1] [i_3] [i_3] [i_2] = ((((-(max((arr_15 [i_1] [i_1 + 2] [i_2] [i_3] [i_4 + 2]), (arr_6 [i_1] [i_3]))))) & 1));
                                var_15 = (max(var_15, (((!(((arr_10 [i_2]) <= (arr_4 [i_2] [i_3] [i_4]))))))));
                            }
                        }
                    }
                    var_16 = (max(var_16, -1789917583));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_24 [i_1] = (arr_17 [i_0] [i_1] [i_1] [1] [i_6]);
                                var_17 ^= var_4;
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (min(var_1, ((-(!224)))));
    #pragma endscop
}
