/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = (((((var_1 * (-32767 - 1)))) * ((max(((-(arr_0 [i_1]))), (var_7 / 1353319326))))));
                    arr_10 [i_1] [i_2] [i_1] [i_1] = (min((((((6498 << (((((((-2147483647 - 1) - -2147483644)) + 24)) - 4))))) ? (arr_7 [i_0] [i_0] [i_0]) : (min(var_8, var_7)))), ((min(((~(arr_9 [i_0] [i_0] [1]))), (((arr_8 [i_0] [i_1]) ? (arr_8 [i_0] [i_0]) : (arr_2 [i_1]))))))));
                    var_14 = 1;
                    var_15 = ((4502 / (arr_4 [i_2])));
                }
            }
        }
    }
    var_16 = ((((var_3 ? (max(var_9, var_8)) : 10955)) * ((((var_2 << 1) ? ((min(var_2, var_10))) : (var_5 && var_10))))));
    var_17 = -6499;
    #pragma endscop
}
