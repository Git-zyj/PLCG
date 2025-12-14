/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            var_10 = (-32767 - 1);
            var_11 = var_4;

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                arr_6 [i_2] [i_1] [i_0] = ((((min(var_7, ((var_0 << (((var_5 + 5529) - 9))))))) % (~15414690047185324647)));
                var_12 |= var_0;
                /* LoopNest 2 */
                for (int i_3 = 3; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        {
                            var_13 ^= (arr_2 [i_0] [i_0] [i_0]);
                            var_14 = (min(var_14, var_4));
                        }
                    }
                }
                var_15 = (min(var_15, 102));
                arr_11 [i_1] [i_1] [i_1] = (((-32767 - 1) ? 0 : 0));
            }
        }
        arr_12 [i_0] [i_0] = (max((min(var_7, (arr_3 [22]))), (((arr_3 [14]) ? 0 : (arr_3 [18])))));
        arr_13 [i_0] [i_0] = (0 >= 65535);
        var_16 = (min(var_16, var_7));
    }
    var_17 = -var_3;
    #pragma endscop
}
