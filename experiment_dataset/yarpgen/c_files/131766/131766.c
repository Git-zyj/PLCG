/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((var_8 ? ((((arr_2 [i_0]) * (2147483642 * 2127467499)))) : var_0));
        var_14 ^= (min(7, 18446744073709551613));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_15 = (min(var_15, (((~(arr_5 [i_1]))))));
                        arr_14 [i_0] [i_0] = -11;
                        var_16 = ((~(min((min(var_10, var_5)), ((((-7 + 2147483647) << (((var_10 + 8215315678345366750) - 20)))))))));
                    }
                }
            }
        }
        arr_15 [i_0] = -1211880547;
        var_17 = (((arr_3 [i_0]) < var_1));
    }
    var_18 -= var_13;
    #pragma endscop
}
