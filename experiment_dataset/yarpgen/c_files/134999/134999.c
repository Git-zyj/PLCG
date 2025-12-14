/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 ^= var_0;
        var_14 = (arr_0 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 23;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            arr_13 [i_0] [i_1 - 1] [i_2] [i_3] = (var_11 ? ((44 ? 1984 : 0)) : var_2);
                            var_15 |= (((((var_5 ? ((2123157817 ? 262144 : 1773748129)) : ((max((arr_12 [i_3 + 2] [i_2]), 1984)))))) ? (((arr_10 [i_0] [i_1] [i_2 + 2] [i_1 + 2] [i_4]) - var_8)) : (((((max(var_9, 1))) > ((var_11 ? var_2 : var_4)))))));
                            var_16 = ((var_3 ? var_4 : (((((262144 ? var_1 : 4294967295))) ? (((var_7 ? 65535 : var_10))) : var_3))));
                            var_17 = (max(var_17, var_7));
                        }
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            arr_17 [i_0] [i_3] [i_2] [i_3 + 2] [i_5] [i_5] = -1;
                            var_18 = (min(18446744073709551615, (min(var_1, var_0))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            var_19 += 31258;
                            var_20 = (!133693440);
                            var_21 = ((!(arr_8 [i_1 + 2] [i_2 - 4] [i_2 - 4])));
                            var_22 = (min(var_22, 536870912));
                        }
                        var_23 = (min(var_23, (((188 ? -927601136 : var_0)))));
                        var_24 |= (min(var_1, ((min((arr_18 [i_0] [i_2] [i_1 + 1]), (arr_18 [i_0] [i_2] [i_0]))))));
                    }
                }
            }
        }
    }
    var_25 |= (((((max(44, var_10)))) - (0 - 8969245793843674121)));
    #pragma endscop
}
