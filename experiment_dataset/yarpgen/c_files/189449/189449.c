/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (min(((max((((256 ? 65264 : 65264))), ((var_13 ? 325098594 : 1792926918))))), (min((max((arr_1 [i_0] [i_0]), var_14)), ((var_13 ? 1769124797 : (arr_1 [i_0] [i_0])))))));
        var_17 = (max(var_17, 18446744073709551615));
        var_18 = (((min(((~(arr_1 [i_0] [i_0]))), (arr_0 [i_0] [i_0]))) / (min((arr_1 [i_0] [i_0]), ((max(var_9, (arr_0 [i_0] [5]))))))));
    }
    /* LoopNest 3 */
    for (int i_1 = 3; i_1 < 9;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 11;i_3 += 1)
            {
                {
                    var_19 = (i_1 % 2 == zero) ? ((((((arr_3 [i_1 + 1]) + 2147483647)) << ((((((~(arr_4 [i_1]))) + 29)) - 28))))) : ((((((arr_3 [i_1 + 1]) + 2147483647)) << ((((((((((~(arr_4 [i_1]))) + 29)) - 28)) + 6)) - 5)))));
                    arr_13 [i_1] = (min(((max(5097804016756247115, var_15))), ((((((-(arr_5 [i_1] [i_1])))) ? (((var_15 + 9223372036854775807) << (1 - 1))) : -1)))));
                }
            }
        }
    }
    #pragma endscop
}
