/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = ((((!(arr_0 [i_0] [i_0]))) || (((((1 ? (arr_0 [i_0] [i_0]) : -1710078656))) <= (arr_1 [i_0])))));

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            arr_7 [i_1 + 1] [i_0] = (min(((-(((arr_6 [i_0] [i_0]) / (arr_4 [i_0] [i_1]))))), (min(var_4, (arr_6 [i_1 + 3] [i_1 + 3])))));
            var_16 = (min(var_16, (arr_1 [i_0])));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_17 *= var_11;
            var_18 = (min(var_18, (((138139524 ? var_13 : var_13)))));
        }
        for (int i_3 = 2; i_3 < 17;i_3 += 1)
        {
            var_19 |= (~(max(-1710078643, 17752591338145702432)));
            var_20 = (max(6, (arr_0 [7] [i_3 - 2])));
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    {
                        arr_22 [i_0] [i_4] [i_5] [i_6] [i_6] = var_6;
                        var_21 = (arr_15 [i_0]);
                    }
                }
            }
        }
        var_22 ^= (arr_13 [i_0] [i_0]);
    }
    var_23 = (max(var_23, var_1));
    var_24 = (!var_4);
    #pragma endscop
}
