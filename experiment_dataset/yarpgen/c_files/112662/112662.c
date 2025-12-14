/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_2, var_14));
    var_16 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_0] [i_2] = (max((((!(arr_4 [i_0 + 1] [i_0] [i_1 + 2])))), (arr_6 [i_0 + 1] [i_0 - 1] [i_1 + 2])));
                    var_17 += (arr_3 [i_0]);

                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        var_18 = (max(13, (max(var_5, (max(var_4, 38))))));
                        var_19 &= var_14;
                    }

                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        var_20 = ((var_7 ? (-7562789719806111115 - 210) : (((max((arr_6 [i_1 - 1] [i_1 + 2] [i_1 + 1]), (arr_6 [i_1 + 1] [i_1 - 1] [i_1 + 1])))))));
                        var_21 = (max(var_21, ((max((-2925016207895997536 | 109), -17986)))));
                        var_22 = ((((!(arr_4 [i_0 - 1] [i_0] [i_1 + 1]))) && ((max((((arr_1 [i_0] [i_0]) - var_9)), (arr_10 [i_0] [i_0 - 1] [i_1 + 2] [i_2]))))));
                        var_23 ^= (arr_0 [i_4]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
