/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= 831855075;
    var_15 ^= ((-var_13 ? (~1) : (((1015066757 + var_3) ? var_2 : -var_3))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_16 -= -831855075;
                    var_17 *= 5085;
                    arr_9 [7] [i_1] [i_1] = ((-(arr_1 [i_0])));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_18 = (((((((-7725339266533429161 ? var_4 : var_8)) % 831855056))) ? (~2545160091) : 359695816));
                        arr_14 [i_0] [i_1] [i_2] [i_3] = ((((7667095376327685440 % (18445 + -831855053))) % (((-831855075 ? -831855070 : (arr_1 [i_2]))))));
                        arr_15 [5] = (((max(var_8, (var_0 - 4294967295))) << (53703 - 53683)));
                        var_19 -= ((!((min((arr_11 [i_0] [i_1] [10] [i_3]), -113)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
