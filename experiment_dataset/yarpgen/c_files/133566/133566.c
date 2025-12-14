/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 = ((16384 == (((!(arr_1 [i_0]))))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_20 &= ((((min((arr_8 [i_0] [i_1] [i_1] [i_2] [i_0]), (arr_7 [12]))) + ((((arr_1 [i_2]) ? (arr_6 [i_0] [i_1 + 1]) : var_15))))));

                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            arr_15 [i_0] = (arr_13 [i_0]);
                            arr_16 [i_0] [i_0] [i_0] = ((-(arr_4 [i_0] [i_0] [i_0])));
                        }
                    }
                }
            }
        }
    }
    var_21 = ((-16394 ? (max(var_18, ((var_9 ? var_12 : var_10)))) : (max(((var_8 ? var_0 : var_1)), -16384))));
    #pragma endscop
}
